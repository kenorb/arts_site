<?php

/**
 * Implementation of hook_views_default_views().
 */
function feature_market_views_default_views() {
  $views = array();

  // Exported view: Marketplace
  $view = new view;
  $view->name = 'Marketplace';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Marketplace';
  $view->core = 6;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area_1']['id'] = 'area_1';
  $handler->display->display_options['empty']['area_1']['table'] = 'views';
  $handler->display->display_options['empty']['area_1']['field'] = 'area';
  $handler->display->display_options['empty']['area_1']['label'] = 'No items';
  $handler->display->display_options['empty']['area_1']['empty'] = FALSE;
  $handler->display->display_options['empty']['area_1']['content'] = 'No items found';
  $handler->display->display_options['empty']['area_1']['format'] = '1';
  /* Relationship: User: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['empty'] = '<img alt="no image" src="/sites/all/themes/saw/images/nophoto_100.png" />';
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightshow2__Thumb_100w__Thumb_100w';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country']['style'] = 'code';
  /* Field: Product: Sell price */
  $handler->display->display_options['fields']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sell_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sell_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sell_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['sell_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sell_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sell_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sell_price']['set_precision'] = 0;
  $handler->display->display_options['fields']['sell_price']['precision'] = '0';
  $handler->display->display_options['fields']['sell_price']['format_plural'] = 0;
  /* Field: Node: Teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['teaser']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['teaser']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Sort criterion: User: Role weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'role_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  /* Sort criterion: Node statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['totalcount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['totalcount']['expose']['label'] = 'Most popular';
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Most recent';
  /* Sort criterion: Product: Sell price */
  $handler->display->display_options['sorts']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['sorts']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sell_price']['expose']['label'] = 'Product: Sell price';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'item' => 'item',
  );
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys_1']['id'] = 'keys_1';
  $handler->display->display_options['filters']['keys_1']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys_1']['field'] = 'keys';
  $handler->display->display_options['filters']['keys_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys_1']['expose']['operator'] = 'keys_1_op';
  $handler->display->display_options['filters']['keys_1']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys_1']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['keys_1']['expose']['identifier'] = 'in';
  $handler->display->display_options['filters']['keys_1']['expose']['single'] = TRUE;
  /* Filter: Location: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'location';
  $handler->display->display_options['filters']['name']['field'] = 'name';

  /* Display: Marketplace Page */
  $handler = $view->new_display('page', 'Marketplace Page', 'marketplace_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marketplace';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'item' => 'item',
  );
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter: Location: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'location';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['name']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['name']['case'] = 0;
  $handler->display->display_options['path'] = 'market';

  /* Display: User Profile Items */
  $handler = $view->new_display('page', 'User Profile Items', 'user_profile_items');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Marketplace items';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'user-profile-items';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['empty'] = '<img alt="no image" src="/sites/all/themes/saw/images/nophoto_50.png" />';
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightshow2__Thumb_100w__Thumb_50';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country']['style'] = 'code';
  /* Field: Product: Sell price */
  $handler->display->display_options['fields']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['fields']['sell_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sell_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sell_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sell_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sell_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['sell_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sell_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['sell_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sell_price']['set_precision'] = 0;
  $handler->display->display_options['fields']['sell_price']['precision'] = '0';
  $handler->display->display_options['fields']['sell_price']['format_plural'] = 0;
  /* Field: Node: Teaser */
  $handler->display->display_options['fields']['teaser']['id'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['teaser']['field'] = 'teaser';
  $handler->display->display_options['fields']['teaser']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['external'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['teaser']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['teaser']['alter']['html'] = 0;
  $handler->display->display_options['fields']['teaser']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['teaser']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['teaser']['hide_empty'] = 0;
  $handler->display->display_options['fields']['teaser']['empty_zero'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'item' => 'item',
  );
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys_1']['id'] = 'keys_1';
  $handler->display->display_options['filters']['keys_1']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys_1']['field'] = 'keys';
  $handler->display->display_options['filters']['keys_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys_1']['expose']['operator'] = 'keys_1_op';
  $handler->display->display_options['filters']['keys_1']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys_1']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['keys_1']['expose']['identifier'] = 'in';
  $handler->display->display_options['filters']['keys_1']['expose']['single'] = TRUE;
  /* Filter: Location: Country */
  $handler->display->display_options['filters']['country']['id'] = 'country';
  $handler->display->display_options['filters']['country']['table'] = 'location';
  $handler->display->display_options['filters']['country']['field'] = 'country';
  $handler->display->display_options['filters']['country']['value'] = array();
  $handler->display->display_options['filters']['country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
  $handler->display->display_options['filters']['country']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['country']['expose']['label'] = 'Location: Country';
  $handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
  $handler->display->display_options['path'] = 'user-profile-items';
  $translatables['Marketplace'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No items'),
    t('No items found'),
    t('nodes'),
    t('<img alt="no image" src="/sites/all/themes/saw/images/nophoto_100.png" />'),
    t('City'),
    t('Country'),
    t('Sell price'),
    t('.'),
    t(','),
    t('Teaser'),
    t('Name'),
    t('Random'),
    t('Most popular'),
    t('Most recent'),
    t('Product: Sell price'),
    t('Search'),
    t('In'),
    t('Marketplace Page'),
    t('Marketplace'),
    t('User Profile Items'),
    t('Marketplace items'),
    t('<img alt="no image" src="/sites/all/themes/saw/images/nophoto_50.png" />'),
    t('Location: Country'),
  );

  $views[$view->name] = $view;

  return $views;
}
