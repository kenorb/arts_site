<?php

/**
 * Implementation of hook_features_plumber_defaults().
 */
function feature_market_features_plumber_defaults() {
  $export = array();

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_anonymous_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_anonymous_item';
  $export['feature_market__variable__comment_anonymous_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_controls_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_controls_item';
  $export['feature_market__variable__comment_controls_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_default_mode_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_default_mode_item';
  $export['feature_market__variable__comment_default_mode_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_default_order_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_default_order_item';
  $export['feature_market__variable__comment_default_order_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_default_per_page_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_default_per_page_item';
  $export['feature_market__variable__comment_default_per_page_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_form_location_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_form_location_item';
  $export['feature_market__variable__comment_form_location_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_item';
  $export['feature_market__variable__comment_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_preview_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_preview_item';
  $export['feature_market__variable__comment_preview_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__comment_subject_field_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_subject_field_item';
  $export['feature_market__variable__comment_subject_field_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__language_content_type_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'language_content_type_item';
  $export['feature_market__variable__language_content_type_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__node_options_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'node_options_item';
  $export['feature_market__variable__node_options_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__uc_product_shippable_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'uc_product_shippable_item';
  $export['feature_market__variable__uc_product_shippable_item'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'feature_market__variable__upload_item';
  $features_plumber_record->feature = 'feature_market';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'upload_item';
  $export['feature_market__variable__upload_item'] = $features_plumber_record;

  return $export;
}
