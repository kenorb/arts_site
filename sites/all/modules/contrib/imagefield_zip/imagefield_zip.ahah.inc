<?php

/**
 * @file
 * AHAH callback code.
 */

/**
 * AHAH menu callback.
 */
function imagefield_zip_js($type_name, $field_name) {
  // Get all images from the zip field.
  $images = imagefield_zip_save_and_extract_upload($field_name . '_zip', $type_name, 'ahah');

  // Generate HTML for the images that where uploaded
  $result = imagefield_zip_add_files_to_form($type_name, $field_name, $images);

  // Destroy the original zip upload form and replace it with the clean clone.
  $id = 'edit-' . str_replace('_', '-', $field_name) . '-upload';
  $extra_js = '<script type="text/javascript">
  _imagefield_zip_' . $field_name . '_cloned.insertAfter(_imagefield_zip_' . $field_name . '_real);
  _imagefield_zip_' . $field_name . '_real.remove();
  _imagefield_zip_' . $field_name . '_real = $("#' . $id . '");
  _imagefield_zip_' . $field_name . '_cloned = _imagefield_zip_' . $field_name . '_real.clone(true);
  </script>';

  // Theme HTML
  $data = theme('status_messages') . $result . $extra_js;
  if ($result !== FALSE) {
    $return = array('data' => $data, 'status' => TRUE);
  }
  else {
    $return = array('data' => $data);
  }

  // For some reason, file uploads don't like drupal_json() with its manual
  // setting of the text/javascript HTTP header. So use this one instead.
  print drupal_to_js($return);
  exit;
}

/**
 * AHAH addition of new widgets containing the uploaded files.
 */
