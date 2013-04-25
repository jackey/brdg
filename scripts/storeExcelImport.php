#!/usr/bin/env php
<?php
/** Include path **/
set_include_path(get_include_path() . PATH_SEPARATOR . 'libraries/phpexcel/Classes/');

/** PHPExcel_IOFactory */
include 'PHPExcel/IOFactory.php';

$excel_path = "../docs/China Store 20130329 copy-1.xls";

if (!file_exists($excel_path)) {
	echo "Store excel doesn't exists!";
	die;
}

$file_type = PHPExcel_IOFactory::identify($excel_path);

$reader = PHPExcel_IOFactory::createReader($file_type);

$dataObj = $reader->load($excel_path);

$sheetData = $dataObj->getActiveSheet()->toArray(null,true,true,true);

// helper function to check current row is valid
function is_valid_data($item) {
	if (empty($item["B"]) || is_string($item["B"])) {
		return FALSE;
	}
	return TRUE;
}

function load_data_from_row($item) {
	$zipcode = $item["D"];
	$region = "";
	$phone = $item["F"];
	$latitude = $item["G"];
	$longitude = $item["H"];
	$cdate = date("Y-m-d H:i:s");
	$status = strtolower($item["A"]) == "off" ? "off" : "on";
	$address_cn = $item["E"];
	$address_en = $item["C"];
	$ref = $item["B"];

	return array(
		'zipcode' => $zipcode, 
		'region' => "", 
		"phone" => $phone, 
		"latitude" => $latitude,
		"longitude" => $longitude,
		"cdate" => $cdate,
		"status" => $status,
		"ref" => $ref,
		"address_en" => $address_en,
		"address_cn" => $address_cn
	);
}

$mysql = mysql_connect(
		"127.0.0.1",
		"root",
		"admin"
	);
mysql_select_db("subwaydb", $mysql);
mysql_set_charset("utf8");

foreach ($sheetData as $item) {
	if (is_valid_data($item)) {
		$row = load_data_from_row($item);
		// Insert into basic table.
		mysql_query("INSERT INTO stores 
			(region, phone, latitude, longitude, cdate, status, ref, zipcode) 
			VALUES('".$row["region"]."', '".$row["phone"]."', '".$row["latitude"]."', '".$row['longitude']."', '".$row["cdate"]."', '".$row["status"]."', '".$row["ref"]."', '".$row["zipcode"]."')"
		, $mysql);
		$sid = mysql_insert_id($mysql);

		// Insert into translate table.
		$ret = mysql_query("INSERT INTO translation (tablename, tableid, tablefield, locale, content, cdate, mdate) 
			VALUES ('stores', $sid, 'address', 'en', '".addslashes($row['address_en'])."', '".$row['cdate']."', '".$row['cdate']."')");
		if (!$ret) {
			print 'err';
		}
		else {
			print '.';
		}

		$ret = mysql_query("INSERT INTO translation (tablename, tableid, tablefield, locale, content, cdate, mdate) 
			VALUES ('stores', $sid, 'address', 'cn', '".addslashes($row['address_cn'])."', '".$row['cdate']."', '".$row['cdate']."')");
		if (!$ret) {
			print 'err';
		}
		else {
			print '.';
		}
	}
}