<?php
/**
 * @file
 * cms_platform_node_frequently_asked_question.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_platform_node_frequently_asked_question_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_platform_node_frequently_asked_question_node_info() {
  $items = array(
    'frequently_asked_question' => array(
      'name' => t('Frequently Asked Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
