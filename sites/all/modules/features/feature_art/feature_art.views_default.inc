<?php

/**
 * Implementation of hook_views_default_views().
 */
function feature_art_views_default_views() {
  $views = array();

  // Exported view: Arts
  $view = new view;
  $view->name = 'Arts';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Arts';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'sort' => array(
      'bef_format' => 'bef',
      'combine' => 0,
      'reset' => 1,
      'reset_label' => 'All Art',
    ),
    'pager' => array(
      'bef_format' => 'default',
    ),
    'keys' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => '',
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => '',
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
    'tid_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => '',
        'bef_collapsible' => 0,
        'bef_filter_description' => '',
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '25, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area_1']['id'] = 'area_1';
  $handler->display->display_options['empty']['area_1']['table'] = 'views';
  $handler->display->display_options['empty']['area_1']['field'] = 'area';
  $handler->display->display_options['empty']['area_1']['label'] = 'No arts';
  $handler->display->display_options['empty']['area_1']['empty'] = FALSE;
  $handler->display->display_options['empty']['area_1']['content'] = 'No arts found';
  $handler->display->display_options['empty']['area_1']['format'] = '1';
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Relationship: User: Nodes authored */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'users';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '19';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['fields']['field_image_fid']['empty'] = '<img alt="no image" src="/sites/all/themes/saw/images/nophoto_200.png" />';
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'Thumb_200_linked';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_from'] = '0';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
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
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
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
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Sort criterion: Content: For Sell (field_for_sell) */
  $handler->display->display_options['sorts']['field_for_sell_value']['id'] = 'field_for_sell_value';
  $handler->display->display_options['sorts']['field_for_sell_value']['table'] = 'node_data_field_for_sell';
  $handler->display->display_options['sorts']['field_for_sell_value']['field'] = 'field_for_sell_value';
  $handler->display->display_options['sorts']['field_for_sell_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_for_sell_value']['expose']['label'] = 'For Sell';
  /* Sort criterion: Content: Copy/original (field_copy_original) */
  $handler->display->display_options['sorts']['field_copy_original_value']['id'] = 'field_copy_original_value';
  $handler->display->display_options['sorts']['field_copy_original_value']['table'] = 'node_data_field_copy_original';
  $handler->display->display_options['sorts']['field_copy_original_value']['field'] = 'field_copy_original_value';
  $handler->display->display_options['sorts']['field_copy_original_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_copy_original_value']['expose']['label'] = 'Original Art';
  /* Sort criterion: Node statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['optional'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['single'] = TRUE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
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
  /* Filter: Taxonomy: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'term_node';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Education';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'hierarchical_select';
  $handler->display->display_options['filters']['tid']['vid'] = '4';
  $handler->display->display_options['filters']['tid']['error_message'] = 0;
  /* Filter: Taxonomy: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'term_node';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'hierarchical_select';
  $handler->display->display_options['filters']['tid_1']['vid'] = '3';
  $handler->display->display_options['filters']['tid_1']['error_message'] = 0;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';

  /* Display: Default */
  $handler = $view->new_display('page', 'Default', 'arts_most_viewed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Arts';
  $handler->display->display_options['path'] = 'arts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Arts';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Most viewed */
  $handler = $view->new_display('page', 'Most viewed', 'arts_most_viewed2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most viewed arts';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['totalcount']['expose']['label'] = 'Total views';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';
  /* Sort criterion: Content: For Sell (field_for_sell) */
  $handler->display->display_options['sorts']['field_for_sell_value']['id'] = 'field_for_sell_value';
  $handler->display->display_options['sorts']['field_for_sell_value']['table'] = 'node_data_field_for_sell';
  $handler->display->display_options['sorts']['field_for_sell_value']['field'] = 'field_for_sell_value';
  $handler->display->display_options['sorts']['field_for_sell_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_for_sell_value']['expose']['label'] = 'For Sell';
  /* Sort criterion: Content: Copy/original (field_copy_original) */
  $handler->display->display_options['sorts']['field_copy_original_value']['id'] = 'field_copy_original_value';
  $handler->display->display_options['sorts']['field_copy_original_value']['table'] = 'node_data_field_copy_original';
  $handler->display->display_options['sorts']['field_copy_original_value']['field'] = 'field_copy_original_value';
  $handler->display->display_options['sorts']['field_copy_original_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_copy_original_value']['expose']['label'] = 'Original Art';
  $handler->display->display_options['path'] = 'arts/most-viewed';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recent arts';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Most recent */
  $handler = $view->new_display('page', 'Most recent', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most recent arts';
  $handler->display->display_options['path'] = 'arts/most-recent';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recent arts';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Best selling artists */
  $handler = $view->new_display('page', 'Best selling artists', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Best selling artists';
  $handler->display->display_options['path'] = 'arts/best-selling-artists';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Best selling artists';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Featured artists */
  $handler = $view->new_display('page', 'Featured artists', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured artists';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['optional'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['single'] = TRUE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
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
  /* Filter: Taxonomy: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'term_node';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Education';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'hierarchical_select';
  $handler->display->display_options['filters']['tid']['vid'] = '4';
  $handler->display->display_options['filters']['tid']['error_message'] = 0;
  /* Filter: Taxonomy: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'term_node';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['tid_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'hierarchical_select';
  $handler->display->display_options['filters']['tid_1']['vid'] = '3';
  $handler->display->display_options['filters']['tid_1']['error_message'] = 0;
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  $handler->display->display_options['path'] = 'arts/featured-artists';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Featured artists';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: Highest rated */
  $handler = $view->new_display('page', 'Highest rated', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Highest rated arts';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sort criterion: Content: For Sell (field_for_sell) */
  $handler->display->display_options['sorts']['field_for_sell_value']['id'] = 'field_for_sell_value';
  $handler->display->display_options['sorts']['field_for_sell_value']['table'] = 'node_data_field_for_sell';
  $handler->display->display_options['sorts']['field_for_sell_value']['field'] = 'field_for_sell_value';
  $handler->display->display_options['sorts']['field_for_sell_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_for_sell_value']['expose']['label'] = 'For Sell';
  /* Sort criterion: Content: Copy/original (field_copy_original) */
  $handler->display->display_options['sorts']['field_copy_original_value']['id'] = 'field_copy_original_value';
  $handler->display->display_options['sorts']['field_copy_original_value']['table'] = 'node_data_field_copy_original';
  $handler->display->display_options['sorts']['field_copy_original_value']['field'] = 'field_copy_original_value';
  $handler->display->display_options['sorts']['field_copy_original_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_copy_original_value']['expose']['label'] = 'Original Art';
  $handler->display->display_options['path'] = 'arts/highest-rated';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Highest rated arts';
  $handler->display->display_options['menu']['weight'] = '0';

  /* Display: User Profile Arts */
  $handler = $view->new_display('page', 'User Profile Arts', 'user_profile_arts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Arts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'arts/most-viewed';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recent arts';
  $handler->display->display_options['menu']['weight'] = '0';
  $translatables['Arts'] = array(
    t('Defaults'),
    t('Arts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No arts'),
    t('No arts found'),
    t('flag'),
    t('nodes'),
    t('<img alt="no image" src="/sites/all/themes/saw/images/nophoto_200.png" />'),
    t('Teaser'),
    t('Title'),
    t('Sell price'),
    t('.'),
    t(','),
    t('Name'),
    t('Post date'),
    t('For Sell'),
    t('Original Art'),
    t('Published'),
    t('Search'),
    t('Education'),
    t('Category'),
    t('Default'),
    t('Most viewed'),
    t('Most viewed arts'),
    t('Total views'),
    t('Random'),
    t('Most recent'),
    t('Most recent arts'),
    t('Best selling artists'),
    t('Featured artists'),
    t('Highest rated'),
    t('Highest rated arts'),
    t('User Profile Arts'),
  );

  $views[$view->name] = $view;

  // Exported view: Featured
  $view = new view;
  $view->name = 'Featured';
  $view->description = '';
  $view->tag = 'block';
  $view->base_table = 'node';
  $view->human_name = 'featured';
  $view->core = 6;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightshow2__Thumb_100w__original';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 1;

  /* Display: Featured items */
  $handler = $view->new_display('block', 'Featured items', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured items';
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
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 1;

  /* Display: Featured arts */
  $handler = $view->new_display('block', 'Featured arts', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured arts';
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
    'art' => 'art',
  );
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 1;

  /* Display: Featured events */
  $handler = $view->new_display('block', 'Featured events', 'featured_events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightshow2__Thumb_100w__original';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
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
  $handler->display->display_options['fields']['country']['label'] = '';
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
  /* Field: Node: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'node_revisions';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  /* Field: Content: Date (field_event_date) - From date */
  $handler->display->display_options['fields']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['fields']['field_event_date_value']['table'] = 'node_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['fields']['field_event_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_event_date_value']['format'] = 'medium';
  $handler->display->display_options['fields']['field_event_date_value']['repeat']['show_repeat_rule'] = 'hide';
  $handler->display->display_options['fields']['field_event_date_value']['fromto']['fromto'] = 'value';
  /* Field: Content: Date (field_event_date) - To date */
  $handler->display->display_options['fields']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['fields']['field_event_date_value2']['table'] = 'node_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_event_date_value2']['format'] = 'medium';
  $handler->display->display_options['fields']['field_event_date_value2']['repeat']['show_repeat_rule'] = 'hide';
  $handler->display->display_options['fields']['field_event_date_value2']['fromto']['fromto'] = 'value2';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'More';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'More »';
  /* Field: User: Link to contact page */
  $handler->display->display_options['fields']['contact']['id'] = 'contact';
  $handler->display->display_options['fields']['contact']['table'] = 'users';
  $handler->display->display_options['fields']['contact']['field'] = 'contact';
  $handler->display->display_options['fields']['contact']['label'] = '';
  $handler->display->display_options['fields']['contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['contact']['hide_empty'] = 0;
  $handler->display->display_options['fields']['contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['contact']['text'] = 'contact';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
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
    'event' => 'event',
  );

  /* Display: User Profile Favourites */
  $handler = $view->new_display('block', 'User Profile Favourites', 'user_profile_favourites');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Favourites';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_image_fid' => 'field_image_fid',
    'city' => 'city',
    'country' => 'country',
    'body' => 'body',
    'field_event_date_value' => 'field_event_date_value',
    'field_event_date_value2' => 'field_event_date_value2',
    'view_node' => 'view_node',
    'contact' => 'contact',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_image_fid' => array(
      'align' => '',
      'separator' => '',
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'body' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_event_date_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_event_date_value2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
    ),
    'contact' => array(
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: add_to_favourites */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_to_favourites';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type_1']['link_to_node'] = 1;
  $handler->display->display_options['fields']['type_1']['machine_name'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
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
  /* Field: Node: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
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
    'art' => 'art',
    'item' => 'item',
    'event' => 'event',
    'profile' => 'profile',
    'page' => 'page',
  );
  $translatables['Featured'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('City'),
    t('Country'),
    t('Title'),
    t('Featured items'),
    t('Featured arts'),
    t('Featured events'),
    t('More'),
    t('More »'),
    t('contact'),
    t('User Profile Favourites'),
    t('Favourites'),
    t('flag'),
    t('Type'),
    t('Author'),
  );

  $views[$view->name] = $view;

  // Exported view: image_block
  $view = new view;
  $view->name = 'image_block';
  $view->description = 'Image Block';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Arts';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightshow2_compact__Thumb_100w__original';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter: Node: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );

  /* Display: Recent */
  $handler = $view->new_display('block', 'Recent', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New Arts';
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
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightshow2_compact__Thumb_100w__original';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;

  /* Display: Most viewed */
  $handler = $view->new_display('block', 'Most viewed', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Viewed Arts';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $translatables['image_block'] = array(
    t('Defaults'),
    t('Arts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Recent'),
    t('New Arts'),
    t('Most viewed'),
    t('Most Viewed Arts'),
  );

  $views[$view->name] = $view;

  // Exported view: user_arts
  $view = new view;
  $view->name = 'user_arts';
  $view->description = 'User Arts';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'User Arts';
  $view->core = 6;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightbox2__Thumb_200__Thumb_200';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
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
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid_1']['id'] = 'field_image_fid_1';
  $handler->display->display_options['fields']['field_image_fid_1']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid_1']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid_1']['label'] = 'Image';
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['format'] = 'imagefield__lightbox2__Thumb_100w__Thumb_100w';
  $handler->display->display_options['fields']['field_image_fid_1']['multiple']['group'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['multiple']['multiple_reversed'] = 0;
  /* Field: Node statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['daycount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['daycount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['daycount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['daycount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['daycount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['daycount']['format_plural'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'User: Name';
  $handler->display->display_options['filters']['uid_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['uid_1']['expose']['single'] = TRUE;
  /* Filter: Content: Image (field_image_cache) - delta */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'node_data_field_image_cache';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['filters']['delta']['value']['value'] = '1';
  /* Filter: Content: Image (field_image_cache) - list */
  $handler->display->display_options['filters']['field_image_cache_list']['id'] = 'field_image_cache_list';
  $handler->display->display_options['filters']['field_image_cache_list']['table'] = 'node_data_field_image_cache';
  $handler->display->display_options['filters']['field_image_cache_list']['field'] = 'field_image_cache_list';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'user_arts_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Artist Name';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'imagefield__lightbox2__Thumb_100w__wysiwyg_imageupload_browser_preview';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid']['multiple']['multiple_reversed'] = 0;
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
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid_1']['id'] = 'field_image_fid_1';
  $handler->display->display_options['fields']['field_image_fid_1']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid_1']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid_1']['label'] = 'Image';
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid_1']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['format'] = 'imagefield__lightbox2__Thumb_200__Thumb_200';
  $handler->display->display_options['fields']['field_image_fid_1']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_image_fid_1']['multiple']['multiple_number'] = '1';
  $handler->display->display_options['fields']['field_image_fid_1']['multiple']['multiple_reversed'] = 0;
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
  /* Field: Node: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 1;
  /* Field: Node statistics: Views today */
  $handler->display->display_options['fields']['daycount']['id'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['daycount']['field'] = 'daycount';
  $handler->display->display_options['fields']['daycount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['daycount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['daycount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['daycount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['daycount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['daycount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['daycount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['daycount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['daycount']['format_plural'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'return db_result(db_query("
SELECT node.uid
FROM node node 
LEFT JOIN content_field_image node_data_field_image ON node.vid = node_data_field_image.vid
INNER JOIN users users ON node.uid = users.uid
LEFT JOIN node_revisions node_revisions ON node.vid = node_revisions.vid
WHERE (node.type in (\'art\')) AND (node_data_field_image.delta > 0)
GROUP BY node.uid
ORDER BY RAND()
LIMIT 1
"));';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  /* Filter: User: Name */
  $handler->display->display_options['filters']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['table'] = 'users';
  $handler->display->display_options['filters']['uid_1']['field'] = 'uid';
  $handler->display->display_options['filters']['uid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['operator'] = 'uid_1_op';
  $handler->display->display_options['filters']['uid_1']['expose']['label'] = 'User: Name';
  $handler->display->display_options['filters']['uid_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['uid_1']['expose']['identifier'] = 'uid_1';
  $handler->display->display_options['filters']['uid_1']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['uid_1']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['uid_1']['expose']['single'] = TRUE;
  /* Filter: Content: Image (field_image) - list */
  $handler->display->display_options['filters']['field_image_list']['id'] = 'field_image_list';
  $handler->display->display_options['filters']['field_image_list']['table'] = 'node_data_field_image';
  $handler->display->display_options['filters']['field_image_list']['field'] = 'field_image_list';
  $handler->display->display_options['filters']['field_image_list']['value'] = '1';
  $handler->display->display_options['filters']['field_image_list']['expose']['label'] = 'True';
  $handler->display->display_options['filters']['field_image_list']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_image_list']['expose']['identifier'] = 'field_image_list';
  $handler->display->display_options['filters']['field_image_list']['expose']['optional'] = FALSE;
  $handler->display->display_options['filters']['field_image_list']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_image_list']['expose']['single'] = TRUE;
  $translatables['user_arts'] = array(
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
    t('Teaser'),
    t('Title'),
    t('Image'),
    t('Views today'),
    t('.'),
    t(','),
    t('All'),
    t('User: Name'),
    t('Block'),
    t('Artist Name'),
    t('Name'),
    t('Nid'),
    t('True'),
  );

  $views[$view->name] = $view;

  return $views;
}
