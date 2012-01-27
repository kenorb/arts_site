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

  // Exported permission: create education content
  $permissions['create education content'] = array(
    'name' => 'create education content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
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

  // Exported permission: create group content
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create simplenews content
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create story content
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete any education content
  $permissions['delete any education content'] = array(
    'name' => 'delete any education content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
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

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete any simplenews content
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any story content
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
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

  // Exported permission: delete own education content
  $permissions['delete own education content'] = array(
    'name' => 'delete own education content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
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

  // Exported permission: delete own group content
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: edit any education content
  $permissions['edit any education content'] = array(
    'name' => 'edit any education content',
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

  // Exported permission: view revisions of any art content
  $permissions['view revisions of any art content'] = array(
    'name' => 'view revisions of any art content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any blog content
  $permissions['view revisions of any blog content'] = array(
    'name' => 'view revisions of any blog content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any chat content
  $permissions['view revisions of any chat content'] = array(
    'name' => 'view revisions of any chat content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any chatroom content
  $permissions['view revisions of any chatroom content'] = array(
    'name' => 'view revisions of any chatroom content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view revisions of any education content
  $permissions['view revisions of any education content'] = array(
    'name' => 'view revisions of any education content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any event content
  $permissions['view revisions of any event content'] = array(
    'name' => 'view revisions of any event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any faq content
  $permissions['view revisions of any faq content'] = array(
    'name' => 'view revisions of any faq content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any forum content
  $permissions['view revisions of any forum content'] = array(
    'name' => 'view revisions of any forum content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any group content
  $permissions['view revisions of any group content'] = array(
    'name' => 'view revisions of any group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any idea content
  $permissions['view revisions of any idea content'] = array(
    'name' => 'view revisions of any idea content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any item content
  $permissions['view revisions of any item content'] = array(
    'name' => 'view revisions of any item content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any membership content
  $permissions['view revisions of any membership content'] = array(
    'name' => 'view revisions of any membership content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any page content
  $permissions['view revisions of any page content'] = array(
    'name' => 'view revisions of any page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any panel content
  $permissions['view revisions of any panel content'] = array(
    'name' => 'view revisions of any panel content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any product content
  $permissions['view revisions of any product content'] = array(
    'name' => 'view revisions of any product content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any profile content
  $permissions['view revisions of any profile content'] = array(
    'name' => 'view revisions of any profile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'moderator',
      '3' => 'premium buyer',
      '4' => 'premium seller',
      '5' => 'user admin',
    ),
  );

  // Exported permission: view revisions of any simplenews content
  $permissions['view revisions of any simplenews content'] = array(
    'name' => 'view revisions of any simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of any story content
  $permissions['view revisions of any story content'] = array(
    'name' => 'view revisions of any story content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own art content
  $permissions['view revisions of own art content'] = array(
    'name' => 'view revisions of own art content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  // Exported permission: view revisions of own blog content
  $permissions['view revisions of own blog content'] = array(
    'name' => 'view revisions of own blog content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own chat content
  $permissions['view revisions of own chat content'] = array(
    'name' => 'view revisions of own chat content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  // Exported permission: view revisions of own chatroom content
  $permissions['view revisions of own chatroom content'] = array(
    'name' => 'view revisions of own chatroom content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  // Exported permission: view revisions of own education content
  $permissions['view revisions of own education content'] = array(
    'name' => 'view revisions of own education content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own event content
  $permissions['view revisions of own event content'] = array(
    'name' => 'view revisions of own event content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  // Exported permission: view revisions of own faq content
  $permissions['view revisions of own faq content'] = array(
    'name' => 'view revisions of own faq content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own forum content
  $permissions['view revisions of own forum content'] = array(
    'name' => 'view revisions of own forum content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own group content
  $permissions['view revisions of own group content'] = array(
    'name' => 'view revisions of own group content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own idea content
  $permissions['view revisions of own idea content'] = array(
    'name' => 'view revisions of own idea content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own item content
  $permissions['view revisions of own item content'] = array(
    'name' => 'view revisions of own item content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own membership content
  $permissions['view revisions of own membership content'] = array(
    'name' => 'view revisions of own membership content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own page content
  $permissions['view revisions of own page content'] = array(
    'name' => 'view revisions of own page content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own panel content
  $permissions['view revisions of own panel content'] = array(
    'name' => 'view revisions of own panel content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own product content
  $permissions['view revisions of own product content'] = array(
    'name' => 'view revisions of own product content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'moderator',
    ),
  );

  // Exported permission: view revisions of own profile content
  $permissions['view revisions of own profile content'] = array(
    'name' => 'view revisions of own profile content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  // Exported permission: view revisions of own simplenews content
  $permissions['view revisions of own simplenews content'] = array(
    'name' => 'view revisions of own simplenews content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  // Exported permission: view revisions of own story content
  $permissions['view revisions of own story content'] = array(
    'name' => 'view revisions of own story content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'art collector',
      '2' => 'authenticated user',
      '3' => 'moderator',
      '4' => 'premium buyer',
      '5' => 'premium seller',
      '6' => 'user admin',
    ),
  );

  return $permissions;
}
