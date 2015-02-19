<?php
/**
 * @file
 * cms_platform_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cms_platform_users_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
