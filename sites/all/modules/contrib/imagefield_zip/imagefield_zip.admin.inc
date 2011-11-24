<?php

/**
 * @file
 *   Configuration page for imagefield zip module.
 */

/**
 * Page generation function for admin/settings/imageinfo-cache
 */
function imagefield_zip_admin_page() {
  $output = '';
  return $output . drupal_get_form('imagefield_zip_admin_form');
}

/**
 * Form builder; Displays imagefield configuration options.
 */
function imagefield_zip_admin_form($form_state) {
  $form = array();

  foreach (content_types() as $node_type => $info) {
    foreach ($info['fields'] as $field_name => $data) {
      // Skip if not a filefield
      // not multiple fields
      // not an imagefield widget
      if ($data['type'] != 'filefield' || empty($data['multiple']) || $data['widget']['module'] != 'imagefield') {
        continue;
      }

      $form['imagefield_zip_' . $node_type . '_' . $field_name] = array(
        '#type'           => 'fieldset',
        '#title'          => t('%node - %field', array(
          '%node' => $info['name'],
          '%field' => $data['widget']['label'],
        )),
        '#description'    => t('Link to this widget: <a href="@link">@name</a>', array(
          '@link' => url('admin/content/node-type/' . str_replace('_', '-', $node_type) . '/fields/' . $field_name),
          '@name' => $info['type'] . ' - ' . $data['field_name'],
        )),
      );
      $form['imagefield_zip_' . $node_type . '_' . $field_name]['imagefield_zip_cck_widget_' . $node_type . '_' . $field_name] = array(
        '#type'           => 'radios',
        '#title'          => t('Location of the zip upload field'),
        '#default_value'  => variable_get('imagefield_zip_cck_widget_' . $node_type . '_' . $field_name, IMAGEFIELD_ZIP_CCK_WIDGET),
        '#options' => array(
          0 => t('Above Imagefield'),
          1 => t('Below Imagefield'),
          2 => t('Disabled'),
        ),
      );
      if (!function_exists('zip_open')) {
        $options = array(
          1 => t('HTML 5 Multi-upload Only'),
        );
      }
      else {
        $options = array(
          0 => t('Zip Files Only'),
          1 => t('HTML 5 Multi-upload Only'),
          2 => t('Both Zip & HTML 5'),
        );
      }
      $form['imagefield_zip_' . $node_type . '_' . $field_name]['imagefield_zip_upload_mode_' . $node_type . '_' . $field_name] = array(
        '#type'           => 'radios',
        '#title'          => t('Upload field mode'),
        '#default_value'  => variable_get('imagefield_zip_upload_mode_' . $node_type . '_' . $field_name, IMAGEFIELD_ZIP_UPLOAD_MODE),
        '#options' => $options,
      );
      if (!function_exists('zip_open')) {
        $options = array(
          1 => t('Show message that your browser does not support HTML5'),
          2 => t('Disable Multi Upload'),
        );
      }
      else {
        $options = array(
          0 => t('Degrade to zip only'),
          1 => t('Show message that your browser does not support HTML5'),
          2 => t('Disable Multi Upload'),
        );
      }
      $form['imagefield_zip_' . $node_type . '_' . $field_name]['imagefield_zip_fallback_' . $node_type . '_' . $field_name] = array(
        '#type'           => 'radios',
        '#title'          => t('Non HTML5 Fallback Mode'),
        '#default_value'  => variable_get('imagefield_zip_fallback_' . $node_type . '_' . $field_name, IMAGEFIELD_ZIP_FALLBACK),
        '#options' => $options,
      );

      // Create javascript variable names;
      $location_vis_function = "imagefield_zip_upload_widget_visibility_${node_type}_${field_name}";
      $fallback_vis_function = "imagefield_zip_fallback_visibility_${node_type}_${field_name}";
      $node_type_css = str_replace('_', '-', $node_type);
      $field_name_css = str_replace('_', '-', $field_name);

      $cck_widget = "edit-imagefield-zip-cck-widget-$node_type_css-$field_name_css-2";
      $cck_widget_wrapper = "edit-imagefield-zip-cck-widget-$node_type_css-$field_name_css-2-wrapper";
      $upload_mode = "edit-imagefield-zip-upload-mode-$node_type_css-$field_name_css-1";
      $upload_mode_wrapper = "edit-imagefield-zip-upload-mode-$node_type_css-$field_name_css-1-wrapper";
      $fallback_wrapper = "edit-imagefield-zip-fallback-$node_type_css-$field_name_css-1-wrapper";

      $widget_vis = "
// Location Radio Logic.
function ${location_vis_function}() {
  if ($('#${cck_widget}:checked').val() !== undefined) {
    $('#${upload_mode_wrapper}').parent().parent().hide();
    $('#${fallback_wrapper}').parent().parent().hide();
  }
  else {
    $('#${upload_mode_wrapper}').parent().parent().show();
    if ($('#${upload_mode}:checked').val() !== undefined) {
      $('#${fallback_wrapper}').parent().parent().show();
    }
  }
}
$(${location_vis_function});

$(function(){ $('#${cck_widget_wrapper}').parent().change(function (){
  ${location_vis_function}();
})});

// Upload Field Logic.
function ${fallback_vis_function}() {
  if ($('#${upload_mode}:checked').val() !== undefined && $('#${cck_widget}:checked').val() === undefined) {
    $('#${fallback_wrapper}').parent().parent().show();
  }
  else {
    $('#${fallback_wrapper}').parent().parent().hide();
  }
}
$(${fallback_vis_function});
$(function(){ $('#${upload_mode_wrapper}').parent().change(function (){
  ${fallback_vis_function}();
})});
";
      drupal_add_js($widget_vis, 'inline', 'footer');
    }
  }

  return system_settings_form($form);
}

