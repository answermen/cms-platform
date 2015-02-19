<?php
/**
 * @file
 * cms_platform_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cms_platform_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add_accordion';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'js' => array(
      'Bartik' => array(
        'themes/bartik/color/preview.js' => 0,
      ),
      'truesport' => array(
        'sites/all/themes/truesport/supplied_html/js/bootstrap.js' => 0,
        'sites/all/themes/truesport/supplied_html/js/bootstrap.min.js' => 0,
        'sites/all/themes/truesport/supplied_html/js/main.js' => 0,
        'sites/all/themes/truesport/supplied_html/js/npm.js' => 0,
        'sites/all/themes/truesport/scripts/min/accordion-min.js' => 0,
        'sites/all/themes/truesport/scripts/accordion.js' => 'sites/all/themes/truesport/scripts/accordion.js',
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['add_accordion'] = $context;

  return $export;
}
