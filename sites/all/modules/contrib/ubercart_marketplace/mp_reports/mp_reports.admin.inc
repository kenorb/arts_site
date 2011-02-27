<?php
// $Id: mp_reports.admin.inc,v 1.1.2.8 2010/01/29 04:35:08 syndicatestorm Exp $

/**
 * @file
 * Marketplace report administration menu items.
 */

 /**
 * Display the reports overview
 */
function mp_reports_overview($uid) {
  drupal_set_title(t('Sales Reports'));
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = l(t('Selling'), 'user/'. arg(1) .'/selling');
  drupal_set_breadcrumb($breadcrumb);
  
  return '<dl><dt>'. l(t("Product Reports"), 'user/'. arg(1) .'/selling/reports/product') .'</dt><dd>'. t("View reports for your products.") .'</dd><dt>'. l(t("Sales Per Year"), 'user/'. arg(1) .'/selling/reports/sales') .'</dt><dd>'. t("View reports of your sales per year and month.") .'</dd><dt>'. l(t("Sales Summary"), 'user/'. arg(1) .'/selling/reports/summary') .'</dt><dd>'. t("View reports of your overall and projected sales.") .'</dd></dl>';
}

/**
 * Display the seller reports in Ubercart admin interface
 */
function mp_reports_seller_form() {
  $timezone_offset = variable_get('date_default_timezone', 0);
  $format = variable_get('uc_date_format_default', 'm/d/Y');

  $args = mp_reports_get_args();

  // Put the order statuses into a SQL friendly array.
  $order_statuses = "('complete')";

  // Get array of all sellers.
  $sellers = array();
  if ($args['rid'] == 2) {
    $result = db_query('SELECT uid FROM {users} WHERE uid <> 0');
    while ($seller = db_fetch_array($result)) {
      $sellers[] = $seller['uid'];
    }
  }
  else {
    $result = db_query("SELECT u.uid FROM {users_roles} AS u WHERE u.rid = %d", $args['rid']);
    while ($seller = db_fetch_array($result)) {
      $sellers[] = $seller['uid'];
    }
    $sellers[] = 1;
  }

  $methods = array();
  if (variable_get('mp_reports_display_email', TRUE)) {
    $methods[] = t('Paypal');
  }
  if (variable_get('mp_reports_enable_check', FALSE)) {
    $methods[] = t('Manual');
  }
  $methods[99] = t('not filled');
  if ($args['paid'] == 1) {
    $paid_statuses = "('0', '1', '2', '3', '4', '5')";
  }
  else {
    $paid_statuses = "('0', '3', '4')";
  }
    
  $commission_total = 0;
  $revenue_total = 0;
  $product_total = 0;
  $order_total = 0;

  // create form
  $form = array();
  $form['#tree'] = TRUE;
  $form['sellers'] = array();

  // Loop through the sellers and build the report table/form.
  foreach ($sellers as $seller) {
    $product_data = '';
    $order_data = '';
    $order_list = '';

    // Create the seller title and link for each seller.
    $user = user_load(array('uid' => $seller));
    $name = $user->name;
    $link = l($name, 'user/'. $seller);
    if ($user->payment_method == NULL) {
      $user->payment_method = 99;
    }

    // Build the order data for the seller.
    $result = db_query("SELECT sos.order_id FROM {uc_orders} AS o LEFT JOIN {mp_seller_order_statuses} AS sos ON o.order_id = sos.order_id WHERE sos.uid = %d AND %d <= o.created AND o.created <= %d AND sos.order_status IN $order_statuses AND sos.seller_paid_status IN $paid_statuses", $seller, $args['start_date'], $args['end_date']);
    while ($order = db_fetch_object($result)) {
      $order_data++;
      $order_list .= $order->order_id .',';
    }
    $order_list = substr($order_list, 0, strlen($order_list) - 1);
    $order_total += $order_data;

    // Build the product data for the seller.
    if ($args['detail']) {
      // Grab the detailed product breakdown if selected.
      $result = db_query("SELECT SUM(op.qty) as count, n.title, n.nid FROM {uc_order_products} as op LEFT JOIN {uc_orders} as o ON o.order_id = op.order_id LEFT JOIN {mp_seller_order_statuses} AS sos ON o.order_id = sos.order_id LEFT JOIN {node} as n ON n.nid = op.nid WHERE sos.uid = %d AND n.uid = %d AND sos.order_status IN $order_statuses AND sos.seller_paid_status IN $paid_statuses AND %d <= o.created AND o.created <= %d GROUP BY n.nid ORDER BY count DESC, n.title ASC", $seller, $seller, $args['start_date'], $args['end_date']);
      while ($product_breakdown = db_fetch_object($result)) {
        $product_data .= $product_breakdown->count .' x '. l($product_breakdown->title, 'node/'. $product_breakdown->nid) ."<br/>\n";
        $product_total += $product_breakdown->count;
      }
    }
    else {
      // Otherwise just display the total number of products sold.
      $product_data = db_result(db_query("SELECT SUM(op.qty) FROM {uc_orders} as o LEFT JOIN {uc_order_products} as op ON o.order_id = op.order_id LEFT JOIN {mp_seller_order_statuses} AS sos ON sos.order_id = o.order_id LEFT JOIN {node} as n ON n.nid = op.nid WHERE sos.uid = %d AND n.uid = %d AND sos.order_status IN $order_statuses AND sos.seller_paid_status IN $paid_statuses AND %d <= o.created AND o.created <= %d", $seller, $seller, $args['start_date'], $args['end_date']));
      $product_total += $product_data;
    }

    $counts = db_fetch_array(db_query("SELECT SUM(p.cost * p.qty) AS cost, SUM(p.price * p.qty) AS price FROM {uc_orders} AS o LEFT JOIN {mp_seller_order_statuses} AS sos ON sos.order_id = o.order_id LEFT JOIN {uc_order_products} AS p ON p.order_id = sos.order_id LEFT JOIN {node} as n ON n.nid = p.nid WHERE sos.uid = %d AND n.uid = %d AND sos.order_status IN $order_statuses AND sos.seller_paid_status IN $paid_statuses AND %d <= o.created AND o.created <= %d", $seller, $seller, $args['start_date'], $args['end_date']));
    
    
    // add seller shipping
    if (module_exists('mp_quote') && $order_list != '') {
      $shipping = db_result(db_query("SELECT SUM(rate) FROM {mp_quote_shipping_rates} WHERE uid = %d AND order_id IN (". $order_list .")", $seller));
      $counts['price'] += $shipping;
      $counts['cost'] += $shipping;
    }
    
    // Tally up the revenue from the orders.
    $revenue_count = $counts['price'];
    
    // Tally up the commission from the orders.
    $commission_count = $counts['cost'];

    // Add the seller's row to the report table.
    $seller_row = array();
    $seller_row['link'] = array('#value' => $link);
    $seller_row['order_data'] = array('#value' => empty($order_data) ? '0' : $order_data);
    $seller_row['product_data'] = array('#value' => empty($product_data) ? '0' : $product_data);
    $seller_row['revenue_count'] = array('#value' => uc_currency_format($revenue_count));
    $seller_row['commission_count'] = array('#value' => uc_currency_format($commission_count));
    $seller_row['payment_method'] = array('#value' => $methods[$user->payment_method]);
    $seller_row['checked'] = array('#type' => 'checkbox');
    $seller_row['email'] = array('#type' => 'value', '#value' => $user->paypal_email);
    $seller_row['manual_details'] = array('#type' => 'value', '#value' => $user->manual_pay_details);
    $seller_row['commission'] = array('#type' => 'value', '#value' => $commission_count);
    $seller_row['order_list'] = array('#type' => 'value', '#value' => $order_list);
    $seller_row['method'] = array('#type' => 'value', '#value' => $methods[$user->payment_method]);
    if ($seller == 1 || $commission_count == NULL) {
      $seller_row['checked']['#attributes'] = array('disabled' => 'disabled');
    }

    $form['sellers'][$seller] = $seller_row;

    $commission_total += $commission_count;
    $revenue_total += $revenue_count;
  }

  $form['sellers']['#theme'] = 'mp_reports_seller_fieldset';
  $form['submit'] = array('#type' => 'submit', '#value' => t('Make Payment'));

  return $form;
}

