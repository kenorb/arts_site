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
    'weight' => '13',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-56',
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
    'weight' => '-67',
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
    'weight' => '-53',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
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

  $theme['og_forum-1'] = array(
    'module' => 'og_forum',
    'delta' => '1',
    'theme' => 'saw',
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

  $theme['views-6c3ffaa29f497ced05cc331915c86b7c'] = array(
    'module' => 'views',
    'delta' => '6c3ffaa29f497ced05cc331915c86b7c',
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

  $theme['views-recent_activity-global_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-global_activity',
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

  $theme['views-recent_activity-recent_activity'] = array(
    'module' => 'views',
    'delta' => 'recent_activity-recent_activity',
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

  $theme['views-user_arts-user_arts_block'] = array(
    'module' => 'views',
    'delta' => 'user_arts-user_arts_block',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-65',
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
    'weight' => '-53',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['saw'] = $theme;

  // studentart
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'studentart',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'studentart',
    'status' => 0,
    'weight' => '-39',
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
    'theme' => 'studentart',
    'status' => 0,
    'weight' => '-46',
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
    'theme' => 'studentart',
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

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'studentart',
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

  $theme['og_forum-1'] = array(
    'module' => 'og_forum',
    'delta' => '1',
    'theme' => 'studentart',
    'status' => 0,
    'weight' => '-11',
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
    'theme' => 'studentart',
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
    'theme' => 'studentart',
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
    'theme' => 'studentart',
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
    'theme' => 'studentart',
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
    'theme' => 'studentart',
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

  $export['studentart'] = $theme;

  // bluemarine
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '-38',
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
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '-40',
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
    'theme' => 'bluemarine',
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

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '-31',
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
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '1',
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
    'theme' => 'bluemarine',
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
    'theme' => 'bluemarine',
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
    'theme' => 'bluemarine',
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
    'theme' => 'bluemarine',
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
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '25',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['bluemarine'] = $theme;

  // chameleon
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'chameleon',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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
    'theme' => 'chameleon',
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

  $export['chameleon'] = $theme;

  // marvin
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'marvin',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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
    'theme' => 'marvin',
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

  $export['marvin'] = $theme;

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
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
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
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['garland'] = $theme;

  // minnelli
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'minnelli',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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
    'theme' => 'minnelli',
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

  $export['minnelli'] = $theme;

  // pushbutton
  $theme = array();

  $theme['block-profile_statistics'] = array(
    'module' => 'block',
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'pushbutton',
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

  $theme['forum-0'] = array(
    'module' => 'forum',
    'delta' => '0',
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '-46',
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
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '-43',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['og_forum-0'] = array(
    'module' => 'og_forum',
    'delta' => '0',
    'theme' => 'pushbutton',
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

  $theme['og_forum-1'] = array(
    'module' => 'og_forum',
    'delta' => '1',
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '-16',
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
    'theme' => 'pushbutton',
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
    'theme' => 'pushbutton',
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
    'theme' => 'pushbutton',
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
    'theme' => 'pushbutton',
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
    'theme' => 'pushbutton',
    'status' => '1',
    'weight' => '-32',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Moderators/critics online',
    'cache' => '-1',
  );

  $export['pushbutton'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
