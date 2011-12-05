<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: admin_menu:admin/content/rsvp
  $menu_links['admin_menu:admin/content/rsvp'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/content/rsvp',
    'router_path' => 'admin/content/rsvp',
    'link_title' => 'RSVP management',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:admin/settings/rsvp
  $menu_links['admin_menu:admin/settings/rsvp'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/rsvp',
    'router_path' => 'admin/settings/rsvp',
    'link_title' => 'RSVP settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: admin_menu:admin/settings/rsvp/defaults
  $menu_links['admin_menu:admin/settings/rsvp/defaults'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/rsvp/defaults',
    'router_path' => 'admin/settings/rsvp/defaults',
    'link_title' => 'Default settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-9',
    'parent_path' => 'admin/settings/rsvp',
  );
  // Exported menu link: admin_menu:admin/settings/rsvp/general
  $menu_links['admin_menu:admin/settings/rsvp/general'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/settings/rsvp/general',
    'router_path' => 'admin/settings/rsvp/general',
    'link_title' => 'General',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
    'parent_path' => 'admin/settings/rsvp',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/rsvp
  $menu_links['admin_menu:http://drupal.org/project/issues/rsvp'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/rsvp',
    'router_path' => '',
    'link_title' => 'RSVP issue queue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'http://drupal.org',
  );
  // Exported menu link: navigation:admin/content/rsvp
  $menu_links['navigation:admin/content/rsvp'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/content/rsvp',
    'router_path' => 'admin/content/rsvp',
    'link_title' => 'RSVP management',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage all invitations.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: navigation:admin/settings/rsvp
  $menu_links['navigation:admin/settings/rsvp'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/settings/rsvp',
    'router_path' => 'admin/settings/rsvp',
    'link_title' => 'RSVP settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure general RSVP settings.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Default settings');
  t('General');
  t('RSVP issue queue');
  t('RSVP management');
  t('RSVP settings');


  return $menu_links;
}
