<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function feature_users_menu_default_menu_links() {

		$query =
<<<EOT
			DELETE FROM menu_links WHERE menu_name = 'secondary-links' LIMIT 5;
			DELETE FROM menu_links WHERE menu_name = 'menu-toolbar';
EOT;
	
		foreach (explode ("\n", $query) as $row)
			_db_query ($row);


  $menu_links = array();

  // Exported menu link: admin_menu:admin/user/captcha
  $menu_links['admin_menu:admin/user/captcha'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/captcha',
    'router_path' => 'admin/user/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: admin_menu:admin/user/captcha/captcha
  $menu_links['admin_menu:admin/user/captcha/captcha'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/captcha/captcha',
    'router_path' => 'admin/user/captcha/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/user/captcha',
  );
  // Exported menu link: admin_menu:admin/user/captcha/captcha/examples
  $menu_links['admin_menu:admin/user/captcha/captcha/examples'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/captcha/captcha/examples',
    'router_path' => 'admin/user/captcha/captcha/examples',
    'link_title' => 'Examples',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/user/captcha/captcha',
  );
  // Exported menu link: admin_menu:admin/user/captcha/captcha/settings
  $menu_links['admin_menu:admin/user/captcha/captcha/settings'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/captcha/captcha/settings',
    'router_path' => 'admin/user/captcha/captcha/settings',
    'link_title' => 'General settings',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/captcha/captcha',
  );
  // Exported menu link: admin_menu:admin/user/captcha/image_captcha
  $menu_links['admin_menu:admin/user/captcha/image_captcha'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/captcha/image_captcha',
    'router_path' => 'admin/user/captcha/image_captcha',
    'link_title' => 'Image CAPTCHA',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/captcha',
  );
  // Exported menu link: admin_menu:admin/user/captcha/recaptcha
  $menu_links['admin_menu:admin/user/captcha/recaptcha'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'admin/user/captcha/recaptcha',
    'router_path' => 'admin/user/captcha/recaptcha',
    'link_title' => 'reCAPTCHA',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/captcha',
  );
  // Exported menu link: admin_menu:http://drupal.org/project/issues/captcha
  $menu_links['admin_menu:http://drupal.org/project/issues/captcha'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'http://drupal.org/project/issues/captcha',
    'router_path' => '',
    'link_title' => 'CAPTCHA issue queue',
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
  // Exported menu link: admin_menu:node/add
  $menu_links['admin_menu:node/add'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Create content',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Exported menu link: admin_menu:node/add/art
  $menu_links['admin_menu:node/add/art'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/art',
    'router_path' => 'node/add/art',
    'link_title' => 'Art',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/blog
  $menu_links['admin_menu:node/add/blog'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/education
  $menu_links['admin_menu:node/add/education'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/education',
    'router_path' => 'node/add/education',
    'link_title' => 'Education',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/event
  $menu_links['admin_menu:node/add/event'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/forum
  $menu_links['admin_menu:node/add/forum'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/forum',
    'router_path' => 'node/add/forum',
    'link_title' => 'Forum topic',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/group
  $menu_links['admin_menu:node/add/group'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/group',
    'router_path' => 'node/add/group',
    'link_title' => 'Group',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/idea
  $menu_links['admin_menu:node/add/idea'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/idea',
    'router_path' => 'node/add/idea',
    'link_title' => 'Idea',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/item
  $menu_links['admin_menu:node/add/item'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/item',
    'router_path' => 'node/add/item',
    'link_title' => 'Item',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/membership
  $menu_links['admin_menu:node/add/membership'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/membership',
    'router_path' => 'node/add/membership',
    'link_title' => 'Membership',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/page
  $menu_links['admin_menu:node/add/page'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/panel
  $menu_links['admin_menu:node/add/panel'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/product
  $menu_links['admin_menu:node/add/product'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/product',
    'router_path' => 'node/add/product',
    'link_title' => 'Product',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/profile
  $menu_links['admin_menu:node/add/profile'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/profile',
    'router_path' => 'node/add/profile',
    'link_title' => 'Profile',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/simplenews
  $menu_links['admin_menu:node/add/simplenews'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/simplenews',
    'router_path' => 'node/add/simplenews',
    'link_title' => 'Newsletter issue',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: admin_menu:node/add/story
  $menu_links['admin_menu:node/add/story'] = array(
    'menu_name' => 'admin_menu',
    'link_path' => 'node/add/story',
    'router_path' => 'node/add/story',
    'link_title' => 'Story',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'admin_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
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
  // Exported menu link: menu-toolbar:node/113
  $menu_links['menu-toolbar:node/113'] = array(
    'menu_name' => 'menu-toolbar',
    'link_path' => 'node/113',
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
  // Exported menu link: navigation:admin/user/captcha
  $menu_links['navigation:admin/user/captcha'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/user/captcha',
    'router_path' => 'admin/user/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer how and where CAPTCHAs are used.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user',
  );
  // Exported menu link: navigation:admin/user/captcha/captcha
  $menu_links['navigation:admin/user/captcha/captcha'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/user/captcha/captcha',
    'router_path' => 'admin/user/captcha/captcha',
    'link_title' => 'CAPTCHA',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/user/captcha',
  );
  // Exported menu link: navigation:admin/user/captcha/captcha/examples
  $menu_links['navigation:admin/user/captcha/captcha/examples'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/user/captcha/captcha/examples',
    'router_path' => 'admin/user/captcha/captcha/examples',
    'link_title' => 'Examples',
    'options' => array(
      'attributes' => array(
        'title' => 'An overview of the available challenge types with examples.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'admin/user/captcha/captcha',
  );
  // Exported menu link: navigation:admin/user/captcha/captcha/settings
  $menu_links['navigation:admin/user/captcha/captcha/settings'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/user/captcha/captcha/settings',
    'router_path' => 'admin/user/captcha/captcha/settings',
    'link_title' => 'General settings',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/captcha/captcha',
  );
  // Exported menu link: navigation:admin/user/captcha/image_captcha
  $menu_links['navigation:admin/user/captcha/image_captcha'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/user/captcha/image_captcha',
    'router_path' => 'admin/user/captcha/image_captcha',
    'link_title' => 'Image CAPTCHA',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/user/captcha',
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
  // Exported menu link: navigation:manage/forums
  $menu_links['navigation:manage/forums'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'manage/forums',
    'router_path' => 'manage/forums',
    'link_title' => 'Forums',
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
    'link_title' => 'Add forum topic',
    'options' => array(
      'attributes' => array(
        'title' => 'A <em>forum topic</em> is the initial post to a new discussion thread within a forum.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'manage/forums',
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
  t('Add forum topic');
  t('Art');
  t('Arts');
  t('Blog entry');
  t('Buy Student Art');
  t('CAPTCHA');
  t('CAPTCHA issue queue');
  t('Calendar');
  t('Chat');
  t('Create content');
  t('Education');
  t('Event');
  t('Examples');
  t('Forum topic');
  t('Forums');
  t('General settings');
  t('Group');
  t('Help');
  t('Idea');
  t('Image CAPTCHA');
  t('Item');
  t('Items');
  t('Manage');
  t('Manage Events');
  t('Market');
  t('Membership');
  t('Message');
  t('My workspace');
  t('News');
  t('Newsletter issue');
  t('Online');
  t('Page');
  t('Panel');
  t('Privacy Settings');
  t('Product');
  t('Profile');
  t('Sell My Art');
  t('Story');
  t('Upgrade to premium?');
  t('reCAPTCHA');
  t('reCAPTCHA issue queue');


  return $menu_links;
}