/**
 * Submit handler for mp_reports_seller_form().
 */
function mp_reports_seller_form_submit($form, &$form_state) {
  $sellers = array();
  if (arg(9) == 1) {
    drupal_set_message(t('Please uncheck "include sales that sellers have already received payment for" before making a payment.'), 'error');
    return;
  }
  $payment_id = db_result(db_query("SELECT MAX(payment_id) FROM {mp_seller_payments}"));
  foreach ($form_state['values']['sellers'] as $sid => $seller) {
    if ($seller['checked']) {
      $payment_id++;
      if ($seller['method'] == t('Paypal')) {
        if (strlen($seller['email']) > 4) {
          $sellers[$sid] = array('email' => $seller['email'], 'commission' => $seller['commission'], 'uid' => $sid, 'order_list' => $seller['order_list'], 'payment_id' => $payment_id);
        }
      }
      else {
        $manuals[$sid] = array('manual_details' => $seller['manual_details'], 'uid' => $sid, 'commission' => $seller['commission'], 'order_list' => $seller['order_list'], 'payment_id' => $payment_id);
      }
    }
  }
  if (sizeof($sellers) != 0) {
    if (module_exists('uc_paypal')) {
      mp_reports_make_masspay($sellers);
    }
    else {
      drupal_set_message(t('Please enable uc_paypal module and configure API credentials.'), 'error');
    }
  }
  // carry over variables to overview page
  $_SESSION['payment_manuals'] = $manuals;
  $_SESSION['payment_sellers'] = $sellers;
  $form_state['redirect'] = 'admin/store/reports/seller/payments';
}

