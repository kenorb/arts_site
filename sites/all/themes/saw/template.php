<?php
function student_art_preprocess_page(&$vars) {
  $vars['tertiary_links'] = menu_tertiary_links();
}

function saw_preprocess_page (&$vars) {
	removetab ('Personal Heartbeat', $vars);
	removetab ('OpenID Identities', $vars);
	removetab ('Track Page Visits', $vars);
	removetab ('friends_gallery', $vars);
	removetab ('edit panel', $vars);
	removetab ('signups', $vars);
	removetab ('votes', $vars);
	removetab ('activity', $vars);
	
}

function menu_tertiary_links() {
  return menu_navigation_links(variable_get('menu_primary_links_source', 'primary-links'), 2);
}

/**
 * Forum hook. Provides:
 * - Removes unnecesary subforums (#291)
 * @param array $variables
 */
function saw_preprocess_forum_list (&$variables) {
	
	/*
	 * #291: Removes unnecesary subforums. 
	 */
	
	if (!count ($variables ['forums']))
	// No forums - nothing to do
		return;

	$keys			= array_keys ($variables ['forums']);
	$numKeys	= count ($keys);
	
	for ($i = 0; $i < count ($keys); $i++)
	// Traversing all the forums
		if ($variables ['forums'] [$keys [$i]] -> is_container)
		// This forum is a container
			for ($j = 0; $j < count ($keys); $j++)
			// Traversing all the forums again
				if (@$variables ['forums'] [$keys [$j]] -> parents)
					foreach ($variables ['forums'] [$keys [$j]] -> parents as $parent)
					// Traversing this forum parents
						if ($parent == $keys [$i])
						// If this forum has visible parent container then it is destroyed
							unset ($variables ['forums'] [$keys [$j]]);
}

function removetab ($label, &$vars)
{
  $tabs = explode("\n", $vars['tabs']);
  $vars['tabs'] = '';

  foreach ($tabs as $tab) {
    if (stripos($tab, $label) === FALSE) {
      $vars['tabs'] .= $tab . "\n";
    }
  }
}

?>