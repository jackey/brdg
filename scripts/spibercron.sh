#!/usr/bin/env php

<?php
set_time_limit(60 * 10); // 10 mins
$command_name = array_shift($argv);
$root = dirname(__FILE__);

$uris = $argv;

$output = '';

foreach ($uris as $uri) {
	 exec("$root/drupal.sh $uri", $o);
	 $output[] = $o;
}

$string = print_r($output, TRUE);
print $string;

