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
    'weight' => '6',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Statistics',
    'cache' => '-1',
    'machine_name' => 'profile_statistics',
  );

  $theme['fivestar-0'] = array(
    'module' => 'fivestar',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-52',
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
    'weight' => '-62',
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
    'weight' => '-49',
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
    'weight' => '-43',
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
    'weight' => '-25',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
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
    'title' => 'Statistics',
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
    'title' => 'Statistics',
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
    'title' => 'Statistics',
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
    'title' => 'Statistics',
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
    'title' => 'Statistics',
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
    'title' => 'Statistics',
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
    'title' => 'Statistics',
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
