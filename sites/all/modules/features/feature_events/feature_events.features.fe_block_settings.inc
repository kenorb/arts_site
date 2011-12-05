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
    'theme' => 'saw',
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
    'theme' => 'saw',
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
    'theme' => 'saw',
    'status' => '1',
    'weight' => '-58',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
    'theme' => 'saw',
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
    'theme' => 'saw',
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
    'theme' => 'saw',
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

  $export['saw'] = $theme;

  // studentart
  $theme = array();

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'studentart',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'studentart',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'bluemarine',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'bluemarine',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
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
    'cache' => '-1',
  );

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
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
    'cache' => '-1',
  );

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'chameleon',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'chameleon',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'marvin',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'marvin',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
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

  // minnelli
  $theme = array();

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'minnelli',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'minnelli',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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

  $theme['rsvp-0'] = array(
    'module' => 'rsvp',
    'delta' => '0',
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

  $theme['rsvp-1'] = array(
    'module' => 'rsvp',
    'delta' => '1',
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

  $theme['rsvp-2'] = array(
    'module' => 'rsvp',
    'delta' => '2',
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

  $theme['views-Featured-featured_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-featured_events',
    'theme' => 'pushbutton',
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

  $theme['views-Featured-normal_events'] = array(
    'module' => 'views',
    'delta' => 'Featured-normal_events',
    'theme' => 'pushbutton',
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

  $theme['views-rsvp_calendar-block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_1',
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

  $theme['views-rsvp_calendar-block_2'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-block_2',
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

  $theme['views-rsvp_calendar-calendar_block_1'] = array(
    'module' => 'views',
    'delta' => 'rsvp_calendar-calendar_block_1',
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
