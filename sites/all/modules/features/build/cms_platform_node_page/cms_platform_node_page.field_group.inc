<?php
/**
 * @file
 * cms_platform_node_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cms_platform_node_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|page|content_reference';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'content_reference';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title and count',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Title and count',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_title|node|page|content_reference'] = $field_group;

  return $export;
}
