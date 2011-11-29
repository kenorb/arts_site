<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function feature_events_default_fe_block_settings() {
  $export = array();

  // saw
  $theme = array();

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-57',
    'region' => 'content',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'calendar
calendar/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-56',
    'region' => 'content',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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

  $export['studentart'] = $theme;

  // bluemarine
  $theme = array();

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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

  $export['bluemarine'] = $theme;

  // chameleon
  $theme = array();

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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

  $export['marvin'] = $theme;

  // garland
  $theme = array();

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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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

  $export['minnelli'] = $theme;

  // pushbutton
  $theme = array();

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
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
