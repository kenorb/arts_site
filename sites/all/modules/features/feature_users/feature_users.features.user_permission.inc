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
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium',
      '6' => 'premium buyer',
      '7' => 'premium seller',
      '8' => 'student',
      '9' => 'user admin',
    ),
  );

  // Exported permission: access chats
  $permissions['access chats'] = array(
    'name' => 'access chats',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium',
      '6' => 'premium buyer',
      '7' => 'premium seller',
      '8' => 'student',
      '9' => 'user admin',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'art collector',
      '3' => 'art student',
      '4' => 'authenticated user',
      '5' => 'moderator',
      '6' => 'premium',
      '7' => 'premium buyer',
      '8' => 'premium seller',
      '9' => 'student',
      '10' => 'user admin',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'art collector',
      '3' => 'art student',
      '4' => 'authenticated user',
      '5' => 'moderator',
      '6' => 'premium',
      '7' => 'premium buyer',
      '8' => 'premium seller',
      '9' => 'student',
      '10' => 'user admin',
    ),
  );

  // Exported permission: admin own group forums
  $permissions['admin own group forums'] = array(
    'name' => 'admin own group forums',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer CAPTCHA settings
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: administer cck field privacy
  $permissions['administer cck field privacy'] = array(
    'name' => 'administer cck field privacy',
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

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: administer custom breadcrumbs
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
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

  // Exported permission: administer forums
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer recaptcha
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: create art products
  $permissions['create art products'] = array(
    'name' => 'create art products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art student',
      '2' => 'authenticated user',
      '3' => 'student',
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

  // Exported permission: create forum topics
  $permissions['create forum topics'] = array(
    'name' => 'create forum topics',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: delete all comment replies
  $permissions['delete all comment replies'] = array(
    'name' => 'delete all comment replies',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
      '2' => 'user admin',
    ),
  );

  // Exported permission: delete any comment
  $permissions['delete any comment'] = array(
    'name' => 'delete any comment',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
      '2' => 'user admin',
    ),
  );

  // Exported permission: delete any comments at anytime
  $permissions['delete any comments at anytime'] = array(
    'name' => 'delete any comments at anytime',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
      '2' => 'user admin',
    ),
  );

  // Exported permission: delete any forum topic
  $permissions['delete any forum topic'] = array(
    'name' => 'delete any forum topic',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete faq content
  $permissions['delete faq content'] = array(
    'name' => 'delete faq content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own art products
  $permissions['delete own art products'] = array(
    'name' => 'delete own art products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own comments
  $permissions['delete own comments'] = array(
    'name' => 'delete own comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium',
      '6' => 'premium buyer',
      '7' => 'premium seller',
      '8' => 'student',
      '9' => 'user admin',
    ),
  );

  // Exported permission: delete own comments at anytime
  $permissions['delete own comments at anytime'] = array(
    'name' => 'delete own comments at anytime',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'moderator',
      '4' => 'premium',
      '5' => 'premium buyer',
      '6' => 'premium seller',
      '7' => 'student',
      '8' => 'user admin',
    ),
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own forum topics
  $permissions['delete own forum topics'] = array(
    'name' => 'delete own forum topics',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: edit any forum topic
  $permissions['edit any forum topic'] = array(
    'name' => 'edit any forum topic',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: edit faq
  $permissions['edit faq'] = array(
    'name' => 'edit faq',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own art products
  $permissions['edit own art products'] = array(
    'name' => 'edit own art products',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own chat rooms
  $permissions['edit own chat rooms'] = array(
    'name' => 'edit own chat rooms',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium',
      '6' => 'premium buyer',
      '7' => 'premium seller',
      '8' => 'student',
      '9' => 'user admin',
    ),
  );

  // Exported permission: edit own chats
  $permissions['edit own chats'] = array(
    'name' => 'edit own chats',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium',
      '6' => 'premium buyer',
      '7' => 'premium seller',
      '8' => 'student',
      '9' => 'user admin',
    ),
  );

  // Exported permission: edit own faq
  $permissions['edit own faq'] = array(
    'name' => 'edit own faq',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own forum topics
  $permissions['edit own forum topics'] = array(
    'name' => 'edit own forum topics',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: make forums public
  $permissions['make forums public'] = array(
    'name' => 'make forums public',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: modify cck field privacy
  $permissions['modify cck field privacy'] = array(
    'name' => 'modify cck field privacy',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: modify own cck field privacy
  $permissions['modify own cck field privacy'] = array(
    'name' => 'modify own cck field privacy',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: move all replies up
  $permissions['move all replies up'] = array(
    'name' => 'move all replies up',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: rate content
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'moderator',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: staff chat desk
  $permissions['staff chat desk'] = array(
    'name' => 'staff chat desk',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use PHP for fivestar target
  $permissions['use PHP for fivestar target'] = array(
    'name' => 'use PHP for fivestar target',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: use chat desk
  $permissions['use chat desk'] = array(
    'name' => 'use chat desk',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'art student',
      '3' => 'authenticated user',
      '4' => 'moderator',
      '5' => 'premium',
      '6' => 'premium buyer',
      '7' => 'premium seller',
      '8' => 'student',
      '9' => 'user admin',
    ),
  );

  // Exported permission: use php in custom breadcrumbs
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
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

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  return $permissions;
}
