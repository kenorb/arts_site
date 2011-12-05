<?php


/**
 * Filter invitations based on if the user is organizer of an invitation.
 */

class rsvp_views_handler_filter_user_is_organizer extends views_handler_filter_boolean_operator {

  function construct() {
    parent::construct();
    $this->value_value = t('Is the organizer');
  }
  
  function query() {
    $condition = (empty($this->value) ? '!=' : '=') . " ***CURRENT_USER***";
    
    $this->ensure_my_table();
    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field " . $condition . " OR " .  "$this->table_alias.uid_moderator " . $condition);
  }
  
}

