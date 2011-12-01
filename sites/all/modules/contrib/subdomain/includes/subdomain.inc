<?php

/**
 * @file
 * Subdomain engine base class
 */

/**
 * Description of subdomain engine
 */
class subdomain_engine {
  var $mode;
  var $source;
  var $home;
  var $view;
  var $form_field;

  // Constructor
  function subdomain_engine() {
    $this->mode = variable_get('subdomain_mode', 'user');
    $this->source = variable_get('subdomain_source', 'default');
    $this->home = variable_get('subdomain_home', 'default');
    $this->view = variable_get('subdomain_view', '');

    if ($this->source == 'default') {
      $this->form_field = $this->default_form_field();
    }
    else {
      $this->form_field = 'subdomain';
    }
  }

  function default_form_field() {
    return 'name';
  }

  function get_homepage_path($sid) {
    if ($this->home == 'default') {
      return subdomain()->base_path($sid);
    }
    else {
      return "subdomain/homepage/$sid";
    }
  }

  function data_handler($op, $object) {
    switch ($op) {
      case 'insert':
        if (user_access('create subdomains')) {
          $this->save($object);
        }
        break;
      case 'update':
        if (user_access('edit subdomains')) {
          $this->save($object);
        }
        break;
      case 'delete':
        $this->delete($object);
        break;
    }
  }

  /**
   * Prepares subdomain for saving
   */
  function clean($raw) {
    // Replace spaces with dashes] & convert to lower case
    $raw = strtolower(str_replace(" ", "-", $raw));
    return preg_replace("/[^a-z-]/", "", $raw);
  }

  function exists($value) {
    $sid = subdomain_get_sid($value);
    return !empty($sid);
  }

  function save_record($id, $raw, $insert = FALSE) {
    $row->sid = $id;
    $row->subdomain = $this->clean($raw);
    if ($row->subdomain) {
      drupal_write_record('subdomain', $row, $insert ? array() : array('sid'));
    }
    else {
      // Delete subdomain if blank (site admins can enter blank subdomains)
      $this->delete_record($row->sid);
    }
  }

  function delete_record($sid) {
    db_query('DELETE FROM {subdomain} WHERE sid = %d', $sid);
  }
}














/**
 * Checks whether protocol is https or http
 * Based on code from http://php.net/manual/en/reserved.variables.server.php#89306
 */
function _subdomain_get_protocol() {
  static $protocol;
  if (!isset($protocol)) {
    if (isset($_SERVER['https']) && $_SERVER['https'] == 1 /* Apache */
    ||  isset($_SERVER['https']) && $_SERVER['https'] == 'on' /* IIS */
    ||  isset($_SERVER['SERVER_PORT']) && $_SERVER['SERVER_PORT'] == 443) /* others */ {
      $protocol = 'https://';
    }
    else {
      $protocol = 'http://';
    }
  }
  return $protocol;
}

function _subdomain_id_from_path($type, $path) {
  // Borrowed from Domain Access: Advanced pattern matching, we find the node id based on token %n in the path string.
  static $paths;

  $default_paths = array(
    'nid' => "node/%n\r\nnode/%n/edit\r\ncomment/reply/%n\r\nnode/add/book/parent/%n\r\nbook/export/html/%n\r\nnode/%n/outline",
    'uid' => "user/%n\r\nuser/%n/edit",
    'tid' => "taxonomy/term/%n",
  );

  $id = NULL;

  if (!isset($paths[$type])) {
    $pathdata = variable_get('subdomain_'. $type .'_paths', $default_paths[$type]);
    $path_match = preg_replace('/(\r\n?|\n)/', '|', $pathdata);
    $paths[$type] = explode("|", $path_match);
  }

  $pattern = explode('/', $path);

  foreach ($paths[$type] as $match) {
    $match_array = explode('/', $match);
    $placeholder = array_search('%n', $match_array);
    if (isset($pattern[$placeholder])) {
      $match_array[$placeholder] = $pattern[$placeholder];
      if (is_numeric($pattern[$placeholder]) && $match_array == $pattern) {
        $id = (int) $pattern[$placeholder];
        break;
      }
    }
  }
  return $id;
}

function _subdomain_get_custom_form_field($default, $editable = FALSE) {
  if ($editable) {
    // Make subdomain entry required unless user is site admin...
    return array(
      '#type' => 'textfield',
      '#title' => t('Choose a subdomain'),
      '#description' => t('Letters and underscores only. Choose carefully, once set, this cannot be changed.'),
      '#required' => !user_access('administer site configuration'),
      '#weight' => -5,
      '#default_value' => $default,
    );
  }

  // If user can't create subdomains, don't show this...
  elseif (user_access('create subdomains')) {
    return array(
      '#type' => 'item',
      '#title' => subdomain()->static_form_text(),
      '#weight' => -5,
      '#value' => 'http://'. $default .'.'. subdomain_get_domain(),
    );
  }
}

function _subdomain_add_js_validation($sid = NULL) {
  drupal_add_js(array('subdomain' => array('selector' => "edit-". subdomain()->form_field, 'sid' => $sid)), 'setting');
}

/**
 * Stores and retrieves subdomain form values
 * Currently used for contenttype form, b/c additional form values aren't passed through
 * to hook_node_type().
 */
function _subdomain_cached_form_values($form_values = NULL) {
  static $cached_form_values;
  if (!empty($form_values)) {
    $cached_form_values = $form_values;
  }
  return $cached_form_values;
}

function _subdomain_filtered_content_types_sql() {
  static $filtered;
  if (!isset($filtered)) {
    // Filter "0" values (i.e. unchecked content types) from array
    $filtered = implode("','", array_filter(variable_get('subdomain_filter_contenttypes', array())));
  }
  return $filtered;
}

function _subdomain_validate_subdomain($form, &$form_state) {
  if ($subdomain = subdomain()->clean($form_state['values'][subdomain()->form_field])) {
    if (in_array($subdomain, subdomain_get_reserved_subdomains())) {
      form_set_error(subdomain()->form_field, t('The '. subdomain()->form_field .' you entered is reserved and cannot be used.'));
    }
  }
}
