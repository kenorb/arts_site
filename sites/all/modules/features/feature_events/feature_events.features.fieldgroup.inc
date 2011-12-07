<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function feature_events_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_access
  $groups['event-group_access'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_access',
    'label' => 'Access',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_plain' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'email_html' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_private',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');

  return $groups;
}
