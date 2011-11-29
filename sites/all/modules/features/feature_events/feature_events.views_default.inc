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
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
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
  $handler->display->display_options['fields']['field_birthday_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_birthday_value']['alter']['strip_tags'] = 0;
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
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'node_data_field_birthday.field_birthday_value' => 'node_data_field_birthday.field_birthday_value',
    'node_data_field_event_date.field_event_date_value' => 'node_data_field_event_date.field_event_date_value',
  );
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

  /* Display: Calendar page */
  $handler = $view->new_display('calendar', 'Calendar page', 'calendar_1');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'calendar_nav';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['path'] = 'calendar';
  $handler->display->display_options['menu']['name'] = 'navigation';
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
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
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
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
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

  /* Display: Events */
  $handler = $view->new_display('block', 'Events', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'event-list';
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
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
  $handler->display->display_options['filters']['field_featured_in_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_in_nid']['reduce_duplicates'] = 0;
  $handler->display->display_options['block_description'] = 'Upcoming';
  $translatables['Events'] = array(
    t('Defaults'),
    t('Calendar'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort By'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Profile'),
    t('Date'),
    t('Birthday'),
    t('All'),
    t('Calendar page'),
    t('Calendar block'),
    t('Year view'),
    t('Month view'),
    t('Day view'),
    t('Week view'),
    t('Block view'),
    t('Upcoming'),
    t('Featured'),
    t('Events'),
  );

  $views[$view->name] = $view;

  return $views;
}
