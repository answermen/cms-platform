<?php
/**
 * @file
 * cms_platform_language.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_platform_language_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
