<?php
/**
 * @file
 * cms_platform_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cms_platform_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panelizer';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panelizer_node';
  $handler->weight = -100;
  $handler->conf = array(
    'title' => 'Node panelizer',
    'context' => 'argument_entity_id:node_1',
    'access' => array(),
  );
  $export['node_view_panelizer'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panelizer';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panelizer_node';
  $handler->weight = -100;
  $handler->conf = array(
    'title' => 'Term panelizer',
    'context' => 'argument_term_1',
    'access' => array(),
  );
  $export['term_view_panelizer'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panelizer';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panelizer_node';
  $handler->weight = -100;
  $handler->conf = array(
    'title' => 'User panelizer',
    'context' => 'argument_entity_id:user_1',
    'access' => array(),
  );
  $export['user_view_panelizer'] = $handler;

  return $export;
}
