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
  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Add content');
  t('Calendar');
  t('Chat');
  t('Market');
  t('Message');
  t('News');
  t('Online');


  return $menu_links;
}
