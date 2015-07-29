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

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
  );

  return $roles;
}
