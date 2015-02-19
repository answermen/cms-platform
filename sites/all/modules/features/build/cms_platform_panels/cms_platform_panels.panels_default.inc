<?php
/**
 * @file
 * cms_platform_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cms_platform_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'node_tabs';
  $mini->category = '';
  $mini->admin_title = 'Node Tabs';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'middle' => NULL,
    ),
    'style' => 'tabs',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '304781eb-59c3-4fb3-9996-83fb8c9a786f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13daa0c7-55e3-4a08-9d44-b051eff435e0';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13daa0c7-55e3-4a08-9d44-b051eff435e0';
    $display->content['new-13daa0c7-55e3-4a08-9d44-b051eff435e0'] = $pane;
    $display->panels['middle'][0] = 'new-13daa0c7-55e3-4a08-9d44-b051eff435e0';
    $pane = new stdClass();
    $pane->pid = 'new-265d8b0e-0112-4d7a-be17-7932b98657c7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'video_embed_field',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'video_style' => 'normal',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '265d8b0e-0112-4d7a-be17-7932b98657c7';
    $display->content['new-265d8b0e-0112-4d7a-be17-7932b98657c7'] = $pane;
    $display->panels['middle'][1] = 'new-265d8b0e-0112-4d7a-be17-7932b98657c7';
    $pane = new stdClass();
    $pane->pid = 'new-142d0baf-0559-47a2-afeb-68b06f9b5ef3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '142d0baf-0559-47a2-afeb-68b06f9b5ef3';
    $display->content['new-142d0baf-0559-47a2-afeb-68b06f9b5ef3'] = $pane;
    $display->panels['middle'][2] = 'new-142d0baf-0559-47a2-afeb-68b06f9b5ef3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['node_tabs'] = $mini;

  return $export;
}
