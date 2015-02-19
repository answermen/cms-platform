<?php
/**
 * @file
 * cms_platform_beans.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cms_platform_beans_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beanslide_caption|field_collection_item|field_beanslide_slides|default';
  $field_group->group_name = 'group_beanslide_caption';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_beanslide_slides';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '1',
    'children' => array(
      0 => 'group_slide_aside',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption',
      'instance_settings' => array(
        'classes' => 'caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_beanslide_caption|field_collection_item|field_beanslide_slides|default'] = $field_group;

  return $export;
}
