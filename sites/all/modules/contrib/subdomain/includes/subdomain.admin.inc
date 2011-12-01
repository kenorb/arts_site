<?php

/**
 * @file
 * Subdomain admin settings
 */

function subdomain_admin() {

  /* Add Admin screen JS settings */
  $data = array(
    'user' => t('User name'),
    'contenttype' => t('Content type name'),
    'term' => t('Term name'),
    'group' => t('Group name'),
  );

  drupal_add_js(array('subdomain' => array('sourceOptionText' => $data)), 'setting');
  return drupal_get_form('subdomain_admin_settings');
}

/**
 * Implementation of hook_admin_settings().
 */
function subdomain_admin_settings(&$form_state) {

  $modes['user'] = t('User subdomains');

  if (module_exists('views')) {
    // Content Type mode requires a view homepage, so ensure views module exists :-)
    $modes['contenttype'] = t('Content type subdomains');
  }

  if (module_exists('taxonomy')) {
    $modes['term'] = t('Taxonomy subdomains');
  }

  if (module_exists('og')) {
    $modes['group'] = t('Organic group subdomains');
  }

  $form['subdomain_mode'] = array(
    '#type' => 'select',
    '#title' => t('Mode'),
    '#options' => $modes,
    '#default_value' => variable_get('subdomain_mode', 'user'),
  );

  if (module_exists('taxonomy')) {
    $vocabs = taxonomy_get_vocabularies();
    $vocab_options = array();
    if (is_array($vocabs)) {
      foreach ($vocabs as $vid => $vocab) {
        if (!$vocab->tags) {
          $vocab_options[$vid] = $vocab->name;
        }
      }
    }

    if (count($vocab_options)) {
      $form['subdomain_vocab'] = array(
        '#type' => 'select',
        '#title' => t('Select a vocabulary'),
        '#description' => t('Terms in the selected vocabulary will have their own subdomain.'),
        '#options' => $vocab_options,
        '#default_value' => variable_get('subdomain_vocab', NULL),
      );
    }
    else {
      $form['subdomain_vocab'] = array(
        '#type' => 'item',
        '#title' => t('Taxonomy vocabulary'),
        '#description' => t('<span class="error">No non-tag vocabularies found.<br />Create one before configuring taxonomy subdomains.</span>'),
        '#prefix' => '<div id="edit-subdomain-vocab-wrapper">',
        '#suffix' => '</div>',
      );
    }
  }

  $form['subdomain_source'] = array(
    '#type' => 'select',
    '#title' => t('Source for subdomain text'),
    '#options' => array(
      'default' => t('Automatic'),
      'custom' => t('User can specify a custom subdomain'),
    ),
    '#default_value' => variable_get('subdomain_source', 'default'),
  );

  if (module_exists('views')) {
    $views = views_get_all_views();
    $view_options = array();
    foreach($views as $name => $view) {
      if (!isset($view->disabled) || !$view->disabled) {
        $view_options[$name] = $name;
      }
    }

    $form['subdomain_home'] = array(
      '#type' => 'select',
      '#title' => t('Subdomain homepages'),
      '#options' => array(
        'default' => t('Default'),
        'view' => t('Custom view'),
      ),
      '#default_value' => variable_get('subdomain_home', 'default'),
    );

    if (count($view_options)) {
      $form['subdomain_view'] = array(
        '#type' => 'select',
        '#title' => t('Select a view'),
        '#options' => $view_options,
        '#default_value' => variable_get('subdomain_view', ''),
      );
    }
    else {
      $form['subdomain_view'] = array(
        '#type' => 'item',
        '#title' => t('Homepage view'),
        '#description' => t('<span class="error">No enabled views found.<br />Create a view before selecting a "custom view" for your subdomain homepages.</span>'),
        '#prefix' => '<div id="edit-subdomain-view-wrapper">',
        '#suffix' => '</div>',
      );
    }
    
  }

  $base = subdomain_get_domain();

  $form['subdomain_prepend_www'] = array(
    '#type' => 'checkbox',
    '#title' => t("Prepend 'www' to non-subdomain URLs (i.e. use <strong>http://www.$base</strong> instead of <strong>http://$base</strong>)"),
    '#default_value' => variable_get('subdomain_prepend_www', TRUE),
  );

  $form['#submit'][] = 'subdomain_admin_settings_submit';

  // Ensure server is setup to properly handle subdomains
  _subdomain_validate_dns();
  _subdomain_validate_cookie_domain();
  _subdomain_validate_webserver_config();

  return system_settings_form($form);
}

