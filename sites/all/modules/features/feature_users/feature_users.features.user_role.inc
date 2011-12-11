<?php

/**
 * Implementation of hook_user_default_roles().
 */
function feature_users_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: art collector
  $roles['art collector'] = array(
    'name' => 'art collector',
  );

  // Exported role: art student
  $roles['art student'] = array(
    'name' => 'art student',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: moderator
  $roles['moderator'] = array(
    'name' => 'moderator',
  );

  // Exported role: premium
  $roles['premium'] = array(
    'name' => 'premium',
  );

  // Exported role: premium buyer
  $roles['premium buyer'] = array(
    'name' => 'premium buyer',
  );

  // Exported role: premium seller
  $roles['premium seller'] = array(
    'name' => 'premium seller',
  );

  // Exported role: student
  $roles['student'] = array(
    'name' => 'student',
  );

  // Exported role: user admin
  $roles['user admin'] = array(
    'name' => 'user admin',
  );

  return $roles;
}