function mp_reports_seller_payments() {
  $sellers = $_SESSION['payment_sellers'];
  $manuals = $_SESSION['payment_manuals'];
  
  $output = '<h2>'. t('Paypal Masspay Response') .'</h2>';
  if ($sellers != NULL && variable_get('mp_reports_display_email', TRUE)) {
    
    $output .= '<p>'. t('You may need to refresh this page so that it reflects Paypal\'s most recent response.') . '</p>' . 
      '<h3>' . t('Payment Status Key (for table below):') . '</h3>' .
      '<ul>' .
        '<li>' . t('Completed: The payment has been processed.') . '</li>' .
        '<li>' . t('Failed: Insufficient Paypal balance.') . '</li>' .
        '<li>' . t('Returned: Funds have been returned to you') . '</li>' .
        '<li>' . t('Unclaimed: Receiver\'s email address is either not a Paypal account or receiver\'s Paypal account is blocked.') .'</li>' . 
        '<li>' . t('Pending: Waiting for feedback from Paypal\'s Instant Payment Notification (IPN) system.') .'</li>' .
      '</ul><br />';
      
    // Masspay payment table
    $header = array(t('uid'), t('email'), t('amount'), t('payment status'));
    $rows = array();
    foreach ($sellers as $seller) {
      $status = db_result(db_query("SELECT status FROM {mp_seller_payments} WHERE payment_id = %d", $seller['payment_id']));
      $status = $status ? $status : 'Pending';
      $rows[] = array(l($seller['uid'], 'user/'. $seller['uid']), $seller['email'], $seller['commission'], $status);
    }
    $output .= theme('table', $header, $rows, array('width' => '100%', 'class' => 'mp-reports-payments-table'));
    $output .= '<br />';
  }
  else {
    $output .= 'Not applicable';
  }
  
  $output .= '<h2>'. t('Manual Payment Summary') .'</h2>';
  if ($manuals != NULL && variable_get('mp_reports_enable_check', FALSE)) {
    $output .= '<p>'. t('Here are the supplied details from the selected sellers for manual payment.') .'</p>';
    $output .= drupal_get_form('mp_reports_manuals_form', $manuals);
  }
  else {
    $output .= 'Not applicable';
  }
  
  return $output;
}

function mp_reports_manuals_form($manuals) {
  // create form
  $form = array();
  $form['#tree'] = TRUE;
  $form['manuals'] = array();

  foreach ($manuals as $manual) {
    // Add the manual's row to the report table.
    $manual_row = array();
    $manual_row['uid_print'] = array('#value' => l($manual['uid'], 'user/'. $manual['uid']));
    $manual_row['order_ids_print'] = array('#value' => $manual['order_list']);
    $manual_row['manual_details'] = array('#value' => $manual['manual_details']);
    $manual_row['commission_print'] = array('#value' => $manual['commission']);
    $manual_row['checked'] = array('#type' => 'checkbox');
    $manual_row['uid'] = array('#type' => 'value', '#value' => $manual['uid']);
    $manual_row['order_ids'] = array('#type' => 'value', '#value' => $manual['order_list']);
    $manual_row['commission'] = array('#type' => 'value', '#value' => $manual['commission']);
    $manual_row['payment_id'] = array('#type' => 'value', '#value' => $manual['payment_id']);

    $form['manuals'][$manual['uid']] = $manual_row;
  }

  $form['manuals']['#theme'] = 'mp_reports_manuals_fieldset';
  $form['submit'] = array('#type' => 'submit', '#value' => t('Complete Manual Payments'));

  return $form;
}

/**
 * Submit handler for mp_reports_manuals_form().
 */
function mp_reports_manuals_form_submit($form, &$form_state) {
  foreach ($form_state['values']['manuals'] as $sid => $manual) {
    if ($manual['checked']) {
      db_query("INSERT INTO {mp_seller_payments} (uid, method, status, gross) VALUES (%d, '%s', 'Completed', %f)", $sid, t('Manual'), $manual['commission']);
      foreach (explode(',', $manual['order_ids']) as $order_id) {
        db_query("UPDATE {mp_seller_order_statuses} SET seller_paid_status = 5, payment_id = %d WHERE uid = %d AND order_id = %d", $manual['payment_id'], $sid, $order_id);
      }
    }
  }
  drupal_set_message('Seller order statuses have been changed to reflect manual payment(s). Please do not resubmit.');
}

function mp_reports_get_args() {
  // Use default report parameters if we don't detect values in the URL.
  if (arg(5) == '') {
    $roles_array = array_keys(user_roles(true, 'act as seller'));
    $args = array(
      'start_date' => gmmktime(0, 0, 0, format_date(time(), 'custom', 'n'), 1, format_date(time(), 'custom', 'Y')) - $timezone_offset,
      'end_date' => time() - $timezone_offset,
      'rid' => $roles_array[0],
      'detail' => FALSE,
      'paid' => FALSE,
    );
  }
  else {
    $args = array(
      'start_date' => arg(5),
      'end_date' => arg(6),
    'rid' => arg(7),
      'detail' => arg(8),
      'paid' => arg(9),
    );
  }
  return $args;
}

/**
 * Display the seller reports in Ubercart admin interface
 */