function imagefield_zip_add_files_to_form($type_name, $field_name, $files) {
  $field = content_fields($field_name, $type_name);

  // Immediately disable devel shutdown functions so that it doesn't botch our
  // JSON output.
  $GLOBALS['devel_shutdown'] = FALSE;

  if (empty($field) || empty($_POST['form_build_id'])) {
    // Invalid request.
    drupal_set_message(t('An unrecoverable error occurred. The uploaded file likely exceeded the maximum file size (@size) that this server supports.', array('@size' => format_size(file_upload_max_size()))), 'error');
    return FALSE;
  }

  // Build the new form.
  $form_state = array('submitted' => FALSE);
  $form_build_id = check_plain($_POST['form_build_id']);
  $form = form_get_cache($form_build_id, $form_state);

  if (!$form) {
    // Invalid form_build_id.
    drupal_set_message(t('An unrecoverable error occurred. This form was missing from the server cache. Try reloading the page and submitting again.'), 'error');
    return FALSE;
  }

  // Include files we need and gather some other helpful info.
  module_load_include('inc', 'content', 'includes/content.node_form');
  $dest = filefield_widget_file_path($field);
  $widget_function = $field['widget']['module'] .'_widget';

  // We don't simply return a new empty widget to append to existing ones, because
  // - ahah.js won't simply let us add a new row to a table
  // - attaching the 'draggable' behavior won't be easy
  // So we resort to rebuilding the whole table of widgets including the existing ones,
  // which makes us jump through a few hoops.

  // The form that we get from the cache is unbuilt. We need to build it so that
  // _value callbacks can be executed and $form_state['values'] populated.
  // We only want to affect $form_state['values'], not the $form itself
  // (built forms aren't supposed to enter the cache) nor the rest of $form_data,
  // so we use copies of $form and $form_data.
  $form_copy = $form;
  $form_state_copy = $form_state;
  $form_copy['#post'] = array();
  form_builder(check_plain($_POST['form_id']), $form_copy, $form_state_copy);
  // Just grab the data we need.
  $form_state['values'] = $form_state_copy['values'];
  // Reset cached ids, so that they don't affect the actual form we output.
  form_clean_id(NULL, TRUE);

  // Sort the $form_state['values'] we just built *and* the incoming $_POST data
  // according to d-n-d reordering.
  unset($form_state['values'][$field_name][$field['field_name'] .'_add_more']);
  foreach ($_POST[$field_name] as $delta => $item) {
    $form_state['values'][$field_name][$delta]['_weight'] = $item['_weight'];
    $form_state['values'][$field_name][$delta]['_remove'] = isset($item['_remove']) ? $item['_remove'] : 0;
  }
  $form_state['values'][$field_name] = _content_sort_items($field, $form_state['values'][$field_name]);
  $_POST[$field_name] = _content_sort_items($field, $_POST[$field_name]);

  // Build our new form element for the whole field.
  $form_state['item_count'] = array($field_name => count($_POST[$field_name]));
  $form_element = content_field_form($form, $form_state, $field);

  // Go through each file and add it the newly crated element from above.
  $delta = 0;
  $delta_used = array();
  foreach ($files as $file) {
    // Get an empty delta.
    while (!empty($form_element[$field_name][$delta]['#default_value'])) {
      $delta++;
    }

    // Create a new element.
    $delta_element = $widget_function($built_form, $built_form_state, $field, array(), $delta);

    // Put the file in the new element.
    if ($file = field_file_save_file($file->filepath, $delta_element['#upload_validators'], $dest)) {
      // Set the default value of the widget to the extracted file.
      // Element requires #field_name and #type_name to be set
      // or it triggers PHP notices later on within content.module.
      $delta_element['#field_name'] = $field_name;
      $delta_element['#type_name'] = $type_name;
      $delta_element['#delta'] = $delta;
      $delta_element['#array_parents'][] = $field_name;

      $delta_element['#default_value'] = filefield_widget_value($delta_element, (array) $file);
      // We add a div around the new content to tell AHAH to let this fade in.
      $delta_element['#prefix'] = '<div class="ahah-new-content">';
      $delta_element['#suffix'] = '</div>';

      // theme_content_multiple_values() does not use default element order
      // or #weight
      // Need to explicitly set this value or import order gets randomized.
      $delta_element['_weight'] = array(
        '#type' => 'weight',
        '#default_value' => $delta,
      );
      $delta_used[] = $delta;
      $form_element[$field_name][$delta] = $delta_element;
    }
  }
  $form_element['#id'] = 'imagefield_zip_js';

  // Let other modules alter it.
  // We pass an empty array as hook_form_alter's usual 'form_state' parameter,
  // instead of $form_state (for reasons we may never remember).
  // However, this argument is still expected to be passed by-reference
  // (and PHP5.3 will throw an error if it isn't.) This leads to:
  $data = &$form_element;
  $empty_form_state = array();
  $data['__drupal_alter_by_ref'] = array(&$empty_form_state);
  drupal_alter('form', $data, 'imagefield_zip_js');

  // Add the new element at the right place in the (original, unbuilt) form.
  if (function_exists('content_set_nested_elements')) {
    content_set_nested_elements($form, $field_name, $form_element[$field_name]);
  }
  else {
    if (module_exists('fieldgroup') && ($group_name = _fieldgroup_field_get_group($type['type'], $field_name))) {
      $form[$group_name][$field_name] = $form_element[$field_name];
    }
    else {
      $form[$field_name] = $form_element[$field_name];
    }
  }

  // Save the new definition of the form.
  $form_state['values'] = array();
  form_set_cache($form_build_id, $form, $form_state);

  // Build the new form against the incoming $_POST values so that we can
  // render the new element.
  $form_state = array('submitted' => FALSE);
  $form += array(
    '#post' => $_POST,
    '#programmed' => FALSE,
  );
  $form = form_builder(check_plain($_POST['form_id']), $form, $form_state);

  // Render the new output.
  $field_form = imagefield_zip_array_find_element_by_key($field_name, $form);

  // We add a div around the new content to receive the ahah effect.
  foreach ($delta_used as $delta) {
    $field_form[$delta]['#prefix'] = '<div class="ahah-new-content">'. (isset($field_form[$delta]['#prefix']) ? $field_form[$delta]['#prefix'] : '');
    $field_form[$delta]['#suffix'] = (isset($field_form[$delta]['#suffix']) ? $field_form[$delta]['#suffix'] : '') .'</div>';
  }
  // Prevent duplicate wrapper.
  unset($field_form['#prefix'], $field_form['#suffix']);

  // Generate the new html.
  $output = drupal_render($field_form);

  // If a newly inserted widget contains AHAH behaviors, they normally won't
  // work because AHAH doesn't know about those - it just attaches to the exact
  // form elements that were initially specified in the Drupal.settings object.
  // The new ones didn't exist then, so we need to update Drupal.settings
  // by ourselves in order to let AHAH know about those new form elements.
  $javascript = drupal_add_js(NULL, NULL);
  $output_js = isset($javascript['setting']) ? '<script type="text/javascript">jQuery.extend(Drupal.settings, '. drupal_to_js(call_user_func_array('array_merge_recursive', $javascript['setting'])) .');</script>' : '';

  // Using drupal_json() breaks filefield's file upload, because the jQuery
  // Form plug-in handles file uploads in a way that is not compatible with
  // 'text/javascript' response type.
  $GLOBALS['devel_shutdown'] =  FALSE;
  return $output . $output_js;
}

