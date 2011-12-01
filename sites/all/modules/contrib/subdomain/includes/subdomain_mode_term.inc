<?php

/**
 * @file
 * Subdomain engine term mode subclass
 */


/**
 * Description of subdomain_term
 *
 * @author setvik
 */
class subdomain_mode_term extends subdomain_engine {

  function type() {
    return 'term';
  }

  function base_path($sid) {
    return 'taxonomy/term/'. $sid;
  }

  function static_form_text() {
    return t('Term homepage');
  }

  function is_entry_form($form_id) {
    return $form_id == 'taxonomy_form_term';
  }

  function get_content_subdomain($nid) {
    static $subdomains;
    
    if (!isset($subdomains[$nid])) {
      // Get first group_nid
      $vid = variable_get('subdomain_vocab', '');
      $sid = db_result(db_query("SELECT tn.tid
        FROM {term_node} tn
        INNER JOIN {node} n on tn.vid = n.vid
        INNER JOIN {term_data} td on tn.tid = td.tid
        WHERE td.vid = %d AND n.nid = %d AND n.type NOT IN ('%s')", $vid, $nid, _subdomain_filtered_content_types_sql()));
      $subdomains[$nid] = subdomain_get_subdomain($sid);
    }
    return $subdomains[$nid];
  }

  function entry_form_alter(&$form, $form_id) {
    global $user;
    if ($form['#vocabulary']['vid'] == variable_get('subdomain_vocab', 0)
    && !($form['delete']['#type'] == 'value' && $form['delete']['#value'] == TRUE)) {
      $default = subdomain_get_subdomain($form['tid']['#value']);
      if (empty($default) && user_access('create subdomains') || !empty($default) && user_access('edit subdomains')) {
        $form['subdomain_exists'] = array(
          '#type' => 'value',
          '#value' => !empty($default),
        );

        $form['#validate'][] = '_subdomain_validate_subdomain';

        if ($this->source == 'custom') {
          $form['identification']['name']['#weight'] = -5.1;

          $editable = user_access('edit subdomains');
          $form['identification']['subdomain'] = _subdomain_get_custom_form_field($default, $editable, $user->uid == 1);
        }
        _subdomain_add_js_validation($form['tid']['#value']);
      }
    }
  }

  function save($term) {
    if ($term['vid'] == variable_get('subdomain_vocab', 0)) {
      $this->save_record($term['tid'], $term[$this->form_field], !$term['subdomain_exists']);
    }
  }

  function delete($term) {
    if ($term['vid'] == variable_get('subdomain_vocab', 0)) {
      $this->delete_record($term['tid']);
    }
  }

  function url_outbound_helper(&$subdomain, &$path, $original_path, &$is_system_path) {
    if ($tid = _subdomain_id_from_path('tid', $original_path)) {
      $subdomain = subdomain_get_subdomain($tid);
      if (!empty($subdomain) && $path == $this->base_path($tid)) {
        $path = '';
      }
    }
    elseif ($nid = _subdomain_id_from_path('nid', $original_path)) {
      $subdomain = subdomain()->get_content_subdomain($nid);
    }
    else {
      $is_system_path = TRUE;
    }
  }

  /**
   * Bulk generate subdomains from term name
   */
  function bulk_generate() {
    $vid = variable_get('subdomain_vocab', 0);
    $result = db_query("SELECT tid, name FROM {term_data} t LEFT JOIN {subdomain} s on t.tid = s.sid WHERE t.vid = %d AND s.sid IS NULL", $vid);
    $count = 0;
    while ($row = db_fetch_object($result)) {
      $this->save_record($row->tid, $row->name, TRUE);
      $count += 1;
    }
    drupal_set_message(format_plural($count, '1 new subdomain created.', '@count new subdomains created.'));
  }
}