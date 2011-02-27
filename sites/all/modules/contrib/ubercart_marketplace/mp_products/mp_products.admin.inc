<?php
// $Id: mp_products.admin.inc,v 1.1.2.9 2010/02/13 05:15:34 syndicatestorm Exp $

/**
 * @file
 * Marketplace products administration menu items.
 */

function mp_products_selling_overview($user) {
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = l(t('Selling'), 'user/'. arg(1) .'/selling');
  drupal_set_breadcrumb($breadcrumb);
  $output = '';
  if (module_exists('mp_reports') && user_access('view own reports')) {
    require_once(drupal_get_path('module', 'mp_reports') .'/mp_reports.admin.inc');
    $output .= '<h1 class="title">'.t('Sales Summary').'</h1>';
    $output .= '<p>' . t('Below is a summary of your sales.') . '</p>';
    $output .= mp_reports_summary($user);
  }
  drupal_set_title(t('Sales Summary'));
  return $output; 
}

/**
* Returns a sortable table listing of the seller's products.
*
* @param $user
*   The user object whose marketplace products to show.
*/
function mp_products_selling($user) {
  drupal_set_title(t('My Products'));
  $uid = $user->uid;
  $breadcrumb = drupal_get_breadcrumb();
  $breadcrumb[] = l(t('Selling'), 'user/'. arg(1) .'/selling');
  drupal_set_breadcrumb($breadcrumb);
  
  $header = array(
    array('data' => t('ID'), 'field' => 'n.nid'),
    array('data' => t('Name'), 'field' => 'n.title', 'sort' => 'asc'),
    array('data' => t('Cost'), 'field' => 'p.cost'),
    array('data' => t('Added'), 'field' => 'n.created'),
    array('data' => t('Status'), 'field' => 'n.status')
  );
  $product_types = array("'product'");
  $types = db_query("SELECT DISTINCT(pcid) FROM {uc_product_classes}");
  while ($type = db_fetch_object($types)) {
    $product_types[] = "'". $type->pcid ."'";
  }
  $result = pager_query("SELECT n.nid, n.title, p.cost, n.created, n.status FROM {node} AS n INNER JOIN {uc_products} AS p USING (nid,vid) WHERE n.uid = %d"  . tablesort_sql($header), 20, 0, "SELECT COUNT(*) FROM {node} WHERE uid = %d AND type IN (". implode(", ", $product_types) .")", $uid);

  // Build a table based on the seller's products.
  while ($product = db_fetch_object($result)) {
    $link = l($product->title, 'node/'. $product->nid); 
    $link .= '<span class="order-admin-icons">'. l('<img src="'. base_path() . drupal_get_path('module', 'uc_store') .'/images/order_view.gif" alt="View Product" />', 'node/'. $product->nid, array('title' => 'View Product', 'html' => TRUE)) . l('<img src="'. base_path() . drupal_get_path('module', 'uc_store') .'/images/order_edit.gif" alt="Edit Product" />', 'node/'. $product->nid .'/edit', array('title' => 'Edit Product', 'html' => TRUE)) .'</span>';
    $listed = ($product->status == 0) ? t('Not Currently Listed') : t('For Sale');

    $rows[] = array(
      array('data' => $product->nid),
      array('data' => $link),
      array('data' => uc_currency_format($product->cost, TRUE), 'align' => 'left'),
        array('data' => format_date($product->created, 'custom', variable_get('uc_date_format_default', 'm/d/Y'))),
      array('data' => $listed)
    );
  }
  $output = theme('table', $header, $rows) . theme('pager', NULL, 20, 0);
  
  return $output;
}

function mp_products_commission_form() {
  $roles_array = user_roles(true, 'act as seller');
  $classes_array = module_invoke_all('product_types');
  $form = array();
  $form['#tree'] = TRUE;
  foreach ($classes_array as $class) {
    $form[$class]['title'] = array('#value' => $class);
    foreach ($roles_array as $role) {
      $form[$class][$role] = array(
        '#type' => 'textfield',
        '#description' => $role,
        '#size' => 10,
        '#default_value' => db_result(db_query("SELECT rate FROM {mp_seller_rates} WHERE rid = %d AND class = '%s'", array_search($role, $roles_array), $class)),
      );
    }
  }

  $form['submit'] = array('#type' => 'submit', '#value' => t('Submit'));
  return $form;
}

function mp_products_commission_form_submit($form, &$form_state) {
  $classes_array = module_invoke_all('product_types');
  $roles_array = user_roles(true, 'act as seller');
  foreach ($classes_array as $class) {
    foreach ($roles_array as $role) {
      db_query("UPDATE {mp_seller_rates} SET rate = %f WHERE rid = %d AND class = '%s'", $form_state['values'][$class][$role], array_search($role, $roles_array), $class);
      if (!db_affected_rows()) {
        db_query("INSERT INTO {mp_seller_rates} (rate, rid, class) VALUES (%f, %d, '%s')", $form_state['values'][$class][$role], array_search($role, $roles_array), $class);
      }
    }
  }
  drupal_set_message(t('Rates saved.'));
}

/**
 * Seller settings form 
 */
