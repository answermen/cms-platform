<?php
/**
 * @file
 * cms_platform_media.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function cms_platform_media_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'editor';
  $linkit_profile->admin_title = 'Editor';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:comment' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'article' => 0,
        'page' => 0,
        'frequently_asked_question' => 0,
        'panel' => 0,
        'voices_of_true_sport' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'section' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:comment' => array(
      'result_description' => '',
      'bundles' => array(
        'comment_node_article' => 0,
        'comment_node_page' => 0,
        'comment_node_frequently_asked_question' => 0,
        'comment_node_panel' => 0,
        'comment_node_voices_of_true_sport' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'beanslide' => 0,
        'custom_content_block' => 0,
        'content_reference' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:file' => 'entity',
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['editor'] = $linkit_profile;

  return $export;
}
