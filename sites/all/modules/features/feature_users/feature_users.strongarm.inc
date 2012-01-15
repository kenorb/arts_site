<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_users_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_menus';
  $strongarm->value = array(
    'menu-admin' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'menu-admin',
    ),
    'menu-category' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'menu-category',
    ),
    'menu-menu-footerpos1' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'menu-menu-footerpos1',
    ),
    'menu-my-content' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'menu-my-content',
    ),
    'menu-profilemenu' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'menu-profilemenu',
    ),
    'menu-toolbar' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'menu-toolbar',
    ),
    'menu_breadcrumb_default_menu' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu_breadcrumb_default_menu',
      'name' => 'menu_breadcrumb_default_menu',
    ),
    'navigation' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'navigation',
    ),
    'primary-links' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'primary-links',
    ),
    'secondary-links' => array(
      'enabled' => 1,
      'weight' => 0,
      'type' => 'menu',
      'name' => 'secondary-links',
    ),
    'admin_menu' => array(
      'enabled' => FALSE,
      'weight' => 1,
      'type' => 'menu',
      'name' => 'admin_menu',
    ),
  );
  $export['menu_breadcrumb_menus'] = $strongarm;

  return $export;
}
