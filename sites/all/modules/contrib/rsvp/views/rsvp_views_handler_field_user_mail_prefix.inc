<?php
// $Id: rsvp_views_handler_field_user_mail_prefix.inc,v 1.1.2.1 2009/12/31 17:38:39 ulf1 Exp $
/**
 * Field handler to provide acess control for the email field
 */
class rsvp_views_handler_field_user_mail_prefix extends views_handler_field {

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['remove_punctuation'] = array(
      '#title' => t('Replace punctuation with spaces'),
      '#type' => 'checkbox',
      '#default_value' => $this->options['remove_punctuation'],
    );
  }

  function render($values) {
    $punct_chars = array('.', '-', '_');
    $email = $values->{$this->field_alias};
    $pos = strpos($email, '@');
    $prefix = substr($email, 0, $pos);
    $prefix_nopunc = str_replace($punct_chars, ' ', $prefix);
    if ($this->options['remove_punctuation']) {
      return $prefix_nopunc;
    }
    return $prefix;
  }
}