function mp_reports_seller() {
  drupal_set_title(t('Seller Reports'));

  $args = mp_reports_get_args();

  // Build the page output holding the form, table, and txt export link.
  $output = drupal_get_form('mp_reports_seller_custom_form', $args);
  $output .= drupal_get_form('mp_reports_seller_form');

  return $output;
}

/**
 * Returns a table of seller order statuses.
 */
function mp_reports_statuses() {
  drupal_set_title(t('Seller Order Status Reports'));

  $header = array(
    array('data' => t('Order ID'), 'field' => 'sos.order_id'),
    array('data' => t('Seller ID'), 'field' => 'sos.uid'),
    array('data' => t('Order Created'), 'field' => 'o.created', 'sort' => 'desc'),
  );
  $result = pager_query("SELECT sos.uid,sos.order_id,o.created FROM {mp_seller_order_statuses} AS sos LEFT JOIN {uc_orders} AS o ON o.order_id = sos.order_id WHERE sos.order_status = 'not complete'" . tablesort_sql($header), 20, 0, "SELECT COUNT(*) FROM {mp_seller_order_statuses} WHERE order_status = 'not complete'");

  // Build a table based on the sellers' order statuses.
  while ($sellerorder = db_fetch_object($result)) {
    $link2 = l($sellerorder->uid, 'user/'. $sellerorder->uid);
    $link = l($sellerorder->order_id, 'admin/store/orders/'. $sellerorder->order_id);

    $rows[] = array(
      array('data' => $link),
      array('data' => $link2),
      array('data' => format_date($sellerorder->created, 'custom', variable_get('uc_date_format_default', 'm/d/Y'))),
    );
  }

  return theme('table', $header, $rows) . theme('pager', NULL, 20, 0);
}

/**
 * Returns a form for custom seller sales viewing
 */
function mp_reports_seller_custom_form($form_state, $values) {
  $form['search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Customize seller report parameters'),
    '#description' => t('Adjust these values and update the report to build your custom seller summary. Once submitted, the report may be bookmarked for easy reference in the future.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['search']['start_date'] = array(
    '#type' => 'date',
    '#title' => t('Start date'),
    '#default_value' => array(
      'month' => format_date($values['start_date'], 'custom', 'n'),
      'day' => format_date($values['start_date'], 'custom', 'j'),
      'year' => format_date($values['start_date'], 'custom', 'Y'),
    ),
  );
  $form['search']['end_date'] = array(
    '#type' => 'date',
    '#title' => t('End date'),
    '#default_value' => array(
      'month' => format_date($values['end_date'], 'custom', 'n'),
      'day' => format_date($values['end_date'], 'custom', 'j'),
      'year' => format_date($values['end_date'], 'custom', 'Y'),
    ),
  );
 $form['search']['rid'] = array(
   '#type' => 'select',
   '#title' => t('Sellers to show'),
   '#description' => t('Only sellers with selected role will be shown in report.'),
   '#options' => user_roles(true, 'act as seller'),
   '#default_value' => $values['rid'],
  );
  $form['search']['detail'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show a detailed list of products sold by seller.'),
    '#default_value' => $values['detail'],
  );
  $form['search']['paid'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include sales that sellers have already received payment for.'),
    '#default_value' => $values['paid'],
  );
  $form['search']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Update report'),
  );
  return $form;
}

/**
 * Submit handler for custom seller report.
 */
function mp_reports_seller_custom_form_submit($form, &$form_state) {
  $timezone_offset = variable_get('date_default_timezone', 0);

  // Build the start and end dates from the form.
  $start_date = gmmktime(0, 0, 0, $form_state['values']['start_date']['month'], $form_state['values']['start_date']['day'], $form_state['values']['start_date']['year']) - $timezone_offset;
  $end_date = gmmktime(23, 59, 59, $form_state['values']['end_date']['month'], $form_state['values']['end_date']['day'], $form_state['values']['end_date']['year']) - $timezone_offset;

  $args = array(
    $start_date,
    $end_date,
    $form_state['values']['rid'],
    $form_state['values']['detail'],
    $form_state['values']['paid'],
  );

  drupal_goto('admin/store/reports/seller/custom/'. implode('/', $args));
}

/**
 * Displays the product reports
 */
