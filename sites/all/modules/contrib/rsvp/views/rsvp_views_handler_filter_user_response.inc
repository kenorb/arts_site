<?php


/**
 * Filter invitations based on the users response.
 */

class rsvp_views_handler_filter_user_response extends views_handler_filter_in_operator {
  function get_value_options() {
    $this->value_options = array( RSVP_ATT_YES => t('Yes'), 
                                  RSVP_ATT_NO => t('No'),
                                  RSVP_ATT_MAYBE => t('Maybe'),
                                  RSVP_ATT_NONE => t('None') );
    
  }

  //function query() {
  //  $this->ensure_my_table();
  //  $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field ". '= ' . $this->value);
  //}
}

