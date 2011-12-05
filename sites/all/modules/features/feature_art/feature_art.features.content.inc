<?php

/**
 * Implementation of hook_content_default_fields().
 */
function feature_art_content_default_fields() {
  $fields = array();

  // Exported field: field_copy_original
  $fields['art-field_copy_original'] = array(
    'field_name' => 'field_copy_original',
    'type_name' => 'art',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'allowed_values' => 'copy|Copy
original|Original',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Copy/original',
      'weight' => '-2',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_exibit_artwork
  $fields['art-field_exibit_artwork'] = array(
    'field_name' => 'field_exibit_artwork',
    'type_name' => 'art',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'allowed_values' => 'off|
on|Exibit artwork',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Exibit artwork',
      'weight' => '2',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_featured_in
  $fields['art-field_featured_in'] = array(
    'field_name' => 'field_featured_in',
    'type_name' => 'art',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
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
      'art' => 'art',
      'event' => 'event',
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
          '_error_element' => 'default_value_widget][field_featured_in][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured in',
      'weight' => '15',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_for_sell
  $fields['art-field_for_sell'] = array(
    'field_name' => 'field_for_sell',
    'type_name' => 'art',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
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
    'allowed_values' => 'off|Not for sell
on|For sell',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'off',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'For Sell',
      'weight' => '1',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_image
  $fields['art-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'art',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'imagefield__lightframe2__Thumb_200__node',
        'exclude' => 1,
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
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_title' => 0,
        'imagefield_alt' => 0,
        'imagefield_description' => 0,
        'taxonomy_3' => 0,
        'taxonomy_1' => 0,
        'cck_field_copy_original' => 0,
        'cck_field_for_sell' => 0,
        'cck_field_exibit_artwork' => 0,
        'cck_field_no_of_copies' => 0,
        'cck_field_featured_in' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'Image',
      'weight' => '6',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_location
  $fields['art-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'art',
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

  // Exported field: field_referrers_art
  $fields['art-field_referrers_art'] = array(
    'field_name' => 'field_referrers_art',
    'type_name' => 'art',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
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
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereferrer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereferrer',
    'active' => '1',
    'referrer_types' => array(
      'art' => 'art',
      'blog' => 0,
      'education' => 0,
      'event' => 0,
      'forum' => 0,
      'group' => 0,
      'item' => 0,
      'membership' => 0,
      'page' => 0,
      'panel' => 0,
      'product' => 0,
      'profile' => 0,
      'story' => 0,
    ),
    'referrer_fields' => array(
      'field_featured_in' => 'field_featured_in',
      'field_associated_events' => 0,
    ),
    'referrer_nodes_per_page' => '0',
    'referrer_pager_element' => '0',
    'referrer_order' => 'TITLE_ASC',
    'widget' => array(
      'label' => 'Featured by',
      'weight' => '18',
      'description' => '',
      'type' => 'nodereferrer_list',
      'module' => 'nodereferrer',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Copy/original');
  t('Exibit artwork');
  t('Featured by');
  t('Featured in');
  t('For Sell');
  t('Image');
  t('Location');

  return $fields;
}
