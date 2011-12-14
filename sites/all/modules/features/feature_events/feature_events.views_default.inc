<?php

/**
 * Implementation of hook_views_default_views().
 */
function feature_events_views_default_views() {
  $views = array();

  // Exported view: Events
  $view = new view;
  $view->name = 'Events';
  $view->description = 'A multi-dimensional calendar view with back/next navigation.';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  /* Relationship: Node: Content Profile */
  $handler->display->display_options['relationships']['content_profile_rel']['id'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['label'] = 'Profile';
  $handler->display->display_options['relationships']['content_profile_rel']['required'] = 0;
  $handler->display->display_options['relationships']['content_profile_rel']['type'] = 'profile';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Date (field_event_date) - From date */
  $handler->display->display_options['fields']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['fields']['field_event_date_value']['table'] = 'node_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['fields']['field_event_date_value']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_date_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['link_to_node'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['repeat']['show_repeat_rule'] = 'hide';
  /* Field: Content: Birthday (field_birthday) */
  $handler->display->display_options['fields']['field_birthday_value']['id'] = 'field_birthday_value';
  $handler->display->display_options['fields']['field_birthday_value']['table'] = 'node_data_field_birthday';
  $handler->display->display_options['fields']['field_birthday_value']['field'] = 'field_birthday_value';
  $handler->display->display_options['fields']['field_birthday_value']['label'] = 'Birthday';
  $handler->display->display_options['fields']['field_birthday_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['link_to_node'] = 1;
  /* Sort criterion: Node: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Argument: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'node_data_field_birthday.field_birthday_value' => 'node_data_field_birthday.field_birthday_value',
    'node_data_field_event_date.field_event_date_value' => 'node_data_field_event_date.field_event_date_value',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    0 => 'AND',
    1 => 'OR',
  );
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Find';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['single'] = TRUE;
  /* Filter: Location: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'location';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['name']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['name']['case'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter: Signup: User: Current User */
  $handler->display->display_options['filters']['signup_user_current']['id'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['table'] = 'signup_log';
  $handler->display->display_options['filters']['signup_user_current']['field'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['value'] = '1';
  $handler->display->display_options['filters']['signup_user_current']['group'] = '1';
  /* Filter: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = '1';

  /* Display: Calendar page */
  $handler = $view->new_display('calendar', 'Calendar page', 'calendar_1');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['calendar_colors'] = array(
    0 => array(),
  );

  /* Display: Calendar block */
  $handler = $view->new_display('calendar_block', 'Calendar block', 'calendar_block_1');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Calendar';

  /* Display: Year view */
  $handler = $view->new_display('calendar_period', 'Year view', 'calendar_period_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );

  /* Display: Month view */
  $handler = $view->new_display('calendar_period', 'Month view', 'calendar_period_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );

  /* Display: Day view */
  $handler = $view->new_display('calendar_period', 'Day view', 'calendar_period_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );

  /* Display: Week view */
  $handler = $view->new_display('calendar_period', 'Week view', 'calendar_period_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  );

  /* Display: Block view */
  $handler = $view->new_display('calendar_period', 'Block view', 'calendar_period_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $handler->display->display_options['displays'] = array(
    'calendar_1' => 0,
    'default' => 0,
    'calendar_block_1' => 'calendar_block_1',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.changed' => 'node.changed',
  );
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'Upcoming';

  /* Display: Featured */
  $handler = $view->new_display('block', 'Featured', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'event-list';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Content: Featured in (field_featured_in) */
  $handler->display->display_options['filters']['field_featured_in_nid']['id'] = 'field_featured_in_nid';
  $handler->display->display_options['filters']['field_featured_in_nid']['table'] = 'node_data_field_featured_in';
  $handler->display->display_options['filters']['field_featured_in_nid']['field'] = 'field_featured_in_nid';
  $handler->display->display_options['filters']['field_featured_in_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_featured_in_nid']['reduce_duplicates'] = 0;
  $handler->display->display_options['block_description'] = 'Upcoming';

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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_event_date_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Content: Date (field_event_date) - From date */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'node_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_options']['code'] = 'return !arg(1) ? date(\'Y-m\', time()) : arg(1);';
  $handler->display->display_options['arguments']['field_event_date_value']['date_fields'] = array(
    'node_data_field_event_date.field_event_date_value' => 'node_data_field_event_date.field_event_date_value',
  );
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
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    15 => '15',
    10 => '10',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Filter: Signup: User: Current User */
  $handler->display->display_options['filters']['signup_user_current']['id'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['table'] = 'signup_log';
  $handler->display->display_options['filters']['signup_user_current']['field'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['value'] = '1';
  $handler->display->display_options['filters']['signup_user_current']['group'] = '1';
  /* Filter: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = '1';
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Find';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['single'] = TRUE;
  /* Filter: Location: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'location';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['name']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['name']['case'] = 0;

  /* Display: Events */
  $handler = $view->new_display('block', 'Events', 'events');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Node: Content Profile */
  $handler->display->display_options['relationships']['content_profile_rel']['id'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['content_profile_rel']['field'] = 'content_profile_rel';
  $handler->display->display_options['relationships']['content_profile_rel']['label'] = 'Profile';
  $handler->display->display_options['relationships']['content_profile_rel']['required'] = 0;
  $handler->display->display_options['relationships']['content_profile_rel']['type'] = 'profile';
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
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_image_fid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_event_date_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_value2']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['contact']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
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
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Argument: Content: Date (field_event_date) - From date */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'node_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_event_date_value']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_options']['code'] = 'return !arg(1) ? date(\'Y-m\', time()) : arg(1);';
  $handler->display->display_options['arguments']['field_event_date_value']['date_fields'] = array(
    'node_data_field_event_date.field_event_date_value' => 'node_data_field_event_date.field_event_date_value',
  );
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
  /* Filter: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    15 => '15',
    10 => '10',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;
  /* Filter: Signup: User: Current User */
  $handler->display->display_options['filters']['signup_user_current']['id'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['table'] = 'signup_log';
  $handler->display->display_options['filters']['signup_user_current']['field'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['value'] = '1';
  $handler->display->display_options['filters']['signup_user_current']['group'] = '1';
  /* Filter: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = '1';
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Find';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['single'] = TRUE;
  /* Filter: Location: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'location';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['name']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['name']['case'] = 0;

  /* Display: Events Page Block */
  $handler = $view->new_display('block', 'Events Page Block', 'events_page_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'events_page_events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No events yet.';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    0 => 'AND',
    1 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Find';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['single'] = TRUE;
  /* Filter: Location: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'location';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'allwords';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['name']['expose']['label'] = 'In';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['optional'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['single'] = TRUE;
  $handler->display->display_options['filters']['name']['case'] = 0;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter: Signup: User: Current User */
  $handler->display->display_options['filters']['signup_user_current']['id'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['table'] = 'signup_log';
  $handler->display->display_options['filters']['signup_user_current']['field'] = 'signup_user_current';
  $handler->display->display_options['filters']['signup_user_current']['value'] = '1';
  $handler->display->display_options['filters']['signup_user_current']['group'] = '1';
  /* Filter: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = '1';
  $translatables['Events'] = array(
    t('Defaults'),
    t('Calendar'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Text area'),
    t('Profile'),
    t('Date'),
    t('Birthday'),
    t('All'),
    t('Find'),
    t('In'),
    t('Calendar page'),
    t('Calendar block'),
    t('Year view'),
    t('Month view'),
    t('Day view'),
    t('Week view'),
    t('Block view'),
    t('Upcoming'),
    t('Featured'),
    t('Featured events'),
    t('More'),
    t('More »'),
    t('contact'),
    t('Nid'),
    t('Events'),
    t('Events Page Block'),
    t('No events yet.'),
  );

  $views[$view->name] = $view;

  return $views;
}