/**
 * Called from imagefield_zip_form_alter().
 */
function imagefield_zip_cck_widget_form(&$form, $form_state, $form_id) {
  // Get widget settings.
  $widget_settings = variable_get('imagefield_zip_cck_widget_' . $form['#field']['type_name'] . '_' . $form['#field']['field_name'], IMAGEFIELD_ZIP_CCK_WIDGET);
  $upload_mode = variable_get('imagefield_zip_upload_mode_' . $form['#field']['type_name'] . '_' . $form['#field']['field_name'], IMAGEFIELD_ZIP_UPLOAD_MODE);
  $fallback_mode = variable_get('imagefield_zip_fallback_' . $form['#field']['type_name'] . '_' . $form['#field']['field_name'], IMAGEFIELD_ZIP_FALLBACK);

  // Add in settings form.
  $form['widget']['imagefield_zip'] = array(
    '#type'           => 'fieldset',
    '#title'          => t('Imagefield Zip'),
    '#collapsible'    => 1,
    '#collapsed'      => 1,
    '#weight'         => 20,
  );
  $form['widget']['imagefield_zip']['imagefield_zip_location'] = array(
    '#type'           => 'radios',
    '#title'          => t('Location of the zip upload field'),
    '#default_value'  => $widget_settings,
    '#options' => array(
      0 => t('Above'),
      1 => t('Below'),
      2 => t('Disabled'),
    ),
  );
  if (!function_exists('zip_open')) {
    $options = array(
      1 => t('HTML 5 Multi-upload Only'),
    );
  }
  else {
    $options = array(
      0 => t('Zip Files Only'),
      1 => t('HTML 5 Multi-upload Only'),
      2 => t('Both Zip & HTML 5'),
    );
  }
  $form['widget']['imagefield_zip']['imagefield_zip_upload_mode'] = array(
    '#type'           => 'radios',
    '#title'          => t('Upload field mode'),
    '#default_value'  => $upload_mode,
    '#options'        => $options,
  );
  if (!function_exists('zip_open')) {
    $options = array(
      1 => t('Show message that your browser does not support HTML5'),
      2 => t('Disable Multi Upload'),
    );
  }
  else {
    $options = array(
      0 => t('Degrade to zip only'),
      1 => t('Show message that your browser does not support HTML5'),
      2 => t('Disable Multi Upload'),
    );
  }
  $form['widget']['imagefield_zip']['imagefield_zip_fallback'] = array(
    '#type'           => 'radios',
    '#title'          => t('Non HTML5 Fallback Mode'),
    '#default_value'  => $fallback_mode,
    '#options'        => $options,
  );

  // Add in submit handler.
  if (!in_array('imagefield_zip_cck_widget_form_submit', $form['#submit'])) {
    $form['#submit'][] = 'imagefield_zip_cck_widget_form_submit';
  }

  $widget_vis = "
// Location Radio Logic.
function imagefield_zip_upload_widget_visibility() {
  if ($('#edit-imagefield-zip-location-2:checked').val() !== undefined) {
    $('#edit-imagefield-zip-upload-mode-1-wrapper').parent().parent().hide();
    $('#edit-imagefield-zip-fallback-1-wrapper').parent().parent().hide();
  }
  else {
    $('#edit-imagefield-zip-upload-mode-1-wrapper').parent().parent().show();
    if ($('#edit-imagefield-zip-upload-mode-1:checked').val() !== undefined) {
      $('#edit-imagefield-zip-fallback-1-wrapper').parent().parent().show();
    }
  }
}
$(imagefield_zip_upload_widget_visibility);
$(function(){ $('#edit-imagefield-zip-location-2-wrapper').parent().change(function (){imagefield_zip_upload_widget_visibility();})});

// Upload Field Logic.
function imagefield_zip_fallback_widget_visibility() {
  if ($('#edit-imagefield-zip-upload-mode-1:checked').val() !== undefined && $('#edit-imagefield-zip-location-2:checked').val() === undefined) {
    $('#edit-imagefield-zip-fallback-1-wrapper').parent().parent().show();
  }
  else {
    $('#edit-imagefield-zip-fallback-1-wrapper').parent().parent().hide();
  }
}
$(imagefield_zip_fallback_widget_visibility);
$(function(){ $('#edit-imagefield-zip-upload-mode-1-wrapper').parent().change(function (){imagefield_zip_fallback_widget_visibility();})});
";
  drupal_add_js($widget_vis, 'inline');
}

/**
 * Implements hook_form_submit().
 */
function imagefield_zip_cck_widget_form_submit($form, &$form_state) {
  if (   !isset($form_state['values']['imagefield_zip_location'])
      && !isset($form_state['values']['imagefield_zip_upload_mode'])
      && !isset($form_state['values']['imagefield_zip_fallback'])
        ) {
    return;
  }

  // Save value.
  variable_set('imagefield_zip_cck_widget_' . $form['#field']['type_name'] . '_' . $form['#field']['field_name'], (int) $form_state['values']['imagefield_zip_location']);
  unset($form_state['values']['imagefield_zip_location']);

  variable_set('imagefield_zip_upload_mode_' . $form['#field']['type_name'] . '_' . $form['#field']['field_name'], (int) $form_state['values']['imagefield_zip_upload_mode']);
  unset($form_state['values']['imagefield_zip_upload_mode']);

  variable_set('imagefield_zip_fallback_' . $form['#field']['type_name'] . '_' . $form['#field']['field_name'], (int) $form_state['values']['imagefield_zip_fallback']);
  unset($form_state['values']['imagefield_zip_fallback']);
}
