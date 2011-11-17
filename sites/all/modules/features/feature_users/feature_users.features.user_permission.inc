<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function feature_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer recaptcha
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
