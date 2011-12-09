<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function feature_art_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_uc_product_default_classes().
 */
function feature_art_uc_product_default_classes() {
  $items = array(
    'art' => array(
      'name' => t('Art'),
      'module' => 'uc_product',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Art work name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function feature_art_views_api() {
  return array(
    'api' => '3.0',
  );
}
