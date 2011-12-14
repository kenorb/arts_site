<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_community_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:community
  $menu_links['primary-links:community'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'community',
    'router_path' => 'community',
    'link_title' => 'Community',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Community');


  return $menu_links;
}
