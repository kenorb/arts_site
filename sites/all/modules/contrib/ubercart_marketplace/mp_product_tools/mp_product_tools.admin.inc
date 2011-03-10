<?php

/**
 * @file 
 * Settings and config for mp_product_tools module.
 */ 
function mp_product_tools_admin_settings() { 
  // Get a list of all product classes.
  $result = db_query('SELECT pcid, name from {uc_product_classes}');
  while ($classes = db_fetch_array($result)) {
    $productclasses[$classes['pcid']] = $classes['name'];
  }

  // Add entry for Default Products to end of the list:
  $productclasses['product'] = 'Default Ubercart Product Content Type';

  // Get a list of enabled classes.
  $result = db_query('SELECT pcid, enabled from {mp_product_tools}'); 
  while ($classes = db_fetch_array($result)) {
    $enabledclasses[$classes['pcid']] = $classes['enabled'];
  }

  $form = array();
  $form['content'] = array(
    '#value'       => t('<p>"Marketplace Product Tools" provides an interface to tailor Marketplace products on a class by class basis.  It also provides the ability to enable or disable Marketplace functionality.</p>'),
  );
  $form['classes'] = array(
    '#type'   => 'fieldset',
    '#title'  => 'Product Classes',
  );

  $header = array(
    t('Product Class'),
    t('Marketplace Status'),
    t('Actions'),
  );

  foreach ($productclasses as $pcid => $classname) {
    $enabled = $enabledclasses[$pcid];
    $radio1 = '<input type=radio name=radio['. $pcid .'] value=1';
    if ($enabled) {
      $radio1 .= ' checked="checked"';
    }
    $radio1 .= '> Enabled';
    $radio2 = '<input type=radio name=radio['. $pcid .'] value=0';
    if (!$enabled) {
      $radio2 .= ' checked="checked"';
    }
    $radio2 .= '> Disabled';
    $tablerow[] = array(
      l($classname, 'admin/store/products/marketplace-tools/'. $pcid),
      $radio1 .'&nbsp;&nbsp;&nbsp;&nbsp;'. $radio2,
      l(t('Edit'), 'admin/store/products/marketplace-tools/'. $pcid),
    );
  }

  $form['classes']['table'] = array(
    '#value' => theme('table', $header, $tablerow),
    );
  $form['classes']['submit'] = array(
    '#type'          => 'submit',
    '#value'         => t('Update'),
  );
  return $form; 
}

function mp_product_tools_admin_settings_submit($form, &$form_state) {
  $enabled_classes = array();
  
  foreach ($form_state['clicked_button']['#post']['radio'] as $key => $value) {
    // If class is disabled, check to see if it's in the db, if not add it as disabled, otherwise update it's status to disabled.
    if ($value == 0) {
      $result = db_query("SELECT * FROM {mp_product_tools} WHERE pcid='%s'", $key);
      if (!db_fetch_array($result)) {
        db_query("INSERT INTO {mp_product_tools} (pcid, enabled) VALUES ('%s',0)", $key);
      }
      else {
        db_query("UPDATE {mp_product_tools} SET enabled=0 WHERE pcid='%s'", $key);
      }
    }
    // If class is enabled...
    if ($value == 1) {
      // Get the enable classes so we can add them to our persistent variable, mp_product_tools_enabled_classes
      //$result = db_query("SELECT name FROM {uc_product_classes} WHERE pcid='%s'", $key);
      //$class = db_fetch_array($result);
      $enabled_classes[$key] = $key;// == 'product' ? 'Default Ubercart Product Content Type' : $class['name'];
      
      // ...insert into database if it's not already there.
      $result = db_query("SELECT * FROM {mp_product_tools} WHERE pcid='%s'", $key);
      if (!db_fetch_array($result)) {
        db_query("INSERT INTO {mp_product_tools} (pcid, enabled) VALUES ('%s',1)", $key);
      }
      else {
        db_query("UPDATE {mp_product_tools} SET enabled=1 WHERE pcid='%s'", $key);
      }
    }
  }

  variable_set('mp_product_tools_enabled_classes', $enabled_classes);
  
  drupal_set_message('Marketplace product class settings updated.');
}

