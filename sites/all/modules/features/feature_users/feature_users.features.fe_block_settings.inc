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
