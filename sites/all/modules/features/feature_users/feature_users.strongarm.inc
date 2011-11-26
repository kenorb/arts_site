<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_users_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'activity_access_realms';
  $strongarm->value = array(
    0 => 'comment',
    1 => 'node_author',
  );
  $export['activity_access_realms'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'activity_access_rebuild';
  $strongarm->value = 'Rebuild Activity Access Table';
  $export['activity_access_rebuild'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_add_captcha_description';
  $strongarm->value = 1;
  $export['captcha_add_captcha_description'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_administration_mode';
  $strongarm->value = 0;
  $export['captcha_administration_mode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_allow_on_admin_pages';
  $strongarm->value = 0;
  $export['captcha_allow_on_admin_pages'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_challenge';
  $strongarm->value = 'recaptcha/reCAPTCHA';
  $export['captcha_default_challenge'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_default_validation';
  $strongarm->value = '1';
  $export['captcha_default_validation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description';
  $strongarm->value = 'This question is for testing whether you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_description_en';
  $strongarm->value = 'This question is for testing whether you are a human visitor and to prevent automated spam submissions.';
  $export['captcha_description_en'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_log_wrong_responses';
  $strongarm->value = 1;
  $export['captcha_log_wrong_responses'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_persistence';
  $strongarm->value = '2';
  $export['captcha_persistence'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_placement_map_cache';
  $strongarm->value = array(
    'comment_form' => array(
      'path' => array(),
      'key' => NULL,
      'weight' => 18.9,
    ),
    'user_login' => array(
      'path' => array(),
      'key' => 'submit',
      'weight' => 2,
    ),
    'user_register' => array(
      'path' => array(),
      'key' => 'submit',
      'weight' => 30,
    ),
  );
  $export['captcha_placement_map_cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_response';
  $strongarm->value = 'mMBfK';
  $export['captcha_response'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_sid';
  $strongarm->value = 23;
  $export['captcha_sid'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_token';
  $strongarm->value = 'ee900b3dc3523dd2d7b3fb6b7ccf7214';
  $export['captcha_token'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'captcha_wrong_response_counter';
  $strongarm->value = 2;
  $export['captcha_wrong_response_counter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_profile';
  $strongarm->value = '0';
  $export['comment_anonymous_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_profile';
  $strongarm->value = '0';
  $export['comment_controls_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_profile';
  $strongarm->value = '4';
  $export['comment_default_mode_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_profile';
  $strongarm->value = '1';
  $export['comment_default_order_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_profile';
  $strongarm->value = '0';
  $export['comment_form_location_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_profile';
  $strongarm->value = '0';
  $export['comment_preview_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_profile';
  $strongarm->value = '2';
  $export['comment_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_profile';
  $strongarm->value = '1';
  $export['comment_subject_field_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_profile';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-3',
    'author' => '-2',
    'options' => '-1',
    'comment_settings' => '0',
    'menu' => '-4',
    'path' => '6',
    'attachments' => '5',
    'custom_breadcrumbs' => '9',
    'print' => '10',
    'workflow' => '8',
    'nodewords' => '4',
    'notifications' => '7',
  );
  $export['content_extra_weights_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumb_home';
  $strongarm->value = 'Home';
  $export['custom_breadcrumb_home'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_adjust_module_weights';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_adjust_module_weights'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_append_bid_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_append_bid_class'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_even_odd_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_even_odd_class'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_exclude_list';
  $strongarm->value = 'admin/user/user,user';
  $export['custom_breadcrumbs_exclude_list'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_force_active_trail';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_force_active_trail'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_home_id';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_home_id'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_menu_list';
  $strongarm->value = array(
    'accountmenu' => 'accountmenu',
    'admin_menu' => 'admin_menu',
    'menu-admin' => 'menu-admin',
    'menu-category' => 'menu-category',
    'menu-footerpos1' => 'menu-footerpos1',
    'menu-footerpos2' => 'menu-footerpos2',
    'menu-footerpos3' => 'menu-footerpos3',
    'menu-profilemenu' => 'menu-profilemenu',
    'menu-toolbar' => 'menu-toolbar',
    'navigation' => 'navigation',
    'primary-links' => 'primary-links',
    'secondary-links' => 'secondary-links',
  );
  $export['custom_breadcrumbs_menu_list'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_menu_theme';
  $strongarm->value = array(
    'saw' => array(
      'menu_item' => 'theme_menu_item',
      'menu_item_link' => 'theme_menu_item_link',
    ),
    'minnelli' => array(
      'menu_item' => 'theme_menu_item',
      'menu_item_link' => 'theme_menu_item_link',
    ),
  );
  $export['custom_breadcrumbs_menu_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_parts_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_parts_class'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_paths_allow_wildcards';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_paths_allow_wildcards'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_set_global_home_breadcrumb';
  $strongarm->value = 1;
  $export['custom_breadcrumbs_set_global_home_breadcrumb'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_set_menu_breadcrumb';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_set_menu_breadcrumb'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_sort';
  $strongarm->value = array(
    'direction' => array(
      'name' => 'asc',
      'breadcrumb_type' => 'asc',
      'language' => 'asc',
    ),
    'column' => 'name',
  );
  $export['custom_breadcrumbs_sort'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_type_class';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_type_class'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_use_exclude_list';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_use_exclude_list'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_breadcrumbs_use_php_in_titles';
  $strongarm->value = 0;
  $export['custom_breadcrumbs_use_php_in_titles'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert';
  $strongarm->value = '_blank';
  $export['extlink_alert'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert_text';
  $strongarm->value = 'This link will take you to an external web site. We are not responsible for their content.';
  $export['extlink_alert_text'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_class';
  $strongarm->value = 'ext';
  $export['extlink_class'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_exclude';
  $strongarm->value = '';
  $export['extlink_exclude'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_include';
  $strongarm->value = '';
  $export['extlink_include'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_mailto_class';
  $strongarm->value = 'mailto';
  $export['extlink_mailto_class'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_subdomains';
  $strongarm->value = 1;
  $export['extlink_subdomains'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_target';
  $strongarm->value = '_blank';
  $export['extlink_target'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_background_color';
  $strongarm->value = '#ffffff';
  $export['image_captcha_background_color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_bilinear_interpolation';
  $strongarm->value = 0;
  $export['image_captcha_bilinear_interpolation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_character_spacing';
  $strongarm->value = '1.2';
  $export['image_captcha_character_spacing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_code_length';
  $strongarm->value = '5';
  $export['image_captcha_code_length'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_distortion_amplitude';
  $strongarm->value = '0';
  $export['image_captcha_distortion_amplitude'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_dot_noise';
  $strongarm->value = 1;
  $export['image_captcha_dot_noise'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_file_format';
  $strongarm->value = '1';
  $export['image_captcha_file_format'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_font_size';
  $strongarm->value = '36';
  $export['image_captcha_font_size'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_fonts';
  $strongarm->value = array(
    'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy_Bold.ttf' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy_Bold.ttf',
    'sites/all/modules/contrib/captcha/image_captcha/fonts/Tesox/tesox.ttf' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tesox/tesox.ttf',
  );
  $export['image_captcha_fonts'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_fonts_preview_map_cache';
  $strongarm->value = array(
    'a60fb7b7785018bc608512ddf0ef9669' => (object) array(
  'filename' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy.ttf',
  'basename' => 'Tuffy.ttf',
  'name' => 'Tuffy',
),
    '2b55c667e0cf90112fd3ad79bf7a634e' => (object) array(
  'filename' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tuffy/Tuffy_Bold.ttf',
  'basename' => 'Tuffy_Bold.ttf',
  'name' => 'Tuffy_Bold',
),
    'f36285dfa81137d37fe06003d5568523' => (object) array(
  'filename' => 'sites/all/modules/contrib/captcha/image_captcha/fonts/Tesox/tesox.ttf',
  'basename' => 'tesox.ttf',
  'name' => 'tesox',
),
    '33135439efddfbd5df79c81d836100c2' => (object) array(
  'filename' => 'sites/all/libraries/fonts/akruti2.ttf',
  'basename' => 'akruti2.ttf',
  'name' => 'akruti2',
),
    'f536dc7aa748aa7a6491d14485149087' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TAMu_Kalyani.ttf',
  'basename' => 'TAMu_Kalyani.ttf',
  'name' => 'TAMu_Kalyani',
),
    'e817889009544b15e747bb176330e3c5' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TSCu_paranarb.ttf',
  'basename' => 'TSCu_paranarb.ttf',
  'name' => 'TSCu_paranarb',
),
    '2443e1707e447073d66b84a7c49f61eb' => (object) array(
  'filename' => 'sites/all/libraries/fonts/akruti1b.ttf',
  'basename' => 'akruti1b.ttf',
  'name' => 'akruti1b',
),
    '32737c4397d1fa834a551cb34c0bc99c' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TSCu_Comic.ttf',
  'basename' => 'TSCu_Comic.ttf',
  'name' => 'TSCu_Comic',
),
    '583c25344c042ff6f30365646fd9e4fb' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TSCu_paranari.ttf',
  'basename' => 'TSCu_paranari.ttf',
  'name' => 'TSCu_paranari',
),
    '9db03305d1811d0240e45c88615de86f' => (object) array(
  'filename' => 'sites/all/libraries/fonts/akruti2b.ttf',
  'basename' => 'akruti2b.ttf',
  'name' => 'akruti2b',
),
    'e7212d62cb413a1eaa41965386041077' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TSCu_Paranar.ttf',
  'basename' => 'TSCu_Paranar.ttf',
  'name' => 'TSCu_Paranar',
),
    'd1d8265a8afb6eb19c2abc3d8a848198' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TSCu_Times.ttf',
  'basename' => 'TSCu_Times.ttf',
  'name' => 'TSCu_Times',
),
    '620cf0147b3420f646454a390cd58824' => (object) array(
  'filename' => 'sites/all/libraries/fonts/akruti1.ttf',
  'basename' => 'akruti1.ttf',
  'name' => 'akruti1',
),
    'b04e870ab015d2e35ac0cfe5ab004c6e' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TAMu_Kadampari.ttf',
  'basename' => 'TAMu_Kadampari.ttf',
  'name' => 'TAMu_Kadampari',
),
    '5ce706cc868a19359424616fdbba9d94' => (object) array(
  'filename' => 'sites/all/libraries/fonts/TAMu_Maduram.ttf',
  'basename' => 'TAMu_Maduram.ttf',
  'name' => 'TAMu_Maduram',
),
  );
  $export['image_captcha_fonts_preview_map_cache'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_foreground_color';
  $strongarm->value = '#000000';
  $export['image_captcha_foreground_color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_foreground_color_randomness';
  $strongarm->value = '100';
  $export['image_captcha_foreground_color_randomness'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_image_allowed_chars';
  $strongarm->value = 'aAbBCdEeFfGHhijKLMmNPQRrSTtWXYZ23456789';
  $export['image_captcha_image_allowed_chars'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_line_noise';
  $strongarm->value = 0;
  $export['image_captcha_line_noise'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_captcha_noise_level';
  $strongarm->value = '2';
  $export['image_captcha_noise_level'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_profile';
  $strongarm->value = '0';
  $export['language_content_type_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_default_country';
  $strongarm->value = 'uk';
  $export['location_default_country'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_art';
  $strongarm->value = '1';
  $export['location_defaultnum_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_blog';
  $strongarm->value = '0';
  $export['location_defaultnum_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_education';
  $strongarm->value = '0';
  $export['location_defaultnum_education'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_event';
  $strongarm->value = '1';
  $export['location_defaultnum_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_forum';
  $strongarm->value = '1';
  $export['location_defaultnum_forum'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_group';
  $strongarm->value = '0';
  $export['location_defaultnum_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_idea';
  $strongarm->value = '0';
  $export['location_defaultnum_idea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_item';
  $strongarm->value = '1';
  $export['location_defaultnum_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_membership';
  $strongarm->value = '0';
  $export['location_defaultnum_membership'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_page';
  $strongarm->value = '1';
  $export['location_defaultnum_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_profile';
  $strongarm->value = '1';
  $export['location_defaultnum_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_simplenews';
  $strongarm->value = '1';
  $export['location_defaultnum_simplenews'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_display_location';
  $strongarm->value = '1';
  $export['location_display_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_general_geocoders_in_use';
  $strongarm->value = array(
    'google' => 'google',
  );
  $export['location_general_geocoders_in_use'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ad';
  $strongarm->value = 'google';
  $export['location_geocode_ad'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ae';
  $strongarm->value = 'google';
  $export['location_geocode_ae'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_af';
  $strongarm->value = 'google';
  $export['location_geocode_af'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ag';
  $strongarm->value = 'google';
  $export['location_geocode_ag'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ai';
  $strongarm->value = 'google';
  $export['location_geocode_ai'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_al';
  $strongarm->value = 'google';
  $export['location_geocode_al'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_am';
  $strongarm->value = 'google';
  $export['location_geocode_am'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_an';
  $strongarm->value = 'google';
  $export['location_geocode_an'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ao';
  $strongarm->value = 'google';
  $export['location_geocode_ao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ar';
  $strongarm->value = 'google';
  $export['location_geocode_ar'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_as';
  $strongarm->value = 'google';
  $export['location_geocode_as'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_at';
  $strongarm->value = 'google';
  $export['location_geocode_at'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_au';
  $strongarm->value = 'google';
  $export['location_geocode_au'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_aw';
  $strongarm->value = 'google';
  $export['location_geocode_aw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ba';
  $strongarm->value = 'google';
  $export['location_geocode_ba'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bb';
  $strongarm->value = 'google';
  $export['location_geocode_bb'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bd';
  $strongarm->value = 'google';
  $export['location_geocode_bd'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_be';
  $strongarm->value = 'google';
  $export['location_geocode_be'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bf';
  $strongarm->value = 'google';
  $export['location_geocode_bf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bg';
  $strongarm->value = 'google';
  $export['location_geocode_bg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bh';
  $strongarm->value = 'google';
  $export['location_geocode_bh'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bi';
  $strongarm->value = 'google';
  $export['location_geocode_bi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bj';
  $strongarm->value = 'google';
  $export['location_geocode_bj'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bm';
  $strongarm->value = 'google';
  $export['location_geocode_bm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bn';
  $strongarm->value = 'google';
  $export['location_geocode_bn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bo';
  $strongarm->value = 'google';
  $export['location_geocode_bo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_br';
  $strongarm->value = 'google';
  $export['location_geocode_br'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bs';
  $strongarm->value = 'google';
  $export['location_geocode_bs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bt';
  $strongarm->value = 'google';
  $export['location_geocode_bt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bw';
  $strongarm->value = 'google';
  $export['location_geocode_bw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_by';
  $strongarm->value = 'google';
  $export['location_geocode_by'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_bz';
  $strongarm->value = 'google';
  $export['location_geocode_bz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ca';
  $strongarm->value = 'google';
  $export['location_geocode_ca'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cc';
  $strongarm->value = 'google';
  $export['location_geocode_cc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cd';
  $strongarm->value = 'google';
  $export['location_geocode_cd'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cf';
  $strongarm->value = 'google';
  $export['location_geocode_cf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cg';
  $strongarm->value = 'google';
  $export['location_geocode_cg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ch';
  $strongarm->value = 'google';
  $export['location_geocode_ch'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ci';
  $strongarm->value = 'google';
  $export['location_geocode_ci'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ck';
  $strongarm->value = 'google';
  $export['location_geocode_ck'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cl';
  $strongarm->value = 'google';
  $export['location_geocode_cl'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cm';
  $strongarm->value = 'google';
  $export['location_geocode_cm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cn';
  $strongarm->value = 'google';
  $export['location_geocode_cn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_co';
  $strongarm->value = 'google';
  $export['location_geocode_co'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cr';
  $strongarm->value = 'google';
  $export['location_geocode_cr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cu';
  $strongarm->value = 'google';
  $export['location_geocode_cu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cv';
  $strongarm->value = 'google';
  $export['location_geocode_cv'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cx';
  $strongarm->value = 'google';
  $export['location_geocode_cx'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_cz';
  $strongarm->value = 'google';
  $export['location_geocode_cz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_de';
  $strongarm->value = 'google';
  $export['location_geocode_de'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_dj';
  $strongarm->value = 'google';
  $export['location_geocode_dj'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_dk';
  $strongarm->value = 'google';
  $export['location_geocode_dk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_dm';
  $strongarm->value = 'google';
  $export['location_geocode_dm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_do';
  $strongarm->value = 'google';
  $export['location_geocode_do'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_dz';
  $strongarm->value = 'google';
  $export['location_geocode_dz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ec';
  $strongarm->value = 'google';
  $export['location_geocode_ec'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ee';
  $strongarm->value = 'google';
  $export['location_geocode_ee'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_eg';
  $strongarm->value = 'google';
  $export['location_geocode_eg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_es';
  $strongarm->value = 'google';
  $export['location_geocode_es'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_et';
  $strongarm->value = 'google';
  $export['location_geocode_et'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_fi';
  $strongarm->value = 'google';
  $export['location_geocode_fi'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_fj';
  $strongarm->value = 'google';
  $export['location_geocode_fj'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_fm';
  $strongarm->value = 'google';
  $export['location_geocode_fm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_fr';
  $strongarm->value = 'google';
  $export['location_geocode_fr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ga';
  $strongarm->value = 'google';
  $export['location_geocode_ga'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gd';
  $strongarm->value = 'google';
  $export['location_geocode_gd'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gf';
  $strongarm->value = 'google';
  $export['location_geocode_gf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gh';
  $strongarm->value = 'google';
  $export['location_geocode_gh'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gl';
  $strongarm->value = 'google';
  $export['location_geocode_gl'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gm';
  $strongarm->value = 'google';
  $export['location_geocode_gm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gn';
  $strongarm->value = 'google';
  $export['location_geocode_gn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_google_minimum_accuracy';
  $strongarm->value = '6';
  $export['location_geocode_google_minimum_accuracy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gp';
  $strongarm->value = 'google';
  $export['location_geocode_gp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gq';
  $strongarm->value = 'google';
  $export['location_geocode_gq'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gr';
  $strongarm->value = 'google';
  $export['location_geocode_gr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gt';
  $strongarm->value = 'google';
  $export['location_geocode_gt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gu';
  $strongarm->value = 'google';
  $export['location_geocode_gu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_gw';
  $strongarm->value = 'google';
  $export['location_geocode_gw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_hk';
  $strongarm->value = 'google';
  $export['location_geocode_hk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_hn';
  $strongarm->value = 'google';
  $export['location_geocode_hn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_hr';
  $strongarm->value = 'google';
  $export['location_geocode_hr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ht';
  $strongarm->value = 'google';
  $export['location_geocode_ht'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_hu';
  $strongarm->value = 'google';
  $export['location_geocode_hu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_id';
  $strongarm->value = 'google';
  $export['location_geocode_id'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ie';
  $strongarm->value = 'google';
  $export['location_geocode_ie'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_il';
  $strongarm->value = 'google';
  $export['location_geocode_il'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_in';
  $strongarm->value = 'google';
  $export['location_geocode_in'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_io';
  $strongarm->value = 'google';
  $export['location_geocode_io'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_iq';
  $strongarm->value = 'google';
  $export['location_geocode_iq'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ir';
  $strongarm->value = 'google';
  $export['location_geocode_ir'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_is';
  $strongarm->value = 'google';
  $export['location_geocode_is'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_it';
  $strongarm->value = 'google';
  $export['location_geocode_it'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_jm';
  $strongarm->value = 'google';
  $export['location_geocode_jm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_jo';
  $strongarm->value = 'google';
  $export['location_geocode_jo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_jp';
  $strongarm->value = 'google';
  $export['location_geocode_jp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ke';
  $strongarm->value = 'google';
  $export['location_geocode_ke'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_kg';
  $strongarm->value = 'google';
  $export['location_geocode_kg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_kh';
  $strongarm->value = 'google';
  $export['location_geocode_kh'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_km';
  $strongarm->value = 'google';
  $export['location_geocode_km'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_kn';
  $strongarm->value = 'google';
  $export['location_geocode_kn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_kr';
  $strongarm->value = 'google';
  $export['location_geocode_kr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_kw';
  $strongarm->value = 'google';
  $export['location_geocode_kw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ky';
  $strongarm->value = 'google';
  $export['location_geocode_ky'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_kz';
  $strongarm->value = 'google';
  $export['location_geocode_kz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_la';
  $strongarm->value = 'google';
  $export['location_geocode_la'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lb';
  $strongarm->value = 'google';
  $export['location_geocode_lb'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lc';
  $strongarm->value = 'google';
  $export['location_geocode_lc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_li';
  $strongarm->value = 'google';
  $export['location_geocode_li'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lk';
  $strongarm->value = 'google';
  $export['location_geocode_lk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lr';
  $strongarm->value = 'google';
  $export['location_geocode_lr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ls';
  $strongarm->value = 'google';
  $export['location_geocode_ls'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lt';
  $strongarm->value = 'google';
  $export['location_geocode_lt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lu';
  $strongarm->value = 'google';
  $export['location_geocode_lu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_lv';
  $strongarm->value = 'google';
  $export['location_geocode_lv'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ly';
  $strongarm->value = 'google';
  $export['location_geocode_ly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ma';
  $strongarm->value = 'google';
  $export['location_geocode_ma'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mc';
  $strongarm->value = 'google';
  $export['location_geocode_mc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_md';
  $strongarm->value = 'google';
  $export['location_geocode_md'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_me';
  $strongarm->value = 'google';
  $export['location_geocode_me'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mg';
  $strongarm->value = 'google';
  $export['location_geocode_mg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mh';
  $strongarm->value = 'google';
  $export['location_geocode_mh'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mk';
  $strongarm->value = 'google';
  $export['location_geocode_mk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ml';
  $strongarm->value = 'google';
  $export['location_geocode_ml'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mm';
  $strongarm->value = 'google';
  $export['location_geocode_mm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mn';
  $strongarm->value = 'google';
  $export['location_geocode_mn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mo';
  $strongarm->value = 'google';
  $export['location_geocode_mo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mp';
  $strongarm->value = 'google';
  $export['location_geocode_mp'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mq';
  $strongarm->value = 'google';
  $export['location_geocode_mq'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mr';
  $strongarm->value = 'google';
  $export['location_geocode_mr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ms';
  $strongarm->value = 'google';
  $export['location_geocode_ms'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mu';
  $strongarm->value = 'google';
  $export['location_geocode_mu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mw';
  $strongarm->value = 'google';
  $export['location_geocode_mw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mx';
  $strongarm->value = 'google';
  $export['location_geocode_mx'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_my';
  $strongarm->value = 'google';
  $export['location_geocode_my'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_mz';
  $strongarm->value = 'google';
  $export['location_geocode_mz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_na';
  $strongarm->value = 'google';
  $export['location_geocode_na'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ne';
  $strongarm->value = 'google';
  $export['location_geocode_ne'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ng';
  $strongarm->value = 'google';
  $export['location_geocode_ng'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ni';
  $strongarm->value = 'google';
  $export['location_geocode_ni'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_nl';
  $strongarm->value = 'google';
  $export['location_geocode_nl'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_no';
  $strongarm->value = 'google';
  $export['location_geocode_no'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_np';
  $strongarm->value = 'google';
  $export['location_geocode_np'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_nr';
  $strongarm->value = 'google';
  $export['location_geocode_nr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_nu';
  $strongarm->value = 'google';
  $export['location_geocode_nu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_nz';
  $strongarm->value = 'google';
  $export['location_geocode_nz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_om';
  $strongarm->value = 'google';
  $export['location_geocode_om'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pa';
  $strongarm->value = 'google';
  $export['location_geocode_pa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pe';
  $strongarm->value = 'google';
  $export['location_geocode_pe'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pg';
  $strongarm->value = 'google';
  $export['location_geocode_pg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ph';
  $strongarm->value = 'google';
  $export['location_geocode_ph'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pk';
  $strongarm->value = 'google';
  $export['location_geocode_pk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pl';
  $strongarm->value = 'google';
  $export['location_geocode_pl'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pn';
  $strongarm->value = 'google';
  $export['location_geocode_pn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_pt';
  $strongarm->value = 'google';
  $export['location_geocode_pt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_py';
  $strongarm->value = 'google';
  $export['location_geocode_py'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_qa';
  $strongarm->value = 'google';
  $export['location_geocode_qa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_re';
  $strongarm->value = 'google';
  $export['location_geocode_re'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ro';
  $strongarm->value = 'google';
  $export['location_geocode_ro'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_rs';
  $strongarm->value = 'google';
  $export['location_geocode_rs'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ru';
  $strongarm->value = 'google';
  $export['location_geocode_ru'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_rw';
  $strongarm->value = 'google';
  $export['location_geocode_rw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sa';
  $strongarm->value = 'google';
  $export['location_geocode_sa'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sb';
  $strongarm->value = 'google';
  $export['location_geocode_sb'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sc';
  $strongarm->value = 'google';
  $export['location_geocode_sc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sd';
  $strongarm->value = 'google';
  $export['location_geocode_sd'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_se';
  $strongarm->value = 'google';
  $export['location_geocode_se'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sg';
  $strongarm->value = 'google';
  $export['location_geocode_sg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sh';
  $strongarm->value = 'google';
  $export['location_geocode_sh'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_si';
  $strongarm->value = 'google';
  $export['location_geocode_si'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sk';
  $strongarm->value = 'google';
  $export['location_geocode_sk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sl';
  $strongarm->value = 'google';
  $export['location_geocode_sl'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sm';
  $strongarm->value = 'google';
  $export['location_geocode_sm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sn';
  $strongarm->value = 'google';
  $export['location_geocode_sn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_so';
  $strongarm->value = 'google';
  $export['location_geocode_so'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_st';
  $strongarm->value = 'google';
  $export['location_geocode_st'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sv';
  $strongarm->value = 'google';
  $export['location_geocode_sv'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sy';
  $strongarm->value = 'google';
  $export['location_geocode_sy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_sz';
  $strongarm->value = 'google';
  $export['location_geocode_sz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_td';
  $strongarm->value = 'google';
  $export['location_geocode_td'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tg';
  $strongarm->value = 'google';
  $export['location_geocode_tg'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_th';
  $strongarm->value = 'google';
  $export['location_geocode_th'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tj';
  $strongarm->value = 'google';
  $export['location_geocode_tj'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tk';
  $strongarm->value = 'google';
  $export['location_geocode_tk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tl';
  $strongarm->value = 'google';
  $export['location_geocode_tl'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tm';
  $strongarm->value = 'google';
  $export['location_geocode_tm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tn';
  $strongarm->value = 'google';
  $export['location_geocode_tn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_to';
  $strongarm->value = 'google';
  $export['location_geocode_to'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tr';
  $strongarm->value = 'google';
  $export['location_geocode_tr'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tt';
  $strongarm->value = 'google';
  $export['location_geocode_tt'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tv';
  $strongarm->value = 'google';
  $export['location_geocode_tv'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tw';
  $strongarm->value = 'google';
  $export['location_geocode_tw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_tz';
  $strongarm->value = 'google';
  $export['location_geocode_tz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ua';
  $strongarm->value = 'google';
  $export['location_geocode_ua'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ug';
  $strongarm->value = 'google';
  $export['location_geocode_ug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_uk';
  $strongarm->value = 'google';
  $export['location_geocode_uk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_us';
  $strongarm->value = 'google';
  $export['location_geocode_us'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_uy';
  $strongarm->value = 'google';
  $export['location_geocode_uy'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_uz';
  $strongarm->value = 'google';
  $export['location_geocode_uz'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_vc';
  $strongarm->value = 'google';
  $export['location_geocode_vc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ve';
  $strongarm->value = 'google';
  $export['location_geocode_ve'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_vn';
  $strongarm->value = 'google';
  $export['location_geocode_vn'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_wf';
  $strongarm->value = 'google';
  $export['location_geocode_wf'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ws';
  $strongarm->value = 'google';
  $export['location_geocode_ws'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_ye';
  $strongarm->value = 'google';
  $export['location_geocode_ye'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_za';
  $strongarm->value = 'google';
  $export['location_geocode_za'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_zm';
  $strongarm->value = 'google';
  $export['location_geocode_zm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_zw';
  $strongarm->value = 'google';
  $export['location_geocode_zw'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_jit_geocoding';
  $strongarm->value = 0;
  $export['location_jit_geocoding'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_locpick_macro';
  $strongarm->value = '[gmap]';
  $export['location_locpick_macro'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maplink_external';
  $strongarm->value = 0;
  $export['location_maplink_external'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maplink_external_method';
  $strongarm->value = 'target="_blank"';
  $export['location_maplink_external_method'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_art';
  $strongarm->value = '1';
  $export['location_maxnum_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_blog';
  $strongarm->value = '0';
  $export['location_maxnum_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_education';
  $strongarm->value = '0';
  $export['location_maxnum_education'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_event';
  $strongarm->value = '1';
  $export['location_maxnum_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_forum';
  $strongarm->value = '1';
  $export['location_maxnum_forum'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_group';
  $strongarm->value = '0';
  $export['location_maxnum_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_idea';
  $strongarm->value = '0';
  $export['location_maxnum_idea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_item';
  $strongarm->value = '1';
  $export['location_maxnum_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_membership';
  $strongarm->value = '0';
  $export['location_maxnum_membership'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_page';
  $strongarm->value = '1';
  $export['location_maxnum_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_profile';
  $strongarm->value = '1';
  $export['location_maxnum_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_simplenews';
  $strongarm->value = '1';
  $export['location_maxnum_simplenews'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_art';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '4',
      'collapsible' => 1,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),
      ),
    ),
    'display' => array(
      'weight' => '4',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 0,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_art'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_blog';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_blog'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_education';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_education'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_event';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_event'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_forum';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_forum'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_group';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_idea';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_idea'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_item';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '1',
      'collapsible' => 1,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => '1',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_membership';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_membership'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_page';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),

      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_profile';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '11',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),
      ),
    ),
    'display' => array(
      'weight' => '11',
      'hide' => array(
        'name' => 1,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_simplenews';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),
      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_simplenews'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_user';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '25',
        ),
      ),
      'register' => 0,
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 1,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
    ),
  );
  $export['location_settings_user'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_use_province_abbreviation';
  $strongarm->value = '1';
  $export['location_use_province_abbreviation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_usegmap';
  $strongarm->value = 1;
  $export['location_usegmap'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_append_node_title';
  $strongarm->value = 1;
  $export['menu_breadcrumb_append_node_title'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_append_node_url';
  $strongarm->value = 1;
  $export['menu_breadcrumb_append_node_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_determine_menu';
  $strongarm->value = 1;
  $export['menu_breadcrumb_determine_menu'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_hide_on_single_item';
  $strongarm->value = 0;
  $export['menu_breadcrumb_hide_on_single_item'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_menu_patterns';
  $strongarm->value = '/^book-toc-\\d+$/Books/';
  $export['menu_breadcrumb_menu_patterns'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_menus';
  $strongarm->value = array(
    'accountmenu' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Account menu',
      'name' => 'accountmenu',
    ),
    'menu-admin' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Administer',
      'name' => 'menu-admin',
    ),
    'menu-category' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Category',
      'name' => 'menu-category',
    ),
    'menu-footerpos1' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Footer pos 1',
      'name' => 'menu-footerpos1',
    ),
    'menu-footerpos2' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Footer pos 2',
      'name' => 'menu-footerpos2',
    ),
    'menu-footerpos3' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Footer pos 3',
      'name' => 'menu-footerpos3',
    ),
    'menu-profilemenu' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'name' => 'menu-profilemenu',
    ),
    'menu-toolbar' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Toolbar',
      'name' => 'menu-toolbar',
    ),
    'menu_breadcrumb_default_menu' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu_breadcrumb_default_menu',
      'title' => 'menu_breadcrumb_default_menu',
      'name' => 'menu_breadcrumb_default_menu',
    ),
    'navigation' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Navigation',
      'name' => 'navigation',
    ),
    'primary-links' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Primary links',
      'name' => 'primary-links',
    ),
    'secondary-links' => array(
      'enabled' => 1,
      'weight' => '0',
      'type' => 'menu',
      'title' => 'Secondary links',
      'name' => 'secondary-links',
    ),
    'admin_menu' => array(
      'enabled' => 1,
      'weight' => '1',
      'type' => 'menu',
      'title' => 'Administration menu',
      'name' => 'admin_menu',
    ),
  );
  $export['menu_breadcrumb_menus'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_breadcrumb_pattern_matches_rebuild';
  $strongarm->value = FALSE;
  $export['menu_breadcrumb_pattern_matches_rebuild'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_profile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_ajax_api';
  $strongarm->value = 0;
  $export['recaptcha_ajax_api'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_private_key';
  $strongarm->value = '6LchNMoSAAAAAIv5EvFEpmrEoNNckpo8KkzFjdcx';
  $export['recaptcha_private_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_public_key';
  $strongarm->value = '6LchNMoSAAAAANphW8bBT5zJo60qJQR8WDu6n4kH';
  $export['recaptcha_public_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_secure_connection';
  $strongarm->value = 0;
  $export['recaptcha_secure_connection'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_tabindex';
  $strongarm->value = '';
  $export['recaptcha_tabindex'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'recaptcha_theme';
  $strongarm->value = 'red';
  $export['recaptcha_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_profile';
  $strongarm->value = '1';
  $export['upload_profile'] = $strongarm;

  return $export;
}
