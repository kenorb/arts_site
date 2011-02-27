<?php
// $Id: mp_orders.ca.inc,v 1.1.2.2 2009/05/09 19:42:24 turgrid Exp $

/**
 * @file
 * This file contains the Conditional Actions hooks and functions necessary to make the
 * order related entity, conditions, events, and actions work.
 */

 /**
 * Implementation of hook_ca_predicate().
 */
function mp_orders_ca_predicate() {
  $predicates = array();

  $predicates['mp_orders_email_seller'] = array(
    '#title' => t('E-mail an order notification to seller'),
    '#description' => t('Notify the seller when an order is placed on his/her product(s).'),
    '#class' => 'order',
    '#status' => 1,
    '#trigger' => 'uc_order_status_update',
    '#conditions' => array(
      '#operator' => 'AND',
      '#conditions' => array(
        array(
          '#name' => 'uc_order_status_condition',
          '#title' => t('If the order status is not still In Checkout.'),
          '#argument_map' => array(
            'order' => 'updated_order',
          ),
          '#settings' => array(
            'negate' => FALSE,
            'order_status' => 'payment_received',
          ),
        ),
      ),
    ),
    '#actions' => array(
      array(
        '#name' => 'mp_orders_seller_email',
        '#title' => t('Send an e-mail to the seller'),
        '#argument_map' => array(
          'order' => 'order',
        ),
        '#settings' => array(
          'subject' => t('You have an order at [store-name]'),
          'message' => t('<a href="[store-url]/user/*uid*/selling/fulfill/[order-id]">Click here to view order #[order-id].</a>'),
          'format' => 1,
        ),
      ),
    ),
  );

  return $predicates;
}

function mp_orders_ca_action() {
  $order_arg = array(
    '#entity' => 'uc_order',
    '#title' => t('Order'),
  );

  $actions['mp_orders_seller_email'] = array(
    '#title' => t('Send seller order notification'),
    '#category' => t('Order'),
    '#callback' => 'mp_orders_action_seller_email',
    '#arguments' => array(
      'order' => $order_arg,
    ),
  );

  return $actions;
}

function mp_orders_action_seller_email($order, $settings) {
  $result = false;
  $result = db_query("SELECT uid FROM {mp_seller_order_statuses} WHERE order_id = %d", $order->order_id);
  while ($seller = db_fetch_object($result)) {
    mp_orders_send_seller_email($seller->uid, $order, $settings);
  }
}

function mp_orders_action_seller_email_form($form_state, $settings = array()) {
  $form['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#default_value' => isset($settings['subject']) ? $settings['subject'] : t('You have an order at [store-name]'),
  );
  $form['message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message Text'),
    '#description' => l(t('The message sellers receive when an order is placed on their products. Uses order and global tokens. *uid* token inserts seller\'s id.'), 'admin/store/help/tokens'),
    '#default_value' => isset($settings['message']) ? $settings['message'] : t('<a href="[store-url]/user/*uid*/selling/fulfill/[order-id]">Click here to view order #[order-id].</a>'),
    '#rows' => 5,
  );
  $form['format'] = filter_form(FILTER_FORMAT_DEFAULT);

  return $form;
}

/**
 * Email helper function.
 */
function mp_orders_send_seller_email($uid, $order, $settings) {
  mp_orders_order('load', $order, $uid);
  $settings['uid'] = $uid;
  $settings['token_filters'] = array('global' => NULL, 'order' => $order);
  $email_to = db_result(db_query("SELECT mail FROM {users} WHERE uid = %d", $uid));
  $language = language_default();
  $sent = drupal_mail('mp_orders', 'sellercheckout', $email_to, $language, $settings, uc_store_email_from());
  if ($sent) {
    $changes[] = t('Seller checkout message sent to @email.', array('@email' => $order->primary_email));
  }
  else {
    $changes[] = t('Seller checkout e-mail notification to @email failed.', array('@email' => $order->primary_email));
  }
  uc_order_log_changes($order->order_id, $changes);
}