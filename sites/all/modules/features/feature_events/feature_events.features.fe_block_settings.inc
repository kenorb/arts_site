<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function feature_events_default_fe_block_settings() {
  $export = array();

  // saw
  $theme = array();

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '15',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-2',
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
    'weight' => '-58',
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
    'weight' => '9',
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
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-62',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'calendar
calendar/*',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'calendar-calendar_block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '-57',
    'region' => '',
    'custom' => '1',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '19',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
    'theme' => 'saw',
    'status' => 0,
    'weight' => '17',
    'region' => '',
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

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'saw_pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'calendar
calendar/*',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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

  $export['saw_pushbutton'] = $theme;

  // garland
  $theme = array();

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
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
    'cache' => '-1',
  );

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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
    'visibility' => '1',
    'pages' => 'calendar
calendar/*',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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
