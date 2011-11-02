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
    'weight' => '0',
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
    'weight' => '0',
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
    'weight' => '0',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Calendar');
  t('Market');
  t('Message');


  return $menu_links;
}
