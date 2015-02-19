<?php
/**
 * @file
 * cms_platform_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_platform_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
