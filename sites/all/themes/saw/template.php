<?php
function student_art_preprocess_page(&$vars) {
  $vars['tertiary_links'] = menu_tertiary_links();
}

function menu_tertiary_links() {
  return menu_navigation_links(variable_get('menu_primary_links_source', 'primary-links'), 2);
}
?>