/**
 * AHAH menu callback.
 */
function imagefield_zip_multigroup_js($type_name, $group_name) {
  // Get all images from the zip field.
  $images = imagefield_zip_save_and_extract_upload($group_name . '_zip', $type_name, 'ahah');

  // Generate HTML for the images that where uploaded
  $result = imagefield_zip_add_files_to_multigroup_form($type_name, $group_name, $images);

  // Destroy the original zip upload form and replace it with the clean clone.
  $id = 'edit-' . str_replace('_', '-', $group_name) . '-upload';
  $extra_js = '<script type="text/javascript">
  _imagefield_zip_' . $group_name . '_cloned.insertAfter(_imagefield_zip_' . $group_name . '_real);
  _imagefield_zip_' . $group_name . '_real.remove();
  _imagefield_zip_' . $group_name . '_real = $("#' . $id . '");
  _imagefield_zip_' . $group_name . '_cloned = _imagefield_zip_' . $group_name . '_real.clone(true);
  </script>';

  // Theme HTML
  $data = theme('status_messages') . $result . $extra_js;
  if ($result !== FALSE) {
    $return = array('data' => $data, 'status' => TRUE);
  }
  else {
    $return = array('data' => $data);
  }

  // For some reason, file uploads don't like drupal_json() with its manual
  // setting of the text/javascript HTTP header. So use this one instead.
  print drupal_to_js($return);
  exit;
}

/**
 * Menu callback for AHAH addition of new empty widgets.
 *
 * Adapted from content_add_more_js to work with groups instead of fields.
 */
