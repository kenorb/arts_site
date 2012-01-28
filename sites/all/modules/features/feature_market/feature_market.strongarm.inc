<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_market_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_item';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '8',
    'author' => '7',
    'options' => '9',
    'comment_settings' => '11',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '10',
    'custom_breadcrumbs' => '14',
    'locations' => '1',
    'print' => '13',
    'shipping' => '0',
    'base' => '-1',
    'workflow' => '6',
    'nodewords' => '5',
    'notifications' => '12',
    'body' => '3',
  );
  $export['content_extra_weights_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_item';
  $strongarm->value = '';
  $export['uc_image_item'] = $strongarm;

  return $export;
}