function mp_products_settings_seller_form() {
  $form['mp_product_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => 'Product form settings'
  );
  $form['mp_product_fieldset']['mp_products_hide_fields'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hide extra fields'),
      '#description' => t('Check to hide product node fields unnecessary for marketplace sellers.'),
      '#default_value' => variable_get('mp_products_hide_fields', TRUE),
  );
  $form['mp_product_fieldset']['mp_products_enable_list'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show list price'),
      '#description' => t('Check to show list price field on product form.  DO NOT uncheck if autofill or autocalc is turned on below AND commission field is LIST PRICE.'),
      '#default_value' => variable_get('mp_products_enable_list', TRUE),
  );
  $form['mp_product_fieldset']['mp_products_admin_base'] = array(
      '#type' => 'textfield',
      '#title' => t('Administrator base price'),
      '#description' => t('Here you can type the bare minimum a seller must set their price point to. (Useful for a "base price" for sellers to go from).'),
      '#default_value' => variable_get('mp_products_admin_base', FALSE),
  );
  $form['mp_product_fieldset']['commission_fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => 'Commission calculation settings',
  );
  $form['mp_product_fieldset']['commission_fieldset']['mp_products_commission_rate'] = array(
      '#type' => 'textfield',
      '#title' => t('Default Commission Rate'),
      '#description' => t('Enter decimal fraction of sell price or list price to be used as seller\'s commission rate.  This is the fraction of the sell price seller will be paid for a product sale. ') . l(t('Configure commission rates by seller role and product class.'), 'admin/store/settings/seller/commission'),
      '#default_value' => variable_get('mp_products_commission_rate', '.75'),
    '#size' => 10,
  );
  $form['mp_product_fieldset']['commission_fieldset']['mp_products_auto_calc'] = array(
      '#type' => 'checkbox',
      '#title' => t('Automatically calculate commission'),
      '#description' => t('Check to automatically calculate amount (commission) seller will be paid for a sale of a product. Value calculated is based on commission rate. Checking this hides seller commission field. NOTE: Changing this does not refresh existing products.'),
      '#default_value' => variable_get('mp_products_auto_calc', FALSE),
  );
  $form['mp_product_fieldset']['commission_fieldset']['mp_products_auto_calc_field'] = array(
      '#type' => 'select',
      '#title' => t('Commission based on'),
      '#description' => t('Select the field the commission a seller will be paid is based on. ONLY applies if commission auto calc or autofill is turned ON. NOTE: Changing this does not refresh existing products.'),
      '#default_value' => variable_get('mp_products_auto_calc_field', 'sell_price'),
      '#options' => array(
        'sell_price' => t('Sell Price'),
        'list_price' => t('List Price'),
      ),
  );
  $form['mp_product_fieldset']['commission_fieldset']['mp_products_admin_override'] = array(
      '#type' => 'checkbox',
      '#title' => t('Allow admin commission override'),
      '#description' => t('Check to ignore automatically calculated commission in favor of administrator specified commission value when entered. Additionally, checking this removes commission field validation for admin.'),
      '#default_value' => variable_get('mp_products_admin_override', FALSE),
  );
  $form['mp_product_fieldset']['commission_fieldset']['mp_products_insert_js'] = array(
      '#type' => 'checkbox',
      '#title' => t('Autofill commission field'),
      '#description' => t('Check to insert javascript autofill function for seller commission field. ONLY applies if commission auto calc is turned OFF.'),
      '#default_value' => variable_get('mp_products_insert_js', FALSE),
  );
  if (module_exists(mp_file)) {
    $form['mp_file_fieldset'] = array(
      '#type' => 'fieldset',
      '#title' => 'File download feature settings'
    );
    $form['mp_file_fieldset']['mp_file_field_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Name of product filefield'),
      '#default_value' => variable_get('mp_file_field_name', 'download'),
      '#description' => t('Enter the machine-readable name of the filefield field with which sellers will upload files.'),
      '#size' => 100,
    );
    $form['mp_file_fieldset']['mp_file_allow_sellers_perm'] = array(
      '#type' => 'checkbox',
      '#title' => t('Allow sellers to commit files'),
      '#description' => t('Check to have files automatically committed to a file download feature.  Useful if products are not moderated. WARNING: Enabling this has a potential security risk.'),
      '#default_value' => variable_get('mp_file_allow_sellers_perm', FALSE),
    );
  }
  if (module_exists(mp_reports)) {
    $form['mp_reports_payment'] = array(
      '#type' => 'fieldset',
      '#title' => 'Seller payment options'
    );
    $form['mp_reports_payment']['mp_reports_display_email'] = array(
      '#type' => 'checkbox',
      '#title' => t('Add Paypal email address field'),
      '#description' => t('Check to add an email address field to seller profile edit forms.  This email address will be the one used for Paypal Masspay functionality.  IMPORTANT: To allow admin to actually send payments via Paypal, uc_paypal must be enabled and api credentials must be entered for WPP (even if not enabled as a gateway).'),
      '#default_value' => variable_get('mp_reports_display_email', TRUE),
    );
    $form['mp_reports_payment']['mp_reports_enable_check'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable manual payment method'),
      '#description' => t('Check to enable the manual seller payment method (currently: check).  Enabling this will add a payment details field to seller profile edit forms.'),
      '#default_value' => variable_get('mp_reports_enable_check', FALSE),
    );
  }
  return system_settings_form($form);
}
 