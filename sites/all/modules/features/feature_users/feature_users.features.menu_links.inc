<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_users_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar:calendar
  $menu_links['menu-toolbar:calendar'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-toolbar:manage/arts
  $menu_links['menu-toolbar:manage/arts'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'manage/arts',
    'router_path' => 'manage/arts',
    'link_title' => 'Chat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-toolbar:manage/events
  $menu_links['menu-toolbar:manage/events'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'manage/events',
    'router_path' => 'manage/events',
    'link_title' => 'Online',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-toolbar:manage/items
  $menu_links['menu-toolbar:manage/items'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'manage/items',
    'router_path' => 'manage/items',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-toolbar:marketplace
  $menu_links['menu-toolbar:marketplace'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'marketplace',
    'router_path' => 'marketplace',
    'link_title' => 'Market',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-toolbar:messages
  $menu_links['menu-toolbar:messages'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'messages',
    'router_path' => 'messages',
    'link_title' => 'Message',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-toolbar:node/add
  $menu_links['menu-toolbar:node/add'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-toolbar:user
  $menu_links['menu-toolbar:user'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: navigation:manage/arts
  $menu_links['navigation:manage/arts'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'manage/arts',
    'router_path' => 'manage/arts',
    'link_title' => 'Arts',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'workspace/%',
  );
  // Exported menu link: navigation:manage/events
  $menu_links['navigation:manage/events'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'manage/events',
    'router_path' => 'manage/events',
    'link_title' => 'Manage Events',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'workspace/%',
  );
  // Exported menu link: navigation:manage/items
  $menu_links['navigation:manage/items'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'manage/items',
    'router_path' => 'manage/items',
    'link_title' => 'Items',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'workspace/%',
  );
  // Exported menu link: navigation:node/add/art
  $menu_links['navigation:node/add/art'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/art',
    'router_path' => 'node/add/art',
    'link_title' => 'Art',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'manage/arts',
  );
  // Exported menu link: navigation:node/add/event
  $menu_links['navigation:node/add/event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'manage/events',
  );
  // Exported menu link: navigation:node/add/forum
  $menu_links['navigation:node/add/forum'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Add Topic',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new forum topic',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'workspace/%',
  );
  // Exported menu link: navigation:node/add/item
  $menu_links['navigation:node/add/item'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/item',
    'router_path' => 'node/add/item',
    'link_title' => 'Item',
    'options' => array(
      'attributes' => array(
        'title' => 'Buy & Exchange',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'manage/items',
  );
  // Exported menu link: navigation:workspace/%
  $menu_links['navigation:workspace/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'workspace/%',
    'router_path' => 'workspace/%',
    'link_title' => 'My workspace',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Add Topic');
  t('Add content');
  t('Art');
  t('Arts');
  t('Calendar');
  t('Chat');
  t('Event');
  t('Item');
  t('Items');
  t('Manage Events');
  t('Market');
  t('Message');
  t('My workspace');
  t('News');
  t('Online');


  return $menu_links;
}
