<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function feature_art_default_fe_block_settings() {
  $export = array();

  // saw
  $theme = array();

  $theme['views-user_arts-user_arts_block'] = array(
    'module' => 'views',
    'delta' => 'user_arts-user_arts_block',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-59',
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

  // garland
  $theme = array();

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

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
