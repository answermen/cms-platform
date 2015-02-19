<?php
/**
 * @file
 * cms_platform_site.default_environment_indicator_environments.inc
 */

/**
 * Implements hook_default_environment_indicator_environment().
 */
function cms_platform_site_default_environment_indicator_environment() {
  $export = array();

  $environment = new stdClass();
  $environment->disabled = FALSE; /* Edit this to true to make a default environment disabled initially */
  $environment->api_version = 1;
  $environment->machine = 'default_environment';
  $environment->name = 'Default environment';
  $environment->regexurl = '.*';
  $environment->settings = array(
    'color' => '#34aa33',
    'text_color' => '#ffffff',
    'weight' => '99',
    'position' => 'top',
    'fixed' => 0,
  );
  $export['default_environment'] = $environment;

  return $export;
}
