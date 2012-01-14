<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function feature_art_default_fe_block_settings() {
  $export = array();

  // garland
  $theme = array();

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

  $export['garland'] = $theme;

  // saw
  $theme = array();

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

  $export['saw'] = $theme;

  // saw_pushbutton
  $theme = array();

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

  $export['saw_pushbutton'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