function subdomain_admin_settings_validate($form, &$form_state) {
  // Extract form values into simple variables
  foreach(array('mode', 'vocab', 'source', 'home', 'view') as $val) {
    if (isset($form_state['values']['subdomain_'. $val])) {
      ${$val} = $form_state['values']['subdomain_'. $val];
    }
  }

  if ($mode == 'term' && empty($vocab)) {
    form_set_error('subdomain_mode', t('You must create at least one non-tag vocabulary before configuring taxonomy subdomains.'));
  }

  if (isset($home) && $home == 'view' && empty($view)) {
    form_set_error('subdomain_home', t('You must create or enable at least one view before selecting a "Custom view" for your subdomain homepages.'));
  }
  elseif (isset($home) && $home == 'view') {
    // Check for presence of appropriate argument
    $view = views_get_view($view);
    $args = $view->display['default']->display_options['arguments'];

    $first_arg = empty($args) ? NULL : array_shift(array_keys($args));

    if (empty($first_arg)) {
      form_set_error('subdomain_view', t('The selected view has no arguments. Add a uid/nid/tid argument to your view to filter your content for the active subdomain.'));
    }
    elseif ($mode == 'term' && $first_arg != 'tid'
    || $mode == 'group' && !in_array($first_arg, array('nid', 'group_nid'))
    || $mode == 'user' && $first_arg != 'uid') {
      drupal_set_message(t("The selected view's first argument was @arg. This may not work as expected.", array('@arg' => $first_arg)), 'warning');
    }
  }
}

function subdomain_admin_settings_submit($form, &$form_state) {
  // If mode has changed, wipe subdomain tables
  // TODO: need user to confirm this...

  if ($form_state['values']['subdomain_mode'] != $form['subdomain_mode']['#default_value']) {
    db_query("DELETE FROM {subdomain};");
    if ($form_state['values']['subdomain_mode'] != 'contenttype') {
      variable_del('subdomain_contenttypes');
    }
  }

  // _subdomain_clear_caches();
}

function subdomain_filters_form() {
  $form['subdomain_filter_contenttypes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Exclude the following content types from subdomains'),
    '#description' => t('Nodes from the selected types will not be placed on subdomains.'),
    '#options' => node_get_types('names'),
    '#default_value' => variable_get('subdomain_filter_contenttypes', array()),
  );
  $form['subdomain_reserved'] = array(
    '#type' => 'textarea',
    '#title' => t('Disallow the following subdomains'),
    '#rows' => 5,
    '#description' => t('Enter 1 subdomain per line'),
    '#default_value' => variable_get('subdomain_reserved', '')
  );
  return system_settings_form($form);
}

function subdomain_tools() {
  return drupal_get_form('subdomain_tools_form');
}


function subdomain_tools_form(&$form_state) {

  $op = isset($_POST['op']) ? $_POST['op'] : '';
  if ($op == t('Generate subdomains')) {
    subdomain()->bulk_generate();
  }


  $form['subdomain_bulk_generate'] = array(
    '#type' => 'fieldset',
    '#title' => t('Bulk generate missing subdomains'),
    '#description' => t('Normally you wouldn\'t use this. Useful for testing or for auto-generating subdomains for an existing site.'),
  );

  $form['subdomain_bulk_generate']['subdomain_bulk_generate_button'] = array(
    '#type' => 'button',
    '#value' => t('Generate subdomains'),
  );
  return $form;
}








// TODO: probably don't need
function _subdomain_clear_caches() {
  // Flush all caches; no need to re-implement this.
  module_load_include('inc', 'system', 'system.admin');
  $form = $form_state = array();
  system_clear_cache_submit($form, $form_state);
}

function _subdomain_validate_dns($display_error = TRUE) {
  $domain = trim(subdomain_get_domain(), '.');
  $subdomain = SUBDOMAIN_TEST_SUBDOMAIN .'.'. $domain;

  $domain_ip = gethostbyname($domain);
  $subdomain_ip = gethostbyname($subdomain);

  if ($domain_ip != $subdomain_ip && $display_error) {
    drupal_set_message(t("<strong>Subdomain error:</strong> @domain and @subdomain did not resolve to the same IP address. Your DNS may be improperly configured and subdomains will likely not work.", array('@domain' => $domain, '@subdomain' => $subdomain)), 'error');
  }
  return $subdomain_ip == $domain_ip;
}

function _subdomain_validate_webserver_config() {
  if (_subdomain_validate_dns(FALSE)) {
    $domain = trim(subdomain_get_domain(), '.');
    $subdomain = SUBDOMAIN_TEST_SUBDOMAIN .'.'. $domain;

    $url = "http://$subdomain/subdomain/test";

    if (drupal_http_request($url)->data != SUBDOMAIN_TEST_RESPONSE) {
      drupal_set_message(t("<strong>Subdomain error:</strong> @subdomain was not correctly routed to this site. Ensure your webserver is setup to correctly route wildcard subdomains to this site", array('@domain' => $domain, '@subdomain' => $subdomain)), 'error');
    }
  }
}

function _subdomain_validate_cookie_domain($display_error = TRUE) {
  $settings = file_get_contents('./'. conf_path() . '/settings.php');
  $settings = str_replace(chr(13) . chr(10), "\n", $settings);
  $settings = explode("\n", $settings);

  foreach ($settings as $setting) {
    if (strpos($setting, '$cookie_domain') !== FALSE) {
      eval($setting);
    }
  }

  if (!isset($cookie_domain) && $display_error) {
    drupal_set_message(t('<strong>Subdomain error:</strong> The $cookie_domain variable in settings.php must be set or subdomains will not work.'), 'error');
  }
  return isset($cookie_domain);
}

function _subdomain_test_request() {
  echo SUBDOMAIN_TEST_RESPONSE;
  exit;
}
