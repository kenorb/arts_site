<?php

/**
 * @file
 * Subdomain engine OG mode subclass
 */

/**
 * Description of subdomain_group
 *
 * @author setvik
 */
class subdomain_mode_group extends subdomain_engine {

  function type() {
    return 'node';
  }

  function base_path($sid) {
    return 'node/'. $sid;
  }

  function static_form_text() {
    return t('Group homepage');
  }

  function default_form_field() {
    return 'title';
  }

  function get_content_subdomain($nid) {
    static $subdomains;
    if (!isset($subdomains[$nid])) {
      $sid = db_result(db_query("SELECT group_nid FROM {og_ancestry} og INNER JOIN {node} n WHERE n.nid = %d AND n.type NOT IN ('%s')", $nid, _subdomain_filtered_content_types_sql()));
      $subdomains[$nid] = subdomain_get_subdomain($sid);
    }
    return $subdomains[$nid];
  }

  function is_entry_form($form_id) {
    // TODO update to select correct og group node type if multiple
    if (substr($form_id, -10) == '_node_form') {
      return og_is_group_type(substr($form_id, 0, -10));
    }
    return FALSE;
  }

  function entry_form_alter(&$form, $form_id) {
    $default = subdomain_get_subdomain($form['#node']->nid);
    $form['subdomain_exists'] = array(
      '#type' => 'value',
      '#value' => !empty($default),
    );

    $form['#validate'][] = '_subdomain_validate_subdomain';

    if ($this->source == 'custom') {
      $editable = user_access('edit subdomains');
      $form['subdomain'] = _subdomain_get_custom_form_field($default, $editable);
    }

    _subdomain_add_js_validation($form['#nid']);
  }

  function save($node) {
    if (og_is_group_type($node->type)) {
      $this->save_record($node->nid, $node->{$this->form_field}, !$node->subdomain_exists);

      // URL cache clear needed b/c url is cached before subdomain is saved resulting in skewed redirect: http://subdomain.example.com/node/xxxx instead of http://subdomain.example.com/
      subdomain_url_outbound_cache_clear();
    }
  }

  function delete($node) {
    if (og_is_group_type($node->type)) {
      $this->delete_record($node->nid);
    }
  }

  function url_outbound_helper(&$subdomain, &$path, $original_path, &$is_system_path) {
    if ($nid = _subdomain_id_from_path('nid', $original_path)) {
      $subdomain = subdomain_get_subdomain($nid);
      if (empty($subdomain)) {
        $subdomain = subdomain()->get_content_subdomain($nid);
      }
      elseif ($path == $this->base_path($nid)) {
        $path = '';
      }
    }
    else {
      $is_system_path = TRUE;
    }
  }

  /**
   * Bulk generate subdomains from group name
   */
  function bulk_generate() {
    $result = db_query("SELECT n.nid, n.uid, title FROM {node} n INNER JOIN {og} g ON n.nid = g.nid LEFT JOIN {subdomain} s on n.nid = s.sid WHERE s.sid IS NULL");
    $count = 0;
    while ($row = db_fetch_object($result)) {
      $account = user_load($row->uid);
      if (user_access('create subdomains', $account)) {
        $this->save_record($row->nid, $row->title, TRUE);
        $count += 1;
      }
    }
    drupal_set_message(format_plural($count, '1 new subdomain created.', '@count new subdomains created.'));
  }
}