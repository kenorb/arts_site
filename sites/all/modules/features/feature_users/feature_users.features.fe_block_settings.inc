<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function feature_users_default_fe_block_settings() {
  $export = array();

  // saw
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-4',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['comment-0'] = array(
    'module' => 'comment',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-47',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-62',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-0'] = array(
    'module' => 'forum',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-64',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-60',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['gtranslate-0'] = array(
    'module' => 'gtranslate',
    'delta' => '0',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-56',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['menu-admin_menu'] = array(
    'module' => 'menu',
    'delta' => 'admin_menu',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-46',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-admin'] = array(
    'module' => 'menu',
    'delta' => 'menu-admin',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '38',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-my-content'] = array(
    'module' => 'menu',
    'delta' => 'menu-my-content',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-65',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Manage',
    'cache' => '-1',
  );

  $theme['menu-menu-profilemenu'] = array(
    'module' => 'menu',
    'delta' => 'menu-profilemenu',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-toolbar'] = array(
    'module' => 'menu',
    'delta' => 'menu-toolbar',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '4',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-59',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_forum-1'] = array(
    'module' => 'og_forum',
    'delta' => '1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-44',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-57',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['tagadelic-1'] = array(
    'module' => 'tagadelic',
    'delta' => '1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-57',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '8',
  );

  $theme['uc_cart-0'] = array(
    'module' => 'uc_cart',
    'delta' => '0',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-64',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-64',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-59',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-58',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-my-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'my-1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-30',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-pending'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'pending',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-32',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-user-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'user-1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '31',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-arts_most_viewed2'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-arts_most_viewed2',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_1'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-63',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'arts
arts/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_2'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_2',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_3',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_4'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_4',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_5'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_5',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-user_profile_arts'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-user_profile_arts',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-8',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5385d2b7049fbb6b7e0b15b802e1260d'] = array(
    'module' => 'views',
    'delta' => '5385d2b7049fbb6b7e0b15b802e1260d',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '13',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-6c3ffaa29f497ced05cc331915c86b7c'] = array(
    'module' => 'views',
    'delta' => '6c3ffaa29f497ced05cc331915c86b7c',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '33',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-704ea0bd0da0d455eb2ffbc2e043a655'] = array(
    'module' => 'views',
    'delta' => '704ea0bd0da0d455eb2ffbc2e043a655',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Arts-arts_front_page'] = array(
    'module' => 'views',
    'delta' => 'Arts-arts_front_page',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-62',
    'region' => 'content',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'Recent Arts',
    'cache' => '-1',
  );

  $theme['views-Community-community_block'] = array(
    'module' => 'views',
    'delta' => 'Community-community_block',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-block_1'] = array(
    'module' => 'views',
    'delta' => 'Events-block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '5',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-block_2'] = array(
    'module' => 'views',
    'delta' => 'Events-block_2',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '6',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'Events-calendar_block_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-63',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-events'] = array(
    'module' => 'views',
    'delta' => 'Events-events',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '7',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-events_page_block'] = array(
    'module' => 'views',
    'delta' => 'Events-events_page_block',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-59',
    'region' => 'content',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'events
events/*',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['views-Events-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Events-featured_events',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '8',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-block_1'] = array(
    'module' => 'views',
    'delta' => 'Featured-block_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-55',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-block_2'] = array(
    'module' => 'views',
    'delta' => 'Featured-block_2',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-54',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-affe25460ab5a0603ea7b3d6f2f9da88'] = array(
    'module' => 'views',
    'delta' => 'affe25460ab5a0603ea7b3d6f2f9da88',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '9',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-author_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'author_list-block_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-60',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '28',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-calendar_block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-58',
    'region' => '',
    'custom' => '1',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-friends-block_1'] = array(
    'module' => 'views',
    'delta' => 'friends-block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '18',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-friends_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'friends_online-block_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-62',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Friends online',
    'cache' => '-1',
  );

  $theme['views-image_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'image_block-block_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-62',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'arts
arts/*
art/*',
    'title' => 'Recent arts',
    'cache' => '-1',
  );

  $theme['views-image_block-block_2'] = array(
    'module' => 'views',
    'delta' => 'image_block-block_2',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-52',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_my-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_my-block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-29',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-recent_activity-global_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-global_activity',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '35',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-recent_activity-recent_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-recent_activity',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-65',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-user_arts-user_arts_block'] = array(
    'module' => 'views',
    'delta' => 'user_arts-user_arts_block',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-63',
    'region' => 'content',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'User Arts',
    'cache' => '-1',
  );

  $theme['views-who_is_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'who_is_online-block_1',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-61',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => 'global $is_logged; return $is_logged;',
    'title' => 'Moderators and critics online',
    'cache' => '-1',
  );

  $export['saw'] = $theme;

  // saw_pushbutton
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['comment-0'] = array(
    'module' => 'comment',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-32',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-37',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-0'] = array(
    'module' => 'forum',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-42',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-35',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['gtranslate-0'] = array(
    'module' => 'gtranslate',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-41',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['menu-admin_menu'] = array(
    'module' => 'menu',
    'delta' => 'admin_menu',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-31',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-admin'] = array(
    'module' => 'menu',
    'delta' => 'menu-admin',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-40',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-my-content'] = array(
    'module' => 'menu',
    'delta' => 'menu-my-content',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Manage',
    'cache' => '-1',
  );

  $theme['menu-menu-profilemenu'] = array(
    'module' => 'menu',
    'delta' => 'menu-profilemenu',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-toolbar'] = array(
    'module' => 'menu',
    'delta' => 'menu-toolbar',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-29',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_forum-1'] = array(
    'module' => 'og_forum',
    'delta' => '1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-41',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['tagadelic-1'] = array(
    'module' => 'tagadelic',
    'delta' => '1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-29',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '8',
  );

  $theme['uc_cart-0'] = array(
    'module' => 'uc_cart',
    'delta' => '0',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-40',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-39',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-37',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-30',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-my-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'my-1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-pending'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'pending',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-user-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'user-1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-arts_most_viewed2'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-arts_most_viewed2',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_1'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'arts
arts/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_2'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_2',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_3',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_4'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_4',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_5'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_5',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-user_profile_arts'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-user_profile_arts',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5385d2b7049fbb6b7e0b15b802e1260d'] = array(
    'module' => 'views',
    'delta' => '5385d2b7049fbb6b7e0b15b802e1260d',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-6c3ffaa29f497ced05cc331915c86b7c'] = array(
    'module' => 'views',
    'delta' => '6c3ffaa29f497ced05cc331915c86b7c',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-704ea0bd0da0d455eb2ffbc2e043a655'] = array(
    'module' => 'views',
    'delta' => '704ea0bd0da0d455eb2ffbc2e043a655',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Arts-arts_front_page'] = array(
    'module' => 'views',
    'delta' => 'Arts-arts_front_page',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'Recent Arts',
    'cache' => '-1',
  );

  $theme['views-Community-community_block'] = array(
    'module' => 'views',
    'delta' => 'Community-community_block',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-block_1'] = array(
    'module' => 'views',
    'delta' => 'Events-block_1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-block_2'] = array(
    'module' => 'views',
    'delta' => 'Events-block_2',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'Events-calendar_block_1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-events'] = array(
    'module' => 'views',
    'delta' => 'Events-events',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-events_page_block'] = array(
    'module' => 'views',
    'delta' => 'Events-events_page_block',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'events
events/*',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['views-Events-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Events-featured_events',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-block_1'] = array(
    'module' => 'views',
    'delta' => 'Featured-block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-34',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-block_2'] = array(
    'module' => 'views',
    'delta' => 'Featured-block_2',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-33',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-affe25460ab5a0603ea7b3d6f2f9da88'] = array(
    'module' => 'views',
    'delta' => 'affe25460ab5a0603ea7b3d6f2f9da88',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-author_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'author_list-block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-35',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-block_1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '9',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-calendar_block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-38',
    'region' => 'right',
    'custom' => '1',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-friends-block_1'] = array(
    'module' => 'views',
    'delta' => 'friends-block_1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-friends_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'friends_online-block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-39',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Friends online',
    'cache' => '-1',
  );

  $theme['views-image_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'image_block-block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-32',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'arts
arts/*
art/*',
    'title' => 'Recent arts',
    'cache' => '-1',
  );

  $theme['views-image_block-block_2'] = array(
    'module' => 'views',
    'delta' => 'image_block-block_2',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-31',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_my-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_my-block_1',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-recent_activity-global_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-global_activity',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-recent_activity-recent_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-recent_activity',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-user_arts-user_arts_block'] = array(
    'module' => 'views',
    'delta' => 'user_arts-user_arts_block',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'User Arts',
    'cache' => '-1',
  );

  $theme['views-who_is_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'who_is_online-block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-36',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => 'global $is_logged; return $is_logged;',
    'title' => 'Moderators and critics online',
    'cache' => '-1',
  );

  $export['saw_pushbutton'] = $theme;

  // garland
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['comment-0'] = array(
    'module' => 'comment',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-7',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-0'] = array(
    'module' => 'forum',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['gtranslate-0'] = array(
    'module' => 'gtranslate',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['menu-admin_menu'] = array(
    'module' => 'menu',
    'delta' => 'admin_menu',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-admin'] = array(
    'module' => 'menu',
    'delta' => 'menu-admin',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '-12',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-my-content'] = array(
    'module' => 'menu',
    'delta' => 'menu-my-content',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Manage',
    'cache' => '-1',
  );

  $theme['menu-menu-profilemenu'] = array(
    'module' => 'menu',
    'delta' => 'menu-profilemenu',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-toolbar'] = array(
    'module' => 'menu',
    'delta' => 'menu-toolbar',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_forum-1'] = array(
    'module' => 'og_forum',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['tagadelic-1'] = array(
    'module' => 'tagadelic',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '8',
  );

  $theme['uc_cart-0'] = array(
    'module' => 'uc_cart',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '-11',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '-12',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '-13',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-my-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'my-1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-pending'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'pending',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user_relationship_blocks-user-1'] = array(
    'module' => 'user_relationship_blocks',
    'delta' => 'user-1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-arts_most_viewed2'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-arts_most_viewed2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_1'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'arts
arts/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_2'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_3',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_4'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_4',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-page_5'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-page_5',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views--exp-Arts-user_profile_arts'] = array(
    'module' => 'views',
    'delta' => '-exp-Arts-user_profile_arts',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-5385d2b7049fbb6b7e0b15b802e1260d'] = array(
    'module' => 'views',
    'delta' => '5385d2b7049fbb6b7e0b15b802e1260d',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-6c3ffaa29f497ced05cc331915c86b7c'] = array(
    'module' => 'views',
    'delta' => '6c3ffaa29f497ced05cc331915c86b7c',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-704ea0bd0da0d455eb2ffbc2e043a655'] = array(
    'module' => 'views',
    'delta' => '704ea0bd0da0d455eb2ffbc2e043a655',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Arts-arts_front_page'] = array(
    'module' => 'views',
    'delta' => 'Arts-arts_front_page',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'Recent Arts',
    'cache' => '-1',
  );

  $theme['views-Community-community_block'] = array(
    'module' => 'views',
    'delta' => 'Community-community_block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-block_1'] = array(
    'module' => 'views',
    'delta' => 'Events-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-block_2'] = array(
    'module' => 'views',
    'delta' => 'Events-block_2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'Events-calendar_block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-events'] = array(
    'module' => 'views',
    'delta' => 'Events-events',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Events-events_page_block'] = array(
    'module' => 'views',
    'delta' => 'Events-events_page_block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'events
events/*',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['views-Events-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Events-featured_events',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-block_1'] = array(
    'module' => 'views',
    'delta' => 'Featured-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-block_2'] = array(
    'module' => 'views',
    'delta' => 'Featured-block_2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-affe25460ab5a0603ea7b3d6f2f9da88'] = array(
    'module' => 'views',
    'delta' => 'affe25460ab5a0603ea7b3d6f2f9da88',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-author_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'author_list-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-calendar_block_1',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '0',
    'region' => 'right',
    'custom' => '1',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-friends-block_1'] = array(
    'module' => 'views',
    'delta' => 'friends-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-friends_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'friends_online-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Friends online',
    'cache' => '-1',
  );

  $theme['views-image_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'image_block-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'arts
arts/*
art/*',
    'title' => 'Recent arts',
    'cache' => '-1',
  );

  $theme['views-image_block-block_2'] = array(
    'module' => 'views',
    'delta' => 'image_block-block_2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_my-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_my-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-recent_activity-global_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-global_activity',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-recent_activity-recent_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-recent_activity',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-user_arts-user_arts_block'] = array(
    'module' => 'views',
    'delta' => 'user_arts-user_arts_block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => 'User Arts',
    'cache' => '-1',
  );

  $theme['views-who_is_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'who_is_online-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '2',
    'pages' => 'global $is_logged; return $is_logged;',
    'title' => 'Moderators and critics online',
    'cache' => '-1',
  );

  $export['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
