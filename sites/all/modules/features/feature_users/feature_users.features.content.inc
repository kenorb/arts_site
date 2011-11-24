<?php

/**
 * Implementation of hook_content_default_fields().
 */
function feature_users_content_default_fields() {
  $fields = array();

  // Exported field: field_about_me
  $fields['profile-field_about_me'] = array(
    'field_name' => 'field_about_me',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_about_me][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'About Me',
      'weight' => '2',
      'description' => 'Few words about me.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_birthday
  $fields['profile-field_birthday'] = array(
    'field_name' => 'field_birthday',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_basic',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'short',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'short',
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
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y - H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-8:-100',
      'label_position' => 'above',
      'label' => 'Birthday',
      'weight' => '34',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_first_name
  $fields['profile-field_first_name'] = array(
    'field_name' => 'field_first_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_basic',
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_first_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Name',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_full_name
  $fields['profile-field_full_name'] = array(
    'field_name' => 'field_full_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '10',
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
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '',
    'display_format' => '',
    'store' => '',
    'data_type' => '',
    'data_length' => '',
    'data_not_NULL' => '',
    'data_default' => '',
    'data_sortable' => '',
    'widget' => array(
      'label' => 'Full Name',
      'weight' => '11',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_gender
  $fields['profile-field_gender'] = array(
    'field_name' => 'field_gender',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_basic',
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Female
Male',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gender',
      'weight' => '33',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_last_name
  $fields['profile-field_last_name'] = array(
    'field_name' => 'field_last_name',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_basic',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_last_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last Name',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_location
  $fields['profile-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'profile',
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
            'collect' => '1',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '1',
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
      'weight' => '3',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('Birthday');
  t('First Name');
  t('Full Name');
  t('Gender');
  t('Last Name');
  t('Location');

  return $fields;
}
