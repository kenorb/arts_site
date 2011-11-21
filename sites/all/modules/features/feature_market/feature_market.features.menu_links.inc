<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_market_menu_default_menu_links() {
  $menu_links = array();

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
  // Translatables
  // Included for use with string extractors like potx.
  t('Market');


  return $menu_links;
}
