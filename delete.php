<?php

define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$query = new EntityFieldQuery();
$result = $query->entityCondition('entity_type', 'node')
	->entityCondition('bundle', 'content_from_source')
	->fieldCondition('field_video', 'value', '%youtube%', 'LIKE')
	->execute();

if (!empty($result)) {
	$nids = array_keys($result['node']);
	node_delete_multiple($nids);
	print_r($nids);
}