function imagefield_zip_add_files_to_multigroup_form($type_name_url, $group_name, $files) {
  $content_type = content_types($type_name_url);
  $type_name = $content_type['type'];
  $groups = fieldgroup_groups($type_name);
  $group = $groups[$group_name];

  // Immediately disable devel shutdown functions so that it doesn't botch our
  // JSON output.
  $GLOBALS['devel_shutdown'] = FALSE;

  if (($group['settings']['multigroup']['multiple'] != 1) || empty($_POST['form_build_id'])) {
    // Invalid request.
    drupal_set_message(t('An unrecoverable error occurred. The uploaded file likely exceeded the maximum file size (@size) that this server supports.', array('@size' => format_size(file_upload_max_size()))), 'error');
    return FALSE;
  }

  // Retrieve the cached form.
  $form_state = array('submitted' => FALSE);
  $form_build_id = check_plain($_POST['form_build_id']);
  $form = form_get_cache($form_build_id, $form_state);
  if (!$form) {
    // Invalid form_build_id.
    drupal_set_message(t('An unrecoverable error occurred. This form was missing from the server cache. Try reloading the page and submitting again.'), 'error');
    return FALSE;
  }

  $type = content_types($form['#node']->type);
  $fields = _imagefield_zip_fields($type);

  // We don't simply return a new empty widget to append to existing ones, because
  // - ahah.js won't simply let us add a new row to a table
  // - attaching the 'draggable' behavior won't be easy
  // So we resort to rebuilding the whole table of widgets including the existing ones,
  // which makes us jump through a few hoops.

  // The form that we get from the cache is unbuilt. We need to build it so that
  // _value callbacks can be executed and $form_state['values'] populated.
  // We only want to affect $form_state['values'], not the $form itself
  // (built forms aren't supposed to enter the cache) nor the rest of $form_data,
  // so we use copies of $form and $form_data.
  $form_copy = $form;
  $form_state_copy = $form_state;
  $form_copy['#post'] = array();
  form_builder(check_plain($_POST['form_id']), $form_copy, $form_state_copy);
  // Just grab the data we need.
  $form_state['values'] = $form_state_copy['values'];
  // Reset cached ids, so that they don't affect the actual form we output.
  form_clean_id(NULL, TRUE);

  // Sort the $form_state['values'] we just built *and* the incoming $_POST data
  // according to d-n-d reordering.
  unset($form_state['values'][$group_name][$group['group_name'] .'_add_more']);
  foreach ($_POST[$group_name] as $delta => $item) {
    $form_state['values'][$group_name][$delta]['_weight'] = $item['_weight'];
    $form_state['values'][$group_name][$delta]['_remove'] = isset($item['_remove']) ? $item['_remove'] : 0;
  }
  $group['multiple'] = $group['settings']['multigroup']['multiple'];
  $form_state['values'][$group_name] = _content_sort_items($group, $form_state['values'][$group_name]);
  $_POST[$group_name] = _content_sort_items($group, $_POST[$group_name]);


  // Find the correct field to add the images to.
  foreach ($fields as $field_name => $field) {
    if (isset($form[$group_name][0][$field_name])) {
      $target_field = $field_name;
      $dest = filefield_widget_file_path($field);
      break;
    }
  }

  // Build our new form element for the whole group, asking for one more element.
  $item_count = count($_POST[$group_name]);
  $delta_used = array();

  // Set previous fids.
  foreach ($_POST[$group_name] as $delta => $post_values) {
    if (empty($form[$group_name][$delta][$target_field]['#default_value']['fid']) && !empty($post_values[$target_field]['fid'])) {
      $temp['#default_value'] = $post_values[$target_field];
      $form[$group_name][$delta][$target_field]['#default_value'] = filefield_widget_value($temp);
    }
  }

  // Add files to empty slots or create a new one.
  $delta = 0;
  foreach ($files as $file) {
    // Get an empty delta.
    while (!empty($form[$group_name][$delta][$target_field]['#default_value']['fid'])) {
      $delta++;
    }

    // The delta element does not exist; we need to create it.
    if (!isset($form[$group_name][$delta][$target_field])) {
      $item_count++;
      $form_state['item_count'] = array($group_name => $item_count);
      $form_element = content_multigroup_group_form($form, $form_state, $group, $delta);
      // Rebuild weight deltas to make sure they all are equally dimensioned.
      foreach ($form_element[$group_name] as $key => $item) {
        if (is_numeric($key) && isset($item['_weight']) && is_array($item['_weight'])) {
          $form_element[$group_name][$key]['_weight']['#delta'] = $delta;
        }
      }
      // Add the new element at the right place in the (original, unbuilt) form.
      $success = content_set_nested_elements($form, $group_name, $form_element[$group_name]);
    }

    // Add photo info to new group.
    $delta_element = &$form[$group_name][$delta][$target_field];
    // Put the file in the new element.
    if ($file = field_file_save_file($file->filepath, $delta_element['#upload_validators'], $dest)) {
      // Set array parents to prevent php notices.
      $delta_element['#array_parents'][] = $target_field;
      // Set the default value of the widget to the extracted file.
      $delta_element['#default_value'] = filefield_widget_value($delta_element, (array) $file);
    }
    // Record new deltas.
    $delta_used[] = $delta;
  }

  // Save the new definition of the form.
  $form_state['values'] = array();
  form_set_cache($form_build_id, $form, $form_state);

  // Build the new form against the incoming $_POST values so that we can
  // render the new element.
  foreach ($delta_used as $delta) {
    $_POST[$group_name][$delta]['_weight'] = $delta;
  }
  $form_state = array('submitted' => FALSE);
  $form += array(
    '#post' => $_POST,
    '#programmed' => FALSE,
  );
  $form['#post'] = array();
  $form = form_builder(check_plain($_POST['form_id']), $form, $form_state);
  // Render the new output.
  $group_form = array_shift(content_get_nested_elements($form, $group_name));

  // We add a div around the new content to receive the ahah effect.
  foreach ($delta_used as $delta) {
    $group_form[$delta]['#prefix'] = '<div class="ahah-new-content">'. (isset($group_form[$delta]['#prefix']) ? $group_form[$delta]['#prefix'] : '');
    $group_form[$delta]['#suffix'] = (isset($group_form[$delta]['#suffix']) ? $group_form[$delta]['#suffix'] : '') .'</div>';
  }
  // Prevent duplicate wrapper.
  unset($group_form['#prefix'], $group_form['#suffix']);
  // We're in the AHAH handler, so the fieldset was expanded.
  $group_form['#collapsed'] = FALSE;

  // Generate the new html.
  $output = drupal_render($group_form);

  // If a newly inserted widget contains AHAH behaviors, they normally won't
  // work because AHAH doesn't know about those - it just attaches to the exact
  // form elements that were initially specified in the Drupal.settings object.
  // The new ones didn't exist then, so we need to update Drupal.settings
  // by ourselves in order to let AHAH know about those new form elements.
  $javascript = drupal_add_js(NULL, NULL);
  $output_js = isset($javascript['setting']) ? '<script type="text/javascript">jQuery.extend(Drupal.settings, '. drupal_to_js(call_user_func_array('array_merge_recursive', $javascript['setting'])) .');</script>' : '';

  // Using drupal_json() breaks filefield's file upload, because the jQuery
  // Form plug-in handles file uploads in a way that is not compatible with
  // 'text/javascript' response type.
  $GLOBALS['devel_shutdown'] =  FALSE;
  return $output . $output_js;
}
