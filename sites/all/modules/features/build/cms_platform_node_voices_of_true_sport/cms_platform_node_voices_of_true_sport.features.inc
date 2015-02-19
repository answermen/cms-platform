<?php
/**
 * @file
 * cms_platform_node_voices_of_true_sport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_platform_node_voices_of_true_sport_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_platform_node_voices_of_true_sport_node_info() {
  $items = array(
    'voices_of_true_sport' => array(
      'name' => t('Voices of True Sport'),
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
