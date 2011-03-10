<?php

/**
 * @file
 * Marketplace report administration menu items.
 */

 /**
 * Display the reports overview
 */
function mp_reports_overview($uid) {
  drupal_set_title(t('Sales Reports'));
  
  return '<dl><dt>'. l(t("Product Reports"), 'user/'. arg(1) .'/selling/reports/product') .'</dt><dd>'. t("View reports for your products.") .'</dd><dt>'. l(t("Sales Per Year"), 'user/'. arg(1) .'/selling/reports/sales') .'</dt><dd>'. t("View reports of your sales per year and month.") .'</dd><dt>'. l(t("Sales Summary"), 'user/'. arg(1) .'/selling/reports/summary') .'</dt><dd>'. t("View reports of your overall and projected sales.") .'</dd></dl>';
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
 * Displays the product reports
 */
function mp_reports_products($user) {
  $uid = $user->uid;
  drupal_set_title(t('Sales Reports'));
  
  $statistics = db_result(db_query("SELECT status FROM {system} WHERE name = 'statistics'"));
  $count_views = variable_get('statistics_count_content_views', FALSE);
  $page = (!is_null($_GET['page'])) ? intval($_GET['page']) : 0;
  $page_size = (!is_null($_GET['nopage'])) ? UC_REPORTS_MAX_RECORDS : variable_get('uc_reports_table_size', 30);
  $order_statuses = array('complete');
  $product_types = array('product');
  $types = db_query("SELECT DISTINCT(pcid) FROM {uc_product_classes}");
  $csv_rows = array();
  while ($type = db_fetch_object($types)) {
    $product_types[] = $type->pcid;
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
        $sql = "SELECT n.nid, n.title, c.totalcount, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n LEFT JOIN {node_counter} AS c ON n.nid = c.nid WHERE n.uid = %d AND type IN (" . db_placeholders($product_types, 'text') . ") GROUP BY n.nid DESC";
        break;
      case 'pgsql':
        $sql = "SELECT n.nid, n.title, c.totalcount, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n LEFT JOIN {node_counter} AS c ON n.nid = c.nid WHERE n.uid = %d AND type IN (" . db_placeholders($product_types, 'text') . ") GROUP BY n.nid";
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
        $sql = "SELECT n.nid, n.title, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n WHERE n.uid = %d AND type IN (" . db_placeholders($product_types, 'text') . ") GROUP BY n.nid DESC";
        break;
      case 'pgsql':
        $sql = "SELECT n.nid, n.title, (SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p.nid = n.nid AND o.uid = %d) AS sold, (SELECT (SUM(p2.cost * p2.qty)) FROM {uc_order_products} AS p2 LEFT JOIN {mp_seller_order_statuses} AS o2 ON p2.order_id = o2.order_id WHERE o2.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p2.nid = n.nid AND o2.uid = %d) AS total FROM {node} AS n WHERE n.uid = %d AND type IN (" . db_placeholders($product_types, 'text') . ") GROUP BY n.nid, n.title";
        break;
    }
  }

  $sql_count = "SELECT COUNT(*) FROM {node} WHERE uid = %d AND type IN (" . db_placeholders($product_types, 'text') . ")";
  $products = pager_query($sql . tablesort_sql($header), $page_size, 0, $sql_count, array_merge($order_statuses, array($uid), $order_statuses, array($uid, $uid), $product_types));

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
      $sold = db_result(db_query("SELECT SUM(qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p.model = '%s' AND p.nid = %d AND o.uid = %d", array_merge($order_statuses, array($model, $product['nid'], $uid))));
      $total = db_result(db_query("SELECT SUM(p.cost * p.qty) FROM {uc_order_products} AS p LEFT JOIN {mp_seller_order_statuses} AS o ON p.order_id = o.order_id WHERE o.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND p.model = '%s' AND p.nid = %d AND o.uid = %d", array_merge($order_statuses, array($model, $product['nid'], $uid))));
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

  $timezone_offset = variable_get('date_default_timezone', 0);
  $format = variable_get('uc_date_format_default', 'm/d/Y');
  
  $order_statuses = array('complete');

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
    array(array('data' => t('Grand total sales')), array('data' => uc_currency_format(db_result(db_query("SELECT SUM(p.cost * p.qty) FROM {mp_seller_order_statuses} AS sos LEFT JOIN {uc_orders} AS o ON sos.order_id = o.order_id LEFT JOIN {uc_order_products} AS p ON p.order_id = o.order_id LEFT JOIN {node} AS n ON n.nid = p.nid WHERE sos.order_status IN (" . db_placeholders($order_statuses, 'text') . ") AND n.uid = %d AND sos.uid = %d", array_merge($order_statuses, array($uid, $uid))))))),
  );

  // Add the statistics table to the output.
  $output .= theme('table', $header, $rows, array('width' => '100%', 'class' => 'uc-sales-table'));

  return $output;
}