<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_art_strongarm() {
  $export = array();

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

  return $export;
}
