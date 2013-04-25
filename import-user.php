<?php

define('DRUPAL_ROOT', getcwd());

// $_SERVER['HTTP_HOST'] = 'subdomain1.example.com';

//$_SERVER['HTTP_HOST']       = 'http://action-catering.com';
$_SERVER['HTTP_HOST']       = 'default';
$_SERVER['PHP_SELF']        = '/index.php';
$_SERVER['REMOTE_ADDR']     = '127.0.0.1';
$_SERVER['SERVER_SOFTWARE'] = NULL;
$_SERVER['REQUEST_METHOD']  = 'GET';
$_SERVER['QUERY_STRING']    = '';
$_SERVER['PHP_SELF']        = $_SERVER['REQUEST_URI'] = '/';
$_SERVER['HTTP_USER_AGENT'] = 'console';
// $_SERVER['SCRIPT_NAME'] = '/'.'_actcat_import-cn.php';

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';

echo(DRUPAL_ROOT . '/includes/bootstrap.inc > ');
echo(DRUPAL_BOOTSTRAP_FULL);

drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$excel_path = "./csv/user.xlsx";

/** Include path **/
set_include_path(get_include_path() . PATH_SEPARATOR . 'scripts/libraries/phpexcel/Classes/');

/** PHPExcel_IOFactory */
include 'PHPExcel/IOFactory.php';

if (!file_exists($excel_path)) {
	echo "Store excel doesn't exists!";
	die;
}

$file_type = PHPExcel_IOFactory::identify($excel_path);

$reader = PHPExcel_IOFactory::createReader($file_type);

$dataObj = $reader->load($excel_path);

$sheetData = $dataObj->getActiveSheet()->toArray(null,true,true,true);

foreach ($sheetData as $item) {
	if (!empty($item["B"])) {
		$department = $item["A"];
		$name = $item["B"];
		$first_name = $item["C"];
		$twitter = $item["D"];
		$instagram = $item["E"];
		$weibo = $item["F"];
		$user = new stdClass;
		$user->mail = $first_name.'.'.$name."@fredfarid.com";
		$user->pass = "fredfarid";
		$user->field_instagram_screen_name[LANGUAGE_NONE][] = array('value' => $instagram);
		$user->field_twitter_screen_name[LANGUAGE_NONE][] = array('value' => $twitter);
		$user->field_weibo_screen_name[LANGUAGE_NONE][] = array('value' => $weibo);
		if (user_load(array('name' => $name))) {
			$name = $name.time();
		}
		$user->name = $name;
		$user = user_save($user);
		print_r($user->uid.'.');
	}
}
