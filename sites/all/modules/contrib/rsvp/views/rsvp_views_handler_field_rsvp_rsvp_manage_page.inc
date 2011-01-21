<?php

/**
 * Field handler to provide a link to the RSVP send/manage page for a certain RSVP id
 *
 * @ingroup views_field_handlers
 */
class rsvp_views_handler_field_rsvp_rsvp_manage_page extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();

    $options['link_text'] = array('default' => '');

    return $options;
  }

  /**
   * Provide link text.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_text'] = array(
      '#title' => t('Link Text'),
      '#type' => 'textfield',
      '#default_value' => $this->options['link_text'],
    );
  }

  function render($values) {
    $value = 'rsvp/'. $values->{$this->field_alias} .'/attendees';
    if (!empty($values->{$this->field_alias})) {
      return l($this->options['link_text'], $value, array('html' => TRUE));
      
    }
  }
}