#!/usr/bin/env php

<?php
set_time_limit(60 * 10); // 10 mins
$command_name = array_shift($argv);
$root = dirname(__FILE__);

$uris = $argv;

foreach ($uris as $uri) {
	 exec("$root/drupal.sh $uri", $o);
	 print_r(implode("\r\n", $o));
}