function mp_reports_products($user) {
  $uid = $user->uid;
  drupal_set_title(t('Sales Reports'));
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = l(t('Selling'), 'user/'. arg(1) .'/selling');
  $breadcrumb[] = l(t('Reports'), 'user/'. arg(1) .'/selling/reports');
  drupal_set_breadcrumb($breadcrumb);
  
  $statistics = db_result(db_query("SELECT status FROM {system} WHERE name = 'statistics'"));
  $count_views = variable_get('statistics_count_content_views', FALSE);
  $page = (!is_null($_GET['page'])) ? intval($_GET['page']) : 0;
  $page_size = (!is_null($_GET['nopage'])) ? UC_REPORTS_MAX_RECORDS : variable_get('uc_reports_table_size', 30);
  $order_statuses = "('complete')";
  $product_types = array("'product'");
  $types = db_query("SELECT DISTINCT(pcid) FROM {uc_product_classes}");
  $csv_rows = array();
  while ($type = db_fetch_object($types)) {
    $product_types[] = "'". $type->pcid ."'";
  }

  if ($statistics && $count_views) {
    $header = array(
      array('data' => t('#')),
      array('data' => t('Product'), 'field' => 'n.title'),
      array('data' => t('Views'), 'field' => 'c.totalcount'),
      array('data' => t('Sold'), 'field' => 'sold'),
      array('data' => t('Total'), 'field' => 'total', 'sort' => 'desc'),
    );
    $csv_rows[] = array(t('#'), t('Product'), t('Views'), t('Sold'), t('Total'));

    $sql = '';
    switch ($GLOBALS['db_type']) {
      case 'mysqli':
      case 'mysql':
        $sql = "SELECT n.nid, n.title, c.totalcount, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN $order_statuses AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN $order_statuses AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n LEFT JOIN {node_counter} AS c ON n.nid = c.nid WHERE n.uid = %d AND type IN (". implode(", ", $product_types) .") GROUP BY n.nid DESC";
        break;
      case 'pgsql':
        $sql = "SELECT n.nid, n.title, c.totalcount, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN $order_statuses AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN $order_statuses AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n LEFT JOIN {node_counter} AS c ON n.nid = c.nid WHERE n.uid = %d AND type IN (". implode(", ", $product_types) .") GROUP BY n.nid";
        break;
    }
  }
  else {
    $header = array(
      array('data' => t('#')),
      array('data' => t('Product'), 'field' => 'n.title'),
      array('data' => t('Sold'), 'field' => 'sold'),
      array('data' => t('Total'), 'field' => 'total', 'sort' => 'desc'),
    );
    $csv_rows[] = array(t('#'), t('Product'), t('Sold'), t('Total'));

    switch ($GLOBALS['db_type']) {
      case 'mysqli':
      case 'mysql':
        $sql = "SELECT n.nid, n.title, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN $order_statuses AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN $order_statuses AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n WHERE n.uid = %d AND type IN (". implode(', ', $product_types) .') GROUP BY n.nid DESC';
        break;
      case 'pgsql':
        $sql = "SELECT n.nid, n.title, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN $order_statuses AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN $order_statuses AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n WHERE n.uid = %d AND type IN (". implode(', ', $product_types) .') GROUP BY n.nid, n.title';
        break;
    }
  }

  $sql_count = "SELECT COUNT(*) FROM {node} WHERE uid = %d AND type IN (". implode(", ", $product_types) .")";
  $products = pager_query($sql . tablesort_sql($header), $page_size, 0, $sql_count, $uid, $uid, $uid);

  while ($product = db_fetch_array($products)) {
    $row_cell = ($page * variable_get('uc_reports_table_size', 30)) + count($rows) + 1;
    $product_cell = l($product['title'], 'node/'. ($product['nid']));
    $product_csv = $product['title'];
    $sold_cell = (empty($product['sold'])) ? 0 : $product['sold'];
    $sold_csv = $sold_cell;
    $total_cell = uc_currency_format((empty($product['total'])) ? 0 : $product['total']);
    $total_csv = $total_cell;

    if (module_exists('uc_attribute')) {
      $product_models = db_query("SELECT model FROM {uc_product_adjustments} WHERE nid = %d", $product['nid']);
      $models = array(db_result(db_query("SELECT model FROM {uc_products} WHERE nid = %d", $product['nid'])));
      unset($breakdown_product, $breakdown_sold, $breakdown_total);
      while ($product_model = db_fetch_object($product_models)) {
        $models[] = $product_model->model;
    }
    foreach ($models as $model) {
      $sold = db_result(db_query("SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN $order_statuses AND p.model = '%s' AND p.nid = %d AND o.uid = %d", $model, $product['nid'], $uid));
      $total = db_result(db_query("SELECT SUM(p.cost * p.qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN $order_statuses AND p.model = '%s' AND p.nid = %d AND o.uid = %d", $model, $product['nid'], $uid));
      $breakdown_product .= "<br/>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;$model";
      $product_csv .= "\n     $model";
      $breakdown_sold .= "<br/>". ((!empty($sold)) ? $sold : 0);
      $sold_csv .= "\n     ". ((!empty($sold)) ? $sold : 0);
      $breakdown_total .= "<br/>". (uc_currency_format((!empty($total)) ? $total : 0));
      $total_csv .= "\n     ". (uc_currency_format((!empty($total)) ? $total : 0));
    }
    $product_cell = $product_cell . $breakdown_product;
    $sold_cell = '<strong>'. $sold_cell .'</strong>'. $breakdown_sold;
    $total_cell = '<strong>'. $total_cell .'</strong>'. $breakdown_total;
  }
  
  if ($statistics && $count_views) {
    $views = (empty($product['totalcount'])) ? 0 : $product['totalcount'];
    $rows[] = array(
      array('data' => $row_cell),
      array('data' => $product_cell),
      array('data' => $views),
      array('data' => $sold_cell),
      array('data' => $total_cell, 'nowrap' => 'nowrap')
    );
      $csv_rows[] = array($row_cell, $product_csv, $views, $sold_csv, $total_csv);
  }
  else {
    $rows[] = array(
      array('data' => $row_cell),
      array('data' => $product_cell),
      array('data' => $sold_cell),
      array('data' => $total_cell, 'nowrap' => 'nowrap')
    );
    $csv_rows[] = array($row_cell, $product_csv, $sold_csv, $total_csv);
    }
  }
  
  if (empty($rows)) {
    $rows[] = array(array('data' => t('No products found'), 'colspan' => count($header)));
  }
  $csv_data = uc_reports_store_csv('mp_seller_products', $csv_rows);

  $output = theme('table', $header, $rows, array('width' => '100%', 'class' => 'uc-sales-table'));
  $output .= theme_pager(NULL, $page_size);
  $output .= '<div class="uc-reports-links">'. l(t('Export to csv file.'), 'user/'. $uid .'/selling/reports/gettxt/'. $csv_data['report'] .'/'. $csv_data['user']) .'</div>';

  return $output;
}

