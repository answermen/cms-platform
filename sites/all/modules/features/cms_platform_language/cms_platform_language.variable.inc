<?php
/**
 * @file
 * cms_platform_language.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function cms_platform_language_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'site_frontpage' => 'node/2',
  'site_name' => 'CMS Platform',
  'site_slogan' => '',
);
  $realm_variables['language']['fr'] = array(
  'site_frontpage' => 'node/1',
  'site_name' => 'CMS Platform',
  'site_slogan' => '',
);

return $realm_variables;
}
