<?php

/**
 * Implementation of hook_content_default_fields().
 */
function feature_events_content_default_fields() {
  $fields = array();

  // Exported field: field_associated_events
  $fields['event-field_associated_events'] = array(
    'field_name' => 'field_associated_events',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '103',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'event' => 'event',
      'art' => 0,
      'forum' => 0,
      'page' => 0,
      'panel' => 0,
      'profile' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_associated_events][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Associated Events',
      'weight' => '14',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_event_date
  $fields['event-field_event_date'] = array(
    'field_name' => 'field_event_date',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 1,
    'repeat_collapsed' => '1',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d H:i:s',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-0:+2',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-2',
      'description' => '',
      'type' => 'date_popup_repeat',
      'module' => 'date',
    ),
  );

  // Exported field: field_image
  $fields['event-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '102',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'imagefield__lightshow2_compact__Thumb_200__original',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightshow2__Thumb_200__original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '5',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '13',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_location
  $fields['event-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'multiple',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '0',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '1',
            'default' => 'uk',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '1',
            'weight' => '20',
          ),
          'phone' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '25',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'additional' => 'additional',
          'province' => 'province',
          'phone' => 'phone',
          'province_name' => 'province_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'street' => 0,
          'city' => 0,
          'postal_code' => 0,
          'country' => 0,
          'locpick' => 0,
          'country_name' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'drupal',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'country' => 'uk',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'phone' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'name' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '2',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '4',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '6',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '8',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '10',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '12',
                ),
                'country' => array(
                  'default' => 'uk',
                  'collect' => '1',
                  'weight' => '14',
                ),
                'locpick' => array(
                  'default' => array(
                    'user_latitude' => '',
                    'user_longitude' => '',
                  ),
                  'collect' => '1',
                  'weight' => '20',
                  'nodiff' => TRUE,
                ),
                'phone' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '25',
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'name' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '2',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '4',
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '6',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => 1,
                          'weight' => '8',
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '10',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '12',
                        ),
                        'country' => array(
                          'default' => 'uk',
                          'collect' => '1',
                          'weight' => '14',
                        ),
                        'locpick' => array(
                          'default' => array(
                            'user_latitude' => '',
                            'user_longitude' => '',
                          ),
                          'collect' => '1',
                          'weight' => '20',
                          'nodiff' => TRUE,
                        ),
                        'phone' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '25',
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'name' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '2',
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '4',
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '6',
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '8',
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '10',
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '12',
                                ),
                                'country' => array(
                                  'default' => 'uk',
                                  'collect' => '1',
                                  'weight' => '14',
                                ),
                                'locpick' => array(
                                  'default' => array(
                                    'user_latitude' => '',
                                    'user_longitude' => '',
                                  ),
                                  'collect' => '1',
                                  'weight' => '20',
                                  'nodiff' => TRUE,
                                ),
                                'phone' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '25',
                                ),
                                'cck_preview_in_progress' => array(
                                  'default' => TRUE,
                                ),
                                'location_settings' => array(
                                  'default' => array(
                                    'form' => array(
                                      'fields' => array(
                                        'country_name' => array(
                                          'collect' => '1',
                                          'weight' => '-100',
                                        ),
                                        'province_name' => array(
                                          'collect' => '1',
                                          'weight' => '-100',
                                        ),
                                        'coords' => array(
                                          'collect' => '1',
                                          'weight' => '-100',
                                        ),
                                        'map_link' => array(
                                          'collect' => '1',
                                          'weight' => '-100',
                                        ),
                                        'name' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '2',
                                        ),
                                        'street' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '4',
                                        ),
                                        'additional' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '6',
                                        ),
                                        'city' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '8',
                                        ),
                                        'province' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '10',
                                        ),
                                        'postal_code' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '12',
                                        ),
                                        'country' => array(
                                          'default' => 'uk',
                                          'collect' => '1',
                                          'weight' => '14',
                                        ),
                                        'locpick' => array(
                                          'default' => array(
                                            'user_latitude' => '',
                                            'user_longitude' => '',
                                          ),
                                          'collect' => '1',
                                          'weight' => '20',
                                          'nodiff' => TRUE,
                                        ),
                                        'phone' => array(
                                          'default' => '',
                                          'collect' => '1',
                                          'weight' => '25',
                                        ),
                                        'cck_preview_in_progress' => array(
                                          'default' => TRUE,
                                        ),
                                        'location_settings' => array(
                                          'default' => array(
                                            'form' => array(
                                              'fields' => array(
                                                'name' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '2',
                                                ),
                                                'street' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '4',
                                                ),
                                                'additional' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '6',
                                                ),
                                                'city' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '8',
                                                ),
                                                'province' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '10',
                                                ),
                                                'postal_code' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '12',
                                                ),
                                                'country' => array(
                                                  'default' => 'uk',
                                                  'collect' => '1',
                                                  'weight' => '14',
                                                ),
                                                'locpick' => array(
                                                  'default' => array(
                                                    'user_latitude' => '',
                                                    'user_longitude' => '',
                                                  ),
                                                  'collect' => '1',
                                                  'weight' => '20',
                                                  'nodiff' => TRUE,
                                                ),
                                                'phone' => array(
                                                  'default' => '',
                                                  'collect' => '1',
                                                  'weight' => '25',
                                                ),
                                                'cck_preview_in_progress' => array(
                                                  'default' => TRUE,
                                                ),
                                                'location_settings' => array(
                                                  'default' => array(
                                                    'form' => array(
                                                      'fields' => array(
                                                        'name' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '2',
                                                        ),
                                                        'street' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '4',
                                                        ),
                                                        'additional' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '6',
                                                        ),
                                                        'city' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '8',
                                                        ),
                                                        'province' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '10',
                                                        ),
                                                        'postal_code' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '12',
                                                        ),
                                                        'country' => array(
                                                          'default' => 'uk',
                                                          'collect' => '1',
                                                          'weight' => '14',
                                                        ),
                                                        'locpick' => array(
                                                          'default' => array(
                                                            'user_latitude' => '',
                                                            'user_longitude' => '',
                                                          ),
                                                          'collect' => '1',
                                                          'weight' => '20',
                                                          'nodiff' => TRUE,
                                                        ),
                                                        'phone' => array(
                                                          'default' => '',
                                                          'collect' => '1',
                                                          'weight' => '25',
                                                        ),
                                                        'cck_preview_in_progress' => array(
                                                          'default' => TRUE,
                                                        ),
                                                        'location_settings' => array(
                                                          'default' => array(
                                                            'form' => array(
                                                              'fields' => array(
                                                                'name' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '2',
                                                                ),
                                                                'street' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '4',
                                                                ),
                                                                'additional' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '6',
                                                                ),
                                                                'city' => array(
                                                                  'default' => '',
                                                                  'collect' => '1',
                                                                  'weight' => '8',
                                                                ),
                                                                'province' => array(
                                                                  'default' => '',
                                                                  'collect' => '0',
                                                                  'weight' => '10',
                                                                ),
                                                                'postal_code' => array(
                                                                  'default' => '',
                                                                  'collect' => '0',
                                                                  'weight' => '12',
                                                                ),
                                                                'country' => array(
                                                                  'default' => 'uk',
                                                                  'collect' => '1',
                                                                  'weight' => '14',
                                                                ),
                                                                'locpick' => array(
                                                                  'default' => array(
                                                                    'user_latitude' => '',
                                                                    'user_longitude' => '',
                                                                  ),
                                                                  'collect' => '1',
                                                                  'weight' => '20',
                                                                  'nodiff' => TRUE,
                                                                ),
                                                                'phone' => array(
                                                                  'default' => '',
                                                                  'collect' => '0',
                                                                  'weight' => '25',
                                                                ),
                                                                'cck_preview_in_progress' => array(
                                                                  'default' => TRUE,
                                                                ),
                                                                'location_settings' => array(
                                                                  'default' => array(
                                                                    'form' => array(
                                                                      'fields' => array(
                                                                        'name' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '2',
                                                                        ),
                                                                        'street' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '4',
                                                                        ),
                                                                        'additional' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '6',
                                                                        ),
                                                                        'city' => array(
                                                                          'default' => '',
                                                                          'collect' => '1',
                                                                          'weight' => '8',
                                                                        ),
                                                                        'province' => array(
                                                                          'default' => '',
                                                                          'collect' => '0',
                                                                          'weight' => '10',
                                                                        ),
                                                                        'postal_code' => array(
                                                                          'default' => '',
                                                                          'collect' => '0',
                                                                          'weight' => '12',
                                                                        ),
                                                                        'country' => array(
                                                                          'default' => 'uk',
                                                                          'collect' => '1',
                                                                          'weight' => '14',
                                                                        ),
                                                                        'locpick' => array(
                                                                          'default' => array(
                                                                            'user_latitude' => '',
                                                                            'user_longitude' => '',
                                                                          ),
                                                                          'collect' => '1',
                                                                          'weight' => '20',
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                        'phone' => array(
                                                                          'default' => '',
                                                                          'collect' => '0',
                                                                          'weight' => '25',
                                                                        ),
                                                                        'cck_preview_in_progress' => array(
                                                                          'default' => TRUE,
                                                                        ),
                                                                        'location_settings' => array(
                                                                          'default' => array(
                                                                            'form' => array(
                                                                              'fields' => array(
                                                                                'lid' => array(
                                                                                  'default' => FALSE,
                                                                                ),
                                                                                'name' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 1,
                                                                                  'weight' => 2,
                                                                                ),
                                                                                'street' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 1,
                                                                                  'weight' => 4,
                                                                                ),
                                                                                'additional' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 1,
                                                                                  'weight' => 6,
                                                                                ),
                                                                                'city' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 1,
                                                                                  'weight' => 8,
                                                                                ),
                                                                                'province' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 0,
                                                                                  'weight' => 10,
                                                                                ),
                                                                                'postal_code' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 0,
                                                                                  'weight' => 12,
                                                                                ),
                                                                                'country' => array(
                                                                                  'default' => 'uk',
                                                                                  'collect' => 1,
                                                                                  'weight' => 14,
                                                                                ),
                                                                                'locpick' => array(
                                                                                  'default' => FALSE,
                                                                                  'collect' => 1,
                                                                                  'weight' => 20,
                                                                                  'nodiff' => TRUE,
                                                                                ),
                                                                                'latitude' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'longitude' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'source' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'is_primary' => array(
                                                                                  'default' => 0,
                                                                                ),
                                                                                'delete_location' => array(
                                                                                  'default' => FALSE,
                                                                                  'nodiff' => TRUE,
                                                                                ),
                                                                                'phone' => array(
                                                                                  'default' => '',
                                                                                  'collect' => 0,
                                                                                  'weight' => 25,
                                                                                ),
                                                                              ),
                                                                            ),
                                                                          ),
                                                                        ),
                                                                        'lid' => array(
                                                                          'default' => FALSE,
                                                                        ),
                                                                        'latitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'longitude' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'source' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'is_primary' => array(
                                                                          'default' => 0,
                                                                        ),
                                                                        'delete_location' => array(
                                                                          'default' => FALSE,
                                                                          'nodiff' => TRUE,
                                                                        ),
                                                                      ),
                                                                    ),
                                                                    'display' => array(
                                                                      'hide' => array(
                                                                        'name' => 0,
                                                                        'street' => 0,
                                                                        'additional' => 0,
                                                                        'city' => 0,
                                                                        'province' => 0,
                                                                        'postal_code' => 0,
                                                                        'country' => 0,
                                                                        'locpick' => 0,
                                                                        'phone' => 0,
                                                                        'province_name' => 0,
                                                                        'country_name' => 0,
                                                                        'map_link' => 0,
                                                                        'coords' => 0,
                                                                      ),
                                                                    ),
                                                                  ),
                                                                ),
                                                                'lid' => array(
                                                                  'default' => FALSE,
                                                                ),
                                                                'latitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'longitude' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'source' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'is_primary' => array(
                                                                  'default' => 0,
                                                                ),
                                                                'delete_location' => array(
                                                                  'default' => FALSE,
                                                                  'nodiff' => TRUE,
                                                                ),
                                                              ),
                                                            ),
                                                            'display' => array(
                                                              'hide' => array(
                                                                'name' => 0,
                                                                'street' => 0,
                                                                'additional' => 0,
                                                                'city' => 0,
                                                                'province' => 0,
                                                                'postal_code' => 0,
                                                                'country' => 0,
                                                                'locpick' => 0,
                                                                'phone' => 0,
                                                                'province_name' => 0,
                                                                'country_name' => 0,
                                                                'map_link' => 0,
                                                                'coords' => 0,
                                                              ),
                                                            ),
                                                          ),
                                                        ),
                                                        'lid' => array(
                                                          'default' => FALSE,
                                                        ),
                                                        'latitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'longitude' => array(
                                                          'default' => 0,
                                                        ),
                                                        'source' => array(
                                                          'default' => 0,
                                                        ),
                                                        'is_primary' => array(
                                                          'default' => 0,
                                                        ),
                                                        'delete_location' => array(
                                                          'default' => FALSE,
                                                          'nodiff' => TRUE,
                                                        ),
                                                      ),
                                                    ),
                                                    'display' => array(
                                                      'hide' => array(
                                                        'name' => 0,
                                                        'street' => 0,
                                                        'additional' => 0,
                                                        'city' => 0,
                                                        'province' => 0,
                                                        'postal_code' => 0,
                                                        'country' => 0,
                                                        'locpick' => 0,
                                                        'phone' => 0,
                                                        'province_name' => 0,
                                                        'country_name' => 0,
                                                        'map_link' => 0,
                                                        'coords' => 0,
                                                      ),
                                                    ),
                                                  ),
                                                ),
                                                'lid' => array(
                                                  'default' => FALSE,
                                                ),
                                                'latitude' => array(
                                                  'default' => 0,
                                                ),
                                                'longitude' => array(
                                                  'default' => 0,
                                                ),
                                                'source' => array(
                                                  'default' => 0,
                                                ),
                                                'is_primary' => array(
                                                  'default' => 0,
                                                ),
                                                'delete_location' => array(
                                                  'default' => FALSE,
                                                  'nodiff' => TRUE,
                                                ),
                                              ),
                                            ),
                                            'display' => array(
                                              'hide' => array(
                                                'name' => 0,
                                                'street' => 0,
                                                'additional' => 0,
                                                'city' => 0,
                                                'province' => 0,
                                                'postal_code' => 0,
                                                'country' => 0,
                                                'locpick' => 0,
                                                'phone' => 0,
                                                'province_name' => 0,
                                                'country_name' => 0,
                                                'map_link' => 0,
                                                'coords' => 0,
                                              ),
                                            ),
                                          ),
                                        ),
                                        'lid' => array(
                                          'default' => FALSE,
                                        ),
                                        'latitude' => array(
                                          'default' => 0,
                                        ),
                                        'longitude' => array(
                                          'default' => 0,
                                        ),
                                        'source' => array(
                                          'default' => 0,
                                        ),
                                        'is_primary' => array(
                                          'default' => 0,
                                        ),
                                        'delete_location' => array(
                                          'default' => FALSE,
                                          'nodiff' => TRUE,
                                        ),
                                      ),
                                    ),
                                    'display' => array(
                                      'hide' => array(
                                        'name' => 0,
                                        'street' => 0,
                                        'additional' => 0,
                                        'city' => 0,
                                        'province' => 0,
                                        'postal_code' => 0,
                                        'country' => 0,
                                        'locpick' => 0,
                                        'phone' => 0,
                                        'province_name' => 0,
                                        'country_name' => 0,
                                        'map_link' => 0,
                                        'coords' => 0,
                                      ),
                                    ),
                                  ),
                                ),
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                            'display' => array(
                              'hide' => array(
                                'name' => 0,
                                'street' => 0,
                                'additional' => 0,
                                'city' => 0,
                                'province' => 0,
                                'postal_code' => 0,
                                'country' => 0,
                                'locpick' => 0,
                                'phone' => 0,
                                'province_name' => 0,
                                'country_name' => 0,
                                'map_link' => 0,
                                'coords' => 0,
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 0,
                        'street' => 0,
                        'additional' => 0,
                        'city' => 0,
                        'province' => 0,
                        'postal_code' => 0,
                        'country' => 0,
                        'locpick' => 0,
                        'phone' => 0,
                        'province_name' => 0,
                        'country_name' => 0,
                        'map_link' => 0,
                        'coords' => 0,
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'name' => 'name',
                'additional' => 'additional',
                'province' => 'province',
                'phone' => 'phone',
                'province_name' => 'province_name',
                'map_link' => 'map_link',
                'coords' => 'coords',
                'street' => 0,
                'city' => 0,
                'postal_code' => 0,
                'country' => 0,
                'locpick' => 0,
                'country_name' => 0,
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => 0,
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Events');
  t('Date');
  t('Image');
  t('Location');

  return $fields;
}
