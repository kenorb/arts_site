<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function feature_users_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_type_of_education',
  'field_name' => 'field_college',
  'type' => 'education',
  'trigger_values' => 
  array (
    'college' => 'college',
  ),
);
$items[] = array (
  'control_field_name' => 'field_type_of_education',
  'field_name' => 'field_school_other',
  'type' => 'education',
  'trigger_values' => 
  array (
    'other' => 'other',
  ),
);
$items[] = array (
  'control_field_name' => 'field_type_of_education',
  'field_name' => 'field_university',
  'type' => 'education',
  'trigger_values' => 
  array (
    'university' => 'university',
  ),
);
$items[] = array (
  'control_field_name' => 'field_type_of_education',
  'field_name' => 'field_school',
  'type' => 'education',
  'trigger_values' => 
  array (
    'school' => 'school',
  ),
);
return $items;
}
