<?php

/**
 * Preprocessor for theme('quickbar').
 */
function quickbar_preprocess_quickbar(&$vars) {
  $vars['collapsed'] = TRUE;

  // Classes for the main wrapper.
  $vars['wrapper_class'] = '';

  // If the toolbar should be sticky add the sticky class.
  if (variable_get('quickbar_sticky_' . $vars['rid'], FALSE)) {
    $vars['wrapper_class'] .= ' sticky';
  }
  
  // If top-level links should not be followed, add 'primary-nofollow' class to the body.
  if (variable_get('quickbar_nofollow_' . $vars['rid'], FALSE)) {
    $vars['wrapper_class'] .= ' primary-nofollow';
  }
  
  foreach ($vars['tree'] as $depth => $menus) {
    foreach ($menus as $href => $links) {
      $class = ($depth > 0) ? 'collapsed' : '';
      if (($depth - intval(empty($links))) > 0 && quickbar_in_active_trail($href)) {
        $class = '';
        $vars['collapsed'] = FALSE;
      }
      $id = str_replace('/', '-', $href);

      // If we aren't on the top level menu, provide a way to get to the top level page.
      if ($depth > 0 && !empty($links)) {
        // If menu item container module is not enabled or it is and the link
        // isn't a menu item container then add the view all link.
        if (!module_exists('menu_item_container') || strpos($href, 'menu-item-container') === FALSE) {
          $links['view-all'] = array(
            'title' => t('View all'),
            'href' => $href,
          );
        }
      }
      $vars["tree_{$depth}"][$id] = theme('links', $links, array('class' => "links clear-block $class", 'id' => "quickbar-{$id}"));
    }
  }
}
