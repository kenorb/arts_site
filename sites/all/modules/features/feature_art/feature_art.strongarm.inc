<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_art_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_art';
  $strongarm->value = '0';
  $export['comment_anonymous_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_art';
  $strongarm->value = '2';
  $export['comment_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_art';
  $strongarm->value = '3';
  $export['comment_controls_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_art';
  $strongarm->value = '4';
  $export['comment_default_mode_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_art';
  $strongarm->value = '1';
  $export['comment_default_order_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_art';
  $strongarm->value = '50';
  $export['comment_default_per_page_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_art';
  $strongarm->value = '0';
  $export['comment_form_location_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_art';
  $strongarm->value = '1';
  $export['comment_preview_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_art';
  $strongarm->value = '1';
  $export['comment_subject_field_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_art';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '8',
    'author' => '9',
    'options' => '10',
    'comment_settings' => '11',
    'menu' => '-3',
    'taxonomy' => '-4',
    'path' => '13',
    'custom_breadcrumbs' => '18',
    'locations' => '5',
    'print' => '17',
    'shipping' => '1',
    'base' => '0',
    'workflow' => '12',
    'nodewords' => '6',
    'notifications' => '14',
    'body' => '3',
  );
  $export['content_extra_weights_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_art';
  $strongarm->value = '0';
  $export['language_content_type_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_art';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'revision_moderation',
  );
  $export['node_options_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_art';
  $strongarm->value = '';
  $export['uc_image_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_art';
  $strongarm->value = 1;
  $export['uc_product_shippable_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_art';
  $strongarm->value = '0';
  $export['upload_art'] = $strongarm;

  return $export;
}
