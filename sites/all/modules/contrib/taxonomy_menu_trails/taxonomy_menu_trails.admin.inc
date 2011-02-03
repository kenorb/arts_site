<?php

// $Id: taxonomy_menu_trails.admin.inc,v 1.3 2010/10/09 18:01:27 dmitriytrt Exp $

/**
 * @file
 * Settings form for taxonomy_menu_trails.
 *
 * @author Dmitriy.trt      <http://drupal.org/user/329125>
 */

function taxonomy_menu_trails_settings() {
  $form = array(
    /*'taxonomy_menu_trails_node_types' => array(
      '#type' => 'checkboxes',
      '#title' => t('Node types to set active trail'),
      '#options' => node_get_types('names'),
      '#default_value' => variable_get('taxonomy_menu_trails_node_types', array()),
    ),*/
    'taxonomy_menu_trails_node_types' => array(),
    'taxonomy_menu_trails_only_without_menu' => array(
      '#type' => 'checkbox',
      '#title' => t("Only if node doesn't have enabled menu item"),
      '#default_value' => variable_get('taxonomy_menu_trails_only_without_menu', TRUE),
    ),
    'taxonomy_menu_trails_selection_method' => array(
      '#type' => 'select',
      '#title' => t("Node's term selection method"),
      '#description' => t("This option defines how module chooses term for processing:<ul><li><b>First/Last</b> - just select lightest/haviest node's term (but it can be the term without menu item). Best performance.</li><li><b>First/last with menu item</b> - find first/last term with enabled menu item. Low performance</li><li><b>Deepest in lineage</b> - use deepest term in selected lineage. All parent terms in lineage must be attached to node for this function to work. It's highly recommended to use Hierarchical Select for lineage saving. Low performance.</ul>"),
      '#default_value' => variable_get('taxonomy_menu_trails_selection_method', 'first'),
      '#options' => array(
        'first' => t('First term'),
        'last' => t('Last term'),
        'first-with-menu' => t('First term with menu item'),
        'last-with-menu' => t('Last term with menu item'),
        'deepest-in-lineage' => t('Deepest in lineage'),
      ),
    ),
    '#submit' => array('taxonomy_menu_trails_settings_cleanup')
  );
  
  if (module_exists('taxonomy_menu')) {
    $form['taxonomy_menu_trails_integration_with_tm'] = array(
      '#type' => 'checkbox',
      '#title' => t("Get term's path from Taxonomy Menu modules"),
      '#description' => t("If you set up not default path for terms' menu items with Taxonomy Menu modules, module will use this paths."),
      '#default_value' => variable_get('taxonomy_menu_trails_integration_with_tm', TRUE),
    );
  }
  
  $types = node_get_types('names');
  $vocs = array(
    '#tree' => TRUE,
    '#type' => 'fieldset',
    '#title' => t('Vocabularies to select terms from'),
  );
  $defaults = variable_get('taxonomy_menu_trails_node_types', array());
  foreach ($types as $key => $type) {
    $type_vocs = taxonomy_get_vocabularies($key);
    if (!empty($type_vocs)) {
      foreach ($type_vocs as $vid => $voc) {
        $type_vocs[$vid] = $voc->name;
      }
      $vocs[$key] = array(
        '#type' => 'checkboxes',
        '#title' => $type,
        '#options' => $type_vocs,
        '#default_value' => !empty($defaults[$key]) ? $defaults[$key] : array(),
      );
    }
  }
  
  if (count(element_children($vocs))) {
    $form['taxonomy_menu_trails_node_types'] = $vocs;
  }
  
  return system_settings_form($form);
}

function taxonomy_menu_trails_settings_cleanup($form, &$state) {
  if (is_array($state['values']['taxonomy_menu_trails_node_types'])) {
    foreach ($state['values']['taxonomy_menu_trails_node_types'] as $type => $vocs) {
      $clean_vocs = array_filter($vocs);
      if (empty($clean_vocs)) {
        unset($state['values']['taxonomy_menu_trails_node_types'][$type]);
      }
      else {
        $state['values']['taxonomy_menu_trails_node_types'][$type] = $clean_vocs;
      }
    }
  }
}
