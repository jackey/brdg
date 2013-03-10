<?php
/**
 * @file
 * brdg_component.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function brdg_component_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function brdg_component_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function brdg_component_node_info() {
  $items = array(
    'content_from_source' => array(
      'name' => t('Content From Source'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