function mp_product_tools_class_settings() {
  $tmp = explode("/", $_GET['q']);
  $prodclass = $tmp[4];
  $data = db_fetch_array(db_query("SELECT * FROM {mp_product_tools} WHERE pcid = '%s'", $prodclass));
  $class = ($prodclass != 'product') ? db_fetch_array(db_query("SELECT name from {uc_product_classes} WHERE pcid = '%s'", $prodclass)) : array('name' => 'Default Ubercart Product Content Type');
  $sign_flag = variable_get('uc_sign_after_amount', FALSE);
  $currency_sign = variable_get('uc_currency_sign', '$');

  $form = array();
  $form['#tree'] = TRUE;
  $form['product_class'] = array(
    '#type'   => 'hidden',
    '#value'  => $prodclass,
  );
  $form['marketplace_tools'] = array(
    '#type'        => 'fieldset',
    '#title'       => 'Product Settings for "' . $class['name'] . '"',
    '#collapsible' => FALSE,
  );
  
  $form['marketplace_tools']['commission'] = array(
    '#type'        => 'fieldset',
    '#title'       => 'Commission Settings',
    '#collapsible' => TRUE,
  );
  
  $roles_array = user_roles(true, 'act as seller');
  $form['marketplace_tools']['commission']['title'] = array('#value' => '<strong>Commission by Role</strong>');
  foreach ($roles_array as $role) {
    $form['marketplace_tools']['commission'][$role] = array(
      '#type' => 'textfield',
      '#description' => $role,
      '#size' => 10,
      '#default_value' => db_result(db_query("SELECT rate FROM {mp_seller_rates} WHERE rid = %d AND class = '%s'", array_search($role, $roles_array), $prodclass)),
    );
  }
  
  if (module_exists('mp_file')) {
    $form['marketplace_tools']['enable_downloads'] = array(
      '#type' => 'checkbox',
      '#title' => 'Enable downloadable product features',
      //'#description' => 'Enable dowloadable products',
      '#default_value' => db_result(db_query("SELECT enabled FROM {mp_file_class_settings} WHERE pcid = '%s'", $prodclass)),
    );
  }
  
  $form['submit'] = array(
    '#type'     => 'submit',
    '#value'    => t('Submit'),
    '#weight'   => 10,
  );
  return $form;
}

function mp_product_tools_class_settings_submit($form, &$form_state) {
  $roles_array = user_roles(true, 'act as seller');
  foreach ($roles_array as $role) {
    db_query("UPDATE {mp_seller_rates} SET rate = %f WHERE rid = %d AND class = '%s'", $form_state['values']['marketplace_tools']['commission'][$role], array_search($role, $roles_array), $form_state['values']['product_class']);
    if (!db_affected_rows()) {
      db_query("INSERT INTO {mp_seller_rates} (rate, rid, class) VALUES (%f, %d, '%s')", $form_state['values']['marketplace_tools']['commission'][$role], array_search($role, $roles_array), $form_state['values']['product_class']);
    }
  }

  if (module_exists('mp_file')) {
    db_query("UPDATE {mp_file_class_settings} SET enabled = %d WHERE pcid = '%s'", $form_state['values']['marketplace_tools']['enable_downloads'], $form_state['values']['product_class']);
    if (!db_affected_rows()) {
      db_query("INSERT INTO {mp_file_class_settings} (pcid, enabled) VALUES ('%s', %d)", $form_state['values']['product_class'], $form_state['values']['marketplace_tools']['enable_downloads']);
    }
  }
  
  drupal_set_message('Marketplace product settings saved.');
  drupal_goto('admin/store/products/marketplace-tools');
}