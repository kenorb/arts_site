<?php

/**
 * Implementation of hook_uc_product_default_classes().
 */
function feature_market_uc_product_default_classes() {
  $items = array(
    'item' => array(
      'name' => t('Item'),
      'module' => 'uc_product',
      'description' => t('Buy & Exchange'),
      'has_title' => '1',
      'title_label' => t('Name'),
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
function feature_market_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
