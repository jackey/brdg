<?php
/**
 * @file
 * brdg_component.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function brdg_component_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Allowed Email Domain';
  $rule->name = 'allowed_email_domain';
  $rule->field_name = 'field_email';
  $rule->col = 'value';
  $rule->entity_type = 'comment';
  $rule->bundle = 'comment_node_content_from_source';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => '$value = "jziwenchen@123.com";

$value = $this->value;
preg_match("/(gmail\\.com|123\\.com)/", $value, $matches);
if (count($matches) <= 1) {
  $this->set_error();
}
',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Your Email is not allowed by system';
  $export['allowed_email_domain'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'is_email';
  $rule->name = 'is_email';
  $rule->field_name = 'field_email';
  $rule->col = 'value';
  $rule->entity_type = 'comment';
  $rule->bundle = 'comment_node_content_from_source';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Your Email is wrong';
  $export['is_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Word Blacklist';
  $rule->name = 'word_blacklist';
  $rule->field_name = 'comment_body';
  $rule->col = 'value';
  $rule->entity_type = 'comment';
  $rule->bundle = 'comment_node_content_from_source';
  $rule->validator = 'field_validation_blacklist_validator';
  $rule->settings = array(
    'data' => 'SB,2B,\\+\\+',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'Your word in comment contains illegal';
  $export['word_blacklist'] = $rule;

  return $export;
}
