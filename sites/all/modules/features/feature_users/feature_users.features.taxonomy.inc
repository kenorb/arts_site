<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function feature_users_taxonomy_default_vocabularies() {
  return array(
    'education_taxonomy' => array(
      'name' => 'Education',
      'description' => '',
      'help' => 'Type your name of schools, etc.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_education_taxonomy',
      'weight' => '0',
      'nodes' => array(
        'education' => 'education',
      ),
    ),
  );
}
