<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function feature_users_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_basic
  $groups['profile-group_basic'] = array(
    'group_type' => 'standard',
    'type_name' => 'profile',
    'group_name' => 'group_basic',
    'label' => 'Basic Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'parent' => '',
    'fields' => array(
      '0' => 'field_first_name',
      '1' => 'field_last_name',
      '2' => 'field_gender',
      '3' => 'field_birthday',
    ),
    'depth' => 0,
    'parents' => array(
      '0' => '',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Details');

  return $groups;
}
