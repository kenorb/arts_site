<?php
function student_art_preprocess_page(&$vars) {
  $vars['tertiary_links'] = menu_tertiary_links();
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

?>
