<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_users_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: admin_menu:http://drupal.org/project/issues/recaptcha
  $menu_links['admin_menu:http://drupal.org/project/issues/recaptcha'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/recaptcha',
    'router_path' => '',
    'link_title' => 'reCAPTCHA issue queue',
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
  // Exported menu link: menu-my-content:manage/arts
  $menu_links['menu-my-content:manage/arts'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'manage/arts',
    'router_path' => 'manage/arts',
    'link_title' => 'Arts',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Arts',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: menu-my-content:manage/events
  $menu_links['menu-my-content:manage/events'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'manage/events',
    'router_path' => 'manage/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: menu-my-content:manage/forums
  $menu_links['menu-my-content:manage/forums'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'manage/forums',
    'router_path' => 'manage/forums',
    'link_title' => 'Forum Topics',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Forum Topics',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: menu-my-content:manage/items
  $menu_links['menu-my-content:manage/items'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'manage/items',
    'router_path' => 'manage/items',
    'link_title' => 'Items',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Items',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-46',
  );
  // Exported menu link: menu-my-content:node/add/art
  $menu_links['menu-my-content:node/add/art'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'node/add/art',
    'router_path' => 'node/add/art',
    'link_title' => 'Add Art',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Art',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'manage/arts',
  );
  // Exported menu link: menu-my-content:node/add/event
  $menu_links['menu-my-content:node/add/event'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Add Event',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Event',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'manage/events',
  );
  // Exported menu link: menu-my-content:node/add/forum
  $menu_links['menu-my-content:node/add/forum'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Add Forum Topic',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Forum Topic',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'manage/forums',
  );
  // Exported menu link: menu-my-content:node/add/item
  $menu_links['menu-my-content:node/add/item'] = array(
    'menu_name' => 'menu-my-content',
    'link_path' => 'node/add/item',
    'router_path' => 'node/add/item',
    'link_title' => 'Add Item',
    'options' => array(
      'attributes' => array(
        'title' => 'Add Item',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'manage/items',
  );
  // Exported menu link: menu-profilemenu:<front>
  $menu_links['menu-profilemenu:<front>'] = array(
    'menu_name' => 'menu-profilemenu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-profilemenu:node/1
  $menu_links['menu-profilemenu:node/1'] = array(
    'menu_name' => 'menu-profilemenu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => '-',
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
  // Exported menu link: menu-profilemenu:node/2
  $menu_links['menu-profilemenu:node/2'] = array(
    'menu_name' => 'menu-profilemenu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => '-',
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
  // Exported menu link: menu-profilemenu:node/28
  $menu_links['menu-profilemenu:node/28'] = array(
    'menu_name' => 'menu-profilemenu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Upgrade to premium?',
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
  // Exported menu link: menu-profilemenu:user/me/edit
  $menu_links['menu-profilemenu:user/me/edit'] = array(
    'menu_name' => 'menu-profilemenu',
    'link_path' => 'user/me/edit',
    'router_path' => 'user/%/edit',
    'link_title' => 'Account Settings',
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
  // Exported menu link: menu-profilemenu:user/me/edit/profile
  $menu_links['menu-profilemenu:user/me/edit/profile'] = array(
    'menu_name' => 'menu-profilemenu',
    'link_path' => 'user/me/edit/profile',
    'router_path' => 'user/%/edit/profile',
    'link_title' => 'Privacy Settings',
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
  // Exported menu link: menu-toolbar:events
  $menu_links['menu-toolbar:events'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'events',
    'router_path' => 'events',
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
  // Exported menu link: menu-toolbar:faq
  $menu_links['menu-toolbar:faq'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Frequency Asked Questions',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Exported menu link: menu-toolbar:market
  $menu_links['menu-toolbar:market'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'market',
    'router_path' => 'market',
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
    'weight' => '-47',
  );
  // Exported menu link: menu-toolbar:news
  $menu_links['menu-toolbar:news'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'news',
    'router_path' => 'news',
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
  // Exported menu link: menu-toolbar:node/59
  $menu_links['menu-toolbar:node/59'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'node/59',
    'router_path' => 'node/%',
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
  // Exported menu link: menu-toolbar:online
  $menu_links['menu-toolbar:online'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'online',
    'router_path' => 'online',
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
  // Exported menu link: menu-toolbar:workspace/me
  $menu_links['menu-toolbar:workspace/me'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'workspace/me',
    'router_path' => 'workspace/%',
    'link_title' => 'Manage',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage Arts, Events, Items, etc.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:events
  $menu_links['primary-links:events'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: secondary-links:arts
  $menu_links['secondary-links:arts'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'arts',
    'router_path' => 'arts',
    'link_title' => 'Buy Student Art',
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
  // Exported menu link: secondary-links:node/add/art
  $menu_links['secondary-links:node/add/art'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/add/art',
    'router_path' => 'node/add/art',
    'link_title' => 'Sell My Art',
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
  t('-');
  t('Account');
  t('Account Settings');
  t('Add Art');
  t('Add Event');
  t('Add Forum Topic');
  t('Add Item');
  t('Arts');
  t('Buy Student Art');
  t('Calendar');
  t('Chat');
  t('Events');
  t('Forum Topics');
  t('Help');
  t('Home');
  t('Items');
  t('Manage');
  t('Market');
  t('Message');
  t('News');
  t('Online');
  t('Privacy Settings');
  t('Sell My Art');
  t('Upgrade to premium?');
  t('reCAPTCHA issue queue');


  return $menu_links;
}
