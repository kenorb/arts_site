<?php

/**
 * @file
 * Handles quickbar administration
 *
 * Assign roles a toolbar.
 */

/**
 * Page to administer quickbar
 *
 * Sets which role uses which menu for it's quickbar.
 *
 * @return
 *  A form setting quicbar menus per role.
 */
function quickbar_form(&$form_state) {
  $form['intro'] = array(
    '#value' => '<p>' . t('Choose which menu and icon set should be used for each role. If a user has multiple roles they will get the menu of the higher role which has an assigned menu.') . '</p>',
  );

  $menus = menu_get_menus();

  $roles = user_roles();
  $weighted_roles = unserialize(variable_get('quickbar_role_weights', ''));
  foreach ($roles as $rid => $name) {
    if (empty($weighted_roles[$rid])) {
      $weighted_roles[$rid] = 0;
    }
  }

  array_unshift($menus, 'None');
  foreach ($weighted_roles as $rid => $weight) {
    $form['toolbar_title_' . $rid] = array(
      '#type' => 'markup',
      '#value' => $roles[$rid],
    );

    $form['toolbar_weight_' . $rid] = array(
      '#type' => 'weight',
      '#default_value' => $weight,
      // drag group
      '#attributes' => array('class' => 'quickbar-role-order-weight')
    );

    $form['toolbar_' . $rid] = array(
      '#type' => 'select',
      '#default_value' => variable_get('quickbar_' . $rid, 0),
      '#options' => $menus,
    );

    $form['toolbar_configure_' . $rid] = array(
      '#type' => 'markup',
      '#value' => l('Configure', 'admin/settings/quickbar/' . $rid . '/edit'),
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Submit handler for quickbar_form()
 *
 * @see quickbar_form()
 * @ingroup forms
 */
function quickbar_form_submit(&$form, &$form_state) {
  $roles = user_roles();
  $weights = array();
  foreach ($roles as $rid => $name) {
    variable_set('quickbar_' . $rid, $form_state['values']['toolbar_' . $rid]);
    $weights[$rid] = $form_state['values']['toolbar_weight_' . $rid];
  }

  variable_set('quickbar_role_weights', serialize($weights));

  drupal_set_message('The toolbars have been saved.');

}

/**
 * Theme handler for quickbar_form()
 *
 * @see theme_quickbar_form()
 * @ingroup themable
 */
function theme_quickbar_form($form) {

  $output = drupal_render($form['intro']);

  // Get the weighted list of roles and add roles that haven't been weighted yet
  $roles = unserialize(variable_get('quickbar_role_weights', ''));
  foreach (user_roles() as $rid => $name) {
    if (empty($roles[$rid])) {
      $roles[$rid] = 0;
    }
  }

  // Sort the roles.
  asort($roles);

  // Build the table rows.
  $rows = array();
  foreach ($roles as $rid => $name) {
    $rows[] = array(
      'data' => array(
        drupal_render($form['toolbar_title_' . $rid]),
        drupal_render($form['toolbar_' . $rid]),
        drupal_render($form['toolbar_configure_' . $rid]),
        drupal_render($form['toolbar_weight_' . $rid]),
      ),
      'class' => 'draggable',
    );
  }

  // Build our draggable table
  $header = array(
    t('Role'),
    t('Assigned Menu'),
    array(
      'data' => t('Configuration'),
      'colspan' => 2,
    ),
  );
  $output .= theme('table', $header, $rows, array('id' => 'quickbar-role-order'));
  $output .= drupal_render($form);

  drupal_add_tabledrag('quickbar-role-order', 'order', 'sibling', 'quickbar-role-order-weight');

  return $output;
}

// Route to our form.
function _quickbar_configure_page($rid) {
  $output = drupal_get_form('quickbar_configure_form', $rid);

  return $output;
}

/**
 * Page to configure a toolbar
 *
 * Configures the settings for a toolbar.
 *
 * @return
 *  A form setting the settings for a toolbar.
 */
function quickbar_configure_form(&$form_state, $rid) {
  $form_state['rid'] = $rid;

  $iconset_info = module_invoke_all('quickbar_iconset_info');

  $iconsets = array();
  foreach ($iconset_info as $iconset_id => $iconset_data) {
    $iconsets[$iconset_id] = $iconset_data['title'];
  }

  $form['iconset'] = array(
    '#title' => 'Iconset',
    '#description' => 'Choose the iconset for the toolbar.',
    '#type' => 'select',
    '#default_value' => variable_get('quickbar_iconset_' . $rid, 'quickbar'),
    '#options' => $iconsets,
  );

  $form['sticky'] = array(
    '#title' => 'Make the toolbar sticky at the top',
    '#description' => 'If this is enabled the toolbar will always be visible as you scroll down.',
    '#type' => 'checkbox',
    '#default_value' => variable_get('quickbar_sticky_' . $rid, FALSE),
  );
  
  $form['nofollow'] = array(
    '#title' => 'Do not follow top-level links',
    '#description' => 'If this is enabled the top-level links of toolbar will only open secondary menus.',
    '#type' => 'checkbox',
    '#default_value' => variable_get('quickbar_nofollow_' . $rid, FALSE),
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Submit handler for quickbar_configure_form()
 *
 * @see quickbar_configure_form()
 * @ingroup forms
 */
function quickbar_configure_form_submit(&$form, &$form_state) {
  // Set the value of the iconset.
  variable_set('quickbar_iconset_' . $form_state['rid'], $form_state['values']['iconset']);

  // Set the value of the sticky status.
  variable_set('quickbar_sticky_' . $form_state['rid'], $form_state['values']['sticky']);
  
  // Set the value of the nofollow status.
  variable_set('quickbar_nofollow_' . $form_state['rid'], $form_state['values']['nofollow']);
  
  drupal_set_message('The toolbar settings have been saved.');

  // Go back to the quickbar form.
  $form_state['redirect'] = 'admin/settings/quickbar';
}
