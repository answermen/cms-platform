<?php
/**
 * @file
 * cms_platform_display_suite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_platform_display_suite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