/**
 * Displays the yearly sales report for sellers.
 */
function mp_reports_sales($user) {
  $uid = $user->uid;
  drupal_set_title(t('Sales Reports'));
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = l(t('Selling'), 'user/'. arg(1) .'/selling');
  $breadcrumb[] = l(t('Reports'), 'user/'. arg(1) .'/selling/reports');
  drupal_set_breadcrumb($breadcrumb);
  
  $timezone_offset = time() + variable_get('date_default_timezone', 0);
  $order_statuses = "('complete')";

  // Get the year for the report from the URL.
  if (intval(arg(5)) == 0) {
    $year = format_date($timezone_offset, 'custom', 'Y', 0);
  }
  else {
    $year = arg(5);
  }

  // Build the header for the report table.
  $header = array(t('Month'), t('Number of orders'), t('Total revenue'), t('Average order'));

  // Build the header to the csv export.
  $csv_rows = array(array(t('Month'), t('Number of orders'), t('Total revenue'), t('Average order')));

  // For each month of the year...
  for ($i = 1; $i <= 12; $i++) {
    // Calculate the start and end timestamps for the month in local time.
    $month_start = gmmktime(0, 0, 0, $i, 1, $year);
    $month_end = gmmktime(23, 59, 59, $i + 1, 0, $year);

    // Get the sales report for the month.
    $month_sales = mp_reports_get_sales($uid, $month_start, 'month');

    // Calculate the average order total for the month.
    if ($month_sales['total'] != 0) {
      $month_average = round($month_sales['income'] / $month_sales['total'], 2);
    }
    else {
      $month_average = 0;
    }

    // Add the month's row to the report table.
    $rows[] = array(
      gmdate('M Y', $month_start),
      $month_sales['total'],
      uc_currency_format($month_sales['income']),
      uc_currency_format($month_average),
    );

    // Add the data to the csv export.
    $csv_rows[] = array(
      gmdate('M Y', $month_start),
      $month_sales['total'],
      uc_currency_format($month_sales['income']),
      uc_currency_format($month_average),
    );
  }

  // Calculate the start and end timestamps for the year in local time.
  $year_start = gmmktime(0, 0, 0, 1, 1, $year);
  $year_end = gmmktime(23, 59, 59, 1, 0, $year + 1);

  // Get the sales report for the year.
  $year_sales = mp_reports_get_sales($uid, $year_start, 'year');

  // Calculate the average order total for the year.
  if ($year_sales['total'] != 0) {
    $year_average = round($year_sales['income'] / $year_sales['total'], 2);
  }
  else {
    $year_average = 0;
  }

  // Add the total row to the report table.
  $rows[] = array(
    t('Total @year', array('@year' => $year)),
    $year_sales['total'],
    uc_currency_format($year_sales['income']),
    uc_currency_format($year_average),
  );

  // Add the total data to the csv export.
  $csv_rows[] = array(
    t('Total @year', array('@year' => $year)),
    $year_sales['total'],
    uc_currency_format($year_sales['income']),
    uc_currency_format($year_average),
  );

  // Cache the csv export.
  $csv_data = uc_reports_store_csv('mp_seller_sales_yearly', $csv_rows);

  // Build the page output holding the form, table, and csv export link.
  $output = drupal_get_form('mp_reports_sales_year_form', $year)
    . theme('table', $header, $rows, array('width' => '100%', 'class' => 'uc-sales-table'))
    .'<div class="uc-reports-links">'. l(t('Export to csv file.'), 'user/'. $uid .'/selling/reports/gettxt/'. $csv_data['report'] .'/'. $csv_data['user']) .'</div>';

  return $output;
}

/**
 * Form to specify a year for the yearly sales report.
 */
