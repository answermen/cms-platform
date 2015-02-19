<?php
/**
 * @file
 * cms_platform_node_frequently_asked_question.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cms_platform_node_frequently_asked_question_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acc_group|node|frequently_asked_question|accordian';
  $field_group->group_name = 'group_acc_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequently_asked_question';
  $field_group->mode = 'accordian';
  $field_group->parent_name = 'group_acc_item';
  $field_group->data = array(
    'label' => 'Accordion Group',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'group_acc_item',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-acc-group field-group-accordion',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_acc_group|node|frequently_asked_question|accordian'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acc_item|node|frequently_asked_question|accordian';
  $field_group->group_name = 'group_acc_item';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frequently_asked_question';
  $field_group->mode = 'accordian';
  $field_group->parent_name = 'group_acc_group';
  $field_group->data = array(
    'label' => 'Accordion Item',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'group_acc_group',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-acc-item field-group-accordion-item',
      ),
    ),
  );
  $export['group_acc_item|node|frequently_asked_question|accordian'] = $field_group;

  return $export;
}
