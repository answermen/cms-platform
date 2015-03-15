<?php
/**
 * @file
 * cms_platform_default_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cms_platform_default_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-share---sidebar'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'share---sidebar',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['crumbs-breadcrumb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'crumbs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['custom_search_blocks-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'custom_search_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language_content'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language_content',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'masquerade',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'answermen_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'answermen_admin',
        'weight' => 0,
      ),
      'cms_default' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cms_default',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