function mp_reports_sales_year_form($form_state, $year) {
  $form['year'] = array(
    '#type' => 'textfield',
    '#title' => t('Sales year'),
    '#default_value' => $year,
    '#maxlength' => 4,
    '#size' => 4,
    '#prefix' => '<div class="sales-year">',
    '#suffix' => '</div>',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('View'),
    '#prefix' => '<div class="sales-year">',
    '#suffix' => '</div>',
  );

  return $form;
}

/**
 * Submit handler for custom year selection.
 */
function mp_reports_sales_year_form_submit($form, &$form_state) {
  drupal_goto('user/'. arg(1) .'/selling/reports/sales/'. $form_state['values']['year']);
}

/**
 * Displays summary report for seller's of all their sales.
 */
function mp_reports_summary($user) {
  $uid = $user->uid;
  drupal_set_title(t('Sales Reports'));
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = l(t('Selling'), 'user/'. arg(1) .'/selling');
  $breadcrumb[] = l(t('Reports'), 'user/'. arg(1) .'/selling/reports');
  drupal_set_breadcrumb($breadcrumb);

  $timezone_offset = variable_get('date_default_timezone', 0);
  $format = variable_get('uc_date_format_default', 'm/d/Y');
  
  $order_statuses = "('complete')";

  $today_start = gmmktime(0, 0, 0, date('n'), date('j'), date('Y')) - $timezone_offset;
  $today_end = gmmktime(23, 59, 59, date('n'), date('j'), date('Y')) - $timezone_offset;

  // Build the report table header.
  $header = array(t('Sales data'), t('Number of orders'), t('Total revenue'), t('Average order'));

  // Calculate and add today's sales summary to the report table.
  $today = mp_reports_get_sales($uid, $today_start);

  $rows[] = array(
    t('Today, !date', array('!date' => format_date($today_start, 'custom', $format))),
    $today['total'],
    uc_currency_format($today['income']),
    uc_currency_format($today['average']),
  );

  // Calculate and add yesterday's sales summary to the report table.
  $yesterday = mp_reports_get_sales($uid, $today_start - 86400);

  $rows[] = array(
    t('Yesterday, !date', array('!date' => format_date($today_start - 86400, 'custom', $format))),
    $yesterday['total'],
    uc_currency_format($yesterday['income']),
    uc_currency_format($yesterday['average']),
  );

  // Get the sales report for the month.
  $month = mp_reports_get_sales($uid, $today_start, 'month');
  $month_title = format_date($today_start, 'custom', 'M Y');

  // Calculate the daily averages for the month.
  $daily_orders = round($month['total'] / format_date(time(), 'custom', 'j'), 2);
  $daily_revenue = round($month['income'] / format_date(time(), 'custom', 'j'), 2);

  if ($daily_orders > 0) {
    $daily_average = round($daily_revenue / $daily_orders, 2);
  }
  else {
    $daily_average = 0;
  }

  // Add the daily averages for the month to the report table.
  $rows[] = array(
    t('Daily average for @month', array('@month' => $month_title)),
    $daily_orders,
    uc_currency_format($daily_revenue),
    uc_currency_format($daily_average),
  );

  // Store the number of days remaining in the month.
  $remaining_days = format_date($today_start, 'custom', 't') - format_date($today_start, 'custom', 'j');

  // Add the projected totals for the month to the report table.
  $rows[] = array(
    t('Projected totals for @date', array('@date' => $month_title)),
    round($month['total'] + ($daily_orders * $remaining_days), 2),
    uc_currency_format(round($month['income'] + ($daily_revenue * $remaining_days), 2)),
    '',
  );

  // Add the sales data report table to the output.
  $output = theme('table', $header, $rows, array('class' => 'uc-sales-table'));

  // Build the header statistics table header.
  $header = array(array('data' => t('Statistics'), 'width' => '50%'), '');

  $rows = array(
    array(array('data' => t('Grand total sales')), array('data' => uc_currency_format(db_result(db_query("SELECT SUM(p.cost * p.qty) FROM {mp_seller_order_statuses} AS sos LEFT JOIN {uc_orders} AS o ON sos.order_id = o.order_id LEFT JOIN {uc_order_products} AS p ON p.order_id = o.order_id LEFT JOIN {node} AS n ON n.nid = p.nid WHERE sos.order_status IN $order_statuses AND n.uid = %d AND sos.uid = %d", $uid, $uid))))),
  );

  // Add the statistics table to the output.
  $output .= theme('table', $header, $rows, array('width' => '100%', 'class' => 'uc-sales-table'));

  return $output;
}

