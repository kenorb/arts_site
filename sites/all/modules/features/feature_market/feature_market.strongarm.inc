<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_market_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_item';
  $strongarm->value = '';
  $export['uc_image_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_item';
  $strongarm->value = 1;
  $export['uc_product_shippable_item'] = $strongarm;

  return $export;
}
