<?php
/**
 * @file
 * cms_platform_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cms_platform_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_localization_plugin';
  $strongarm->value = 'i18nstrings';
  $export['views_localization_plugin'] = $strongarm;

  return $export;
}
