<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function feature_users_default_fe_block_settings() {
  $export = array();

  // saw
  $theme = array();

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-61',
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
    'weight' => '-63',
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

  $theme['menu-menu-my-content'] = array(
    'module' => 'menu',
    'delta' => 'menu-my-content',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-62',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Manage',
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
    'weight' => '-45',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['views-6c3ffaa29f497ced05cc331915c86b7c'] = array(
    'module' => 'views',
    'delta' => '6c3ffaa29f497ced05cc331915c86b7c',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '29',
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

  $theme['views-recent_activity-global_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-global_activity',
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

  $theme['views-recent_activity-recent_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-recent_activity',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-62',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
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
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['saw'] = $theme;

  // saw_pushbutton
  $theme = array();

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

  $theme['views-who_is_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'who_is_online-block_1',
    'theme' => 'saw_pushbutton',
    'status' => '1',
    'weight' => '-36',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['saw_pushbutton'] = $theme;

  // garland
  $theme = array();

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

  $theme['views-who_is_online-block_1'] = array(
    'module' => 'views',
    'delta' => 'who_is_online-block_1',
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
