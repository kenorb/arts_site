<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function feature_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: access chat rooms
  $permissions['access chat rooms'] = array(
    'name' => 'access chat rooms',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: access chats
  $permissions['access chats'] = array(
    'name' => 'access chats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer chat rooms
  $permissions['administer chat rooms'] = array(
    'name' => 'administer chat rooms',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer chats
  $permissions['administer chats'] = array(
    'name' => 'administer chats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer faq
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer faq order
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer recaptcha
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create chat rooms
  $permissions['create chat rooms'] = array(
    'name' => 'create chat rooms',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create chats
  $permissions['create chats'] = array(
    'name' => 'create chats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create faq
  $permissions['create faq'] = array(
    'name' => 'create faq',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete faq content
  $permissions['delete faq content'] = array(
    'name' => 'delete faq content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit faq
  $permissions['edit faq'] = array(
    'name' => 'edit faq',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own chat rooms
  $permissions['edit own chat rooms'] = array(
    'name' => 'edit own chat rooms',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own chats
  $permissions['edit own chats'] = array(
    'name' => 'edit own chats',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own faq
  $permissions['edit own faq'] = array(
    'name' => 'edit own faq',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: staff chat desk
  $permissions['staff chat desk'] = array(
    'name' => 'staff chat desk',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use chat desk
  $permissions['use chat desk'] = array(
    'name' => 'use chat desk',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view faq page
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'art collector',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium buyer',
      '6' => 'premium seller',
      '7' => 'user admin',
    ),
  );

  return $permissions;
}
