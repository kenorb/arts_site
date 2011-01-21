<?php

class rsvp_views_handler_field_rsvp_invite_remove_link extends views_handler_field {

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_text'] = array(
      '#title' => t('Text for link'),
      '#type' => 'textfield',
      '#default_value' => isset($this->options['link_text']) ? $this->options['link_text'] : 'Remove',
    );
  }

  function render($values) {
    $value = $values->{$this->field_alias};
    $rid = $values->rid;
    return l($this->options['link_text'], 'rsvp/'. $rid .'/attendees/remove/'. $value);
  }

}