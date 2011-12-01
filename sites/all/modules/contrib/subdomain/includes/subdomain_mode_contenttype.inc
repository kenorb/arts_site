<?php

/**
 * @file
 * Subdomain engine content type mode subclass
 */

/**
 * Description of subdomain_term
 *
 * @author setvik
 */
class subdomain_mode_contenttype extends subdomain_engine {

  function type() {
    return 'contenttype';
  }

  function base_path($sid) {
    return 'node';
  }

  function static_form_text() {
    return t('Content type homepage');
  }

  function default_form_field() {
    return 'type';
  }

  function is_entry_form($form_id) {
    return $form_id == 'node_type_form';
  }

  function get_homepage_path($sid) {
    if ($this->home == 'default') {
      // This should not happen, but let's fail gracefully anyway
      return $this->base_path($sid);
    }
    else {
      $types = variable_get('subdomain_contenttypes', array());
      
      return "subdomain/homepage/". array_search($sid, $types);
    }
  }

  function get_content_subdomain($nid) {
    static $subdomains;
    if (!isset($subdomains[$nid])) {
      $type = db_result(db_query("SELECT type FROM {node} WHERE nid = %d AND type NOT IN ('%s')", $nid, _subdomain_filtered_content_types_sql()));
      if ($type) {
        $sid = $this->_get_contenttype_sid($type);
        $subdomains[$nid] = subdomain_get_subdomain($sid);
      }
      else {
        $subdomains[$nid] = '';
      }
    }
    return $subdomains[$nid];
  }

  function _get_contenttype_sid($type) {
    $types = variable_get('subdomain_contenttypes', array());
    return isset($types[$type]) ? $types[$type] : NULL;
  }

  function entry_form_alter(&$form, $form_id) {
    $default = subdomain_get_subdomain($this->_get_contenttype_sid($form['orig_type']['#value']));
    if (!(empty($default)) && !user_access('create subdomains')) {
      $form['subdomain_exists'] = array(
        '#type' => 'value',
        '#value' => !empty($default),
      );

      $form['#validate'][] = '_subdomain_validate_subdomain';

      if ($this->source == 'custom') {
        $form['identity']['name']['#weight'] = -5.1;
        $form['identity']['type']['#weight'] = -5.0;

        $editable = user_access('edit any subdomains') || user_access('edit own subdomains');
        $form['identity']['subdomain'] = _subdomain_get_custom_form_field($default, $editable);
      }
      _subdomain_add_js_validation($types[$form['orig_type']['#value']]);
      array_unshift($form['#validate'], '_subdomain_mode_contenttype_form_validate');
    }
  }

  function save($type) {
    $types = variable_get('subdomain_contenttypes', array());
    $form_values = _subdomain_cached_form_values();
    // Make sure we're saving the right thing
    // Ubercart is hooking in here in a weird way on unrelated node-type saves
    // This check prevents ubercart from saving
    // TODO: investigate ubercart behavior and file patch
    if ($form_values['orig_type'] == $type->orig_type) {
      if ($form_values['subdomain_exists']) {
        $sid = $types[$type->orig_type];
        unset($types[$type->orig_type]);
      }
      elseif (count($types)) {
        $sid = max($types) + 1;
      }
      else {
        $sid = 1;
      }
      $types[$type->type] = $sid;
      $this->save_record($sid, $form_values[$this->form_field], !$form_values['subdomain_exists']);
      variable_set('subdomain_contenttypes', $types);
    }
  }

  function delete($type) {
    $this->delete_record($this->_get_contenttype_sid($type->type));
  }

  function url_outbound_helper(&$subdomain, &$path, $original_path, &$is_system_path) {
    if ($nid = _subdomain_id_from_path('nid', $original_path)) {
      $subdomain = subdomain()->get_content_subdomain($nid);
    }
    else {
      $is_system_path = TRUE;
    }
  }

  /**
   * Bulk generate subdomains from content type name
   */
  function bulk_generate() {
    $types = array_keys(node_get_types('names'));
    $subdomains = variable_get('subdomain_contenttypes', array());
    $count = 0;
    foreach($types as $type) {
      if (!isset($subdomains[$type])) {
        if (!in_array($type, variable_get('subdomain_filter_contenttypes', array()))) {
          $sid = count($subdomains) ? max($subdomains) + 1 : 1;
          $this->save_record($sid, $type, TRUE);
          $subdomains[$type] = $sid;
          $count += 1;
        }
      }
    }
    drupal_set_message(format_plural($count, '1 new subdomain created.', '@count new subdomains created.'));
    variable_set('subdomain_contenttypes', $subdomains);
  }
}

function _subdomain_mode_contenttype_form_validate($form, &$form_state) {
  // store form values
  _subdomain_cached_form_values($form_state['values']);
}


