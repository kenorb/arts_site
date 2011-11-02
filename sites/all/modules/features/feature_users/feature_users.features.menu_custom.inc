<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function feature_users_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-toolbar
  $menus['menu-toolbar'] = array(
    'menu_name' => 'menu-toolbar',
    'title' => 'Toolbar',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Toolbar');


  return $menus;
}
