<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function feature_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer rsvp
  $permissions['administer rsvp'] = array(
    'name' => 'administer rsvp',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: maintain rsvp
  $permissions['maintain rsvp'] = array(
    'name' => 'maintain rsvp',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: rsvp invite friendlist
  $permissions['rsvp invite friendlist'] = array(
    'name' => 'rsvp invite friendlist',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: rsvp invite user_relationships
  $permissions['rsvp invite user_relationships'] = array(
    'name' => 'rsvp invite user_relationships',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: rsvp multiple invitations per event
  $permissions['rsvp multiple invitations per event'] = array(
    'name' => 'rsvp multiple invitations per event',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: rsvp on events
  $permissions['rsvp on events'] = array(
    'name' => 'rsvp on events',
    'roles' => array(
      '0' => 'admin',
      '1' => 'premium buyer',
      '2' => 'premium seller',
    ),
  );

  // Exported permission: rsvp on own events
  $permissions['rsvp on own events'] = array(
    'name' => 'rsvp on own events',
    'roles' => array(
      '0' => 'admin',
      '1' => 'premium buyer',
      '2' => 'premium seller',
    ),
  );

  return $permissions;
}
