<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function feature_users_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: admin_menu
  $menus['admin_menu'] = array(
    'menu_name' => 'admin_menu',
    'title' => 'Administration menu',
    'description' => '',
  );
  // Exported menu: menu-admin
  $menus['menu-admin'] = array(
    'menu_name' => 'menu-admin',
    'title' => 'Administer',
    'description' => '',
  );
  // Exported menu: menu-my-content
  $menus['menu-my-content'] = array(
    'menu_name' => 'menu-my-content',
    'title' => 'Manage Content',
    'description' => '',
  );
  // Exported menu: menu-profilemenu
  $menus['menu-profilemenu'] = array(
    'menu_name' => 'menu-profilemenu',
    'title' => 'Profile menu',
    'description' => '',
  );
  // Exported menu: menu-toolbar
  $menus['menu-toolbar'] = array(
    'menu_name' => 'menu-toolbar',
    'title' => 'Toolbar',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administer');
  t('Administration menu');
  t('Manage Content');
  t('Profile menu');
  t('Toolbar');


  return $menus;
}
