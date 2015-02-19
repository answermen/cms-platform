<?php
/**
 * @file
 * cms_platform_beans.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cms_platform_beans_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'content_reference';
  $bean_type->label = 'Content Reference';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['content_reference'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'custom_content_block';
  $bean_type->label = 'Custom Content Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['custom_content_block'] = $bean_type;

  return $export;
}