function mp_reports_masspay_ipn() {
  watchdog('mp_reports', 'Masspay IPN received');

  if (check_plain($_POST['payment_status']) == 'Denied') {
    watchdog('mp_reports', 'Masspay IPN denied', WATCHDOG_ERROR);
  }

  $req = 'cmd=_notify-validate';

  foreach ($_POST as $key => $value) {
    $value = urlencode(stripslashes($value));
    $req .= '&'. $key .'='. $value;
  }

  if (variable_get('uc_paypal_wpp_server', '') == 'https://api-3t.paypal.com/nvp') {
    $host = 'https://www.paypal.com/cgi-bin/webscr';
  }
  else {
    $host = variable_get('uc_paypal_wps_server', 'https://www.sandbox.paypal.com/cgi-bin/webscr');
  }

  $host = explode('/', substr($host, 8));

  // Post back to PayPal to validate
  $header = "POST /cgi-bin/webscr HTTP/1.0\r\n";
  $header .= 'Host: '. $host[0] ."\r\n";
  $header .= "Content-Type: application/x-www-form-urlencoded\r\n";
  $header .= 'Content-Length: '. strlen($req) ."\r\n\r\n";

  // Address a screw-up on PayPal's Sandbox that prevents normal validation.
  if (strpos($host[0], 'sandbox') !== FALSE && function_exists('openssl_open')) {
    $fp = fsockopen('ssl://www.sandbox.paypal.com', 443, $errno, $errstr, 30);
  }
  else {
    // The old "normal" way of validating an IPN.
    $fp = fsockopen($host[0], 80, $errno, $errstr, 30);
  }

  if (!$fp) {
    watchdog('mp_reports', 'Masspay IPN failed with HTTP error.', WATCHDOG_ERROR);
    return;
  }

  fputs($fp, $header . $req);
  while (!feof($fp)) {
    $res = fgets($fp, 1024);
    if (strcmp ($res, 'VERIFIED') == 0) {
      watchdog('mp_reports', 'Masspay IPN transaction verified.');

      $number = 1;
      while (isset($_POST['masspay_txn_id_'. $number])) {
        $txn_id = check_plain($_POST['masspay_txn_id_'. $number]);
        $payment_status = check_plain($_POST['status_'. $number]);
        $receiver_email = check_plain($_POST['receiver_email_'. $number]);
        $payment_gross = check_plain($_POST['payment_gross_'. $number]);
        $payment_fee = check_plain($_POST['payment_fee_'. $number]);
        $payment_id = check_plain($_POST['unique_id_'. $number]);

        $result = db_result(db_query("SELECT COUNT(*) FROM {mp_seller_payments} WHERE payment_id = %d", $payment_id));
        if ($result == 0) {
          watchdog('mp_reports', 'Masspay IPN contains invalid unique_id.', WATCHDOG_ERROR);
          fclose($fp);
          return;
        }

        db_query("UPDATE {mp_seller_payments} SET txn_id = '%s', fee = %f, gross = %f, status = '%s' WHERE payment_id = %d", $txn_id, $payment_fee, $payment_gross, $payment_status, $payment_id);

        switch ($payment_status) {
          case 'Completed':
            $status_code = 5;
          break;
          case 'Failed':
            $status_code = 4;
          break;
          case 'Reversed':
            $status_code = 3;
          break;
          case 'Unclaimed':
            $status_code = 2;
          break;
        }
        db_query("UPDATE {mp_seller_order_statuses} SET seller_paid_status = %d WHERE payment_id = %d", $status_code, $payment_id);

        $number++;
      }
    }
    elseif (strcmp($res, 'INVALID') == 0) {
      watchdog('mp_reports', 'Masspay IPN transaction failed verification.', WATCHDOG_ERROR);
    }
  }
  fclose($fp);
}

function mp_reports_make_masspay($sellers) {
  $nvp_request = array(
    'METHOD' => 'MassPay',
    'RECEIVERTYPE' => 'EmailAddress',
  );
  $number = 0;
  foreach ($sellers as $seller) {
    $nvp_request += array('L_EMAIL'. $number => $seller['email']);
    $nvp_request += array('L_AMT'. $number => uc_currency_format($seller['commission'], FALSE)); 
    $nvp_request += array('L_UNIQUEID'. $number => $seller['payment_id']);
    $number++;
  }
  $nvp_request += array('CURRENCYCODE' => variable_get('uc_paypal_wpp_currency', 'USD'));
  $nvp_request += array('EMAILSUBJECT' => variable_get('mp_reports_masspay_subject', 'Payment for your sales.'));
  
  $nvp_response = uc_paypal_api_request($nvp_request, variable_get('uc_paypal_wpp_server', 'https://api-3t.sandbox.paypal.com/nvp'));
  if ($nvp_response['ACK'] == 'Success') {
    watchdog('mp_reports', 'Masspay responds success.');
    foreach ($sellers as $seller) {
      db_query("INSERT INTO {mp_seller_payments} (uid, email, method) VALUES (%d, '%s', '%s')", $seller['uid'], $seller['email'], t('Paypal'));
      foreach (explode(',', $seller['order_list']) as $order_id) {
        db_query("UPDATE {mp_seller_order_statuses} SET payment_id = %d, seller_paid_status = 1 WHERE uid = %d AND order_id = %d", $seller['payment_id'], $seller['uid'], $order_id);
      }
    }
  }
  else {
    watchdog('mp_reports', 'Failed to make MassPay NVP request.' 
      . 'Error Code: ' . $nvp_response['L_ERRORCODE0'] . ' '
      . 'Error Message: ' . $nvp_response['L_LONGMESSAGE0']);
  }
}