<?php

function saw_preprocess_user_profile (&$user)
{
	global $user_education;
	
	$user_education = $user ['account'] -> content ['content_profile'] ['content_profile_education'] ['#children'];
	
	$user = array ();
	
}

function saw_theme (&$existing, $type, $theme, $path)
{
	return array (
		'user_register' => array (
			'arguments'	=> array ('form' => NULL),
			'template'	=> 'user-register'
		)
	);
}

function saw_user_register ($form)
{

	print_r ($form);
	exit;

	return _phptemplate_callback ('user_register', array ('form' => $form));
}

function student_art_preprocess_page(&$vars) {
  $vars['tertiary_links'] = menu_tertiary_links();
}

function saw_preprocess_page (&$vars)
{
	$vars ['title']				= preg_replace ('/(Profile of (.*))/', "\\2's profile", $vars ['title']);
	$vars ['title']				= preg_replace ('/(Workspace: (.*))/', "Manage: \\2", $vars ['title']);
	$vars ['head_title']	= preg_replace ('/^Profile of (.*) \|/', "\\1's profile |", $vars ['head_title']);
	$vars ['head_title']	= preg_replace ('/(Workspace: (.*))/', "Manage: \\2", $vars ['head_title']);
	
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

	$keys					= array_keys ($variables ['forums']);
	$keysRemoved	= array ();
	$numKeys			= count ($keys);
	
	for ($i = 0; $i < count ($keys); $i++)
	// Traversing all the forums
		if ($variables ['forums'] [$keys [$i]])
		{
		// This forum is a container
			for ($j = 0; $j < count ($keys); $j++)
			// Traversing all the forums again
				if (@$variables ['forums'] [$keys [$j]] -> parents)
				{
					//var_dump ($variables ['forums'] [$keys [$j]]);

					$unsetted = false;
					
					foreach ($variables ['forums'] [$keys [$j]] -> parents as $parent)
					// Traversing this forum parents
					{
						if (($parent != 0 && in_array ($parent, $keys)) || $parent == $keys [$i])
						// If this forum has visible parent container then the forum is destroyed
						{
							$variables ['forums'] [$keys [$i]] -> is_container = true;
							
							unset ($variables ['forums'] [$keys [$j]]);
							
							$unsetted = true;
							
							break;
							
						}
						else
						if ($parent == 0)
							$variables ['forums'] [$keys [$i]] -> is_container = true;
					}
					
					if ($unsetted)
					{
						$i = -1;
						
						break;
					}
				}
			}

	$keys					= array_keys ($variables ['forums']);
	
	for ($i = 0; $i < count ($keys); $i++)
	{
		if ($variables ['forums'] [$keys [$i]] -> is_container)
		{
			$variables ['forums'] [$keys [$i]] -> num_topics	= '';
			$variables ['forums'] [$keys [$i]] -> num_posts		= '';
		}
	}
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

function saw_breadcrumb ($vars)
{
	if (!$vars)
		$vars [] = '<a href="/">Home</a>';
	
	if (($id = array_search ('<a href="/user/me">My account</a>', $vars)) !== false)
		unset ($vars [$id]);
		
	$uniques	= array ();
	$urls			= array ();
	
	foreach ($vars as $id => $var)
	{
		preg_match ('/>(.*?)</', $var, $matches1);
		preg_match ('/href="(.*?)"/', $var, $matches2);
		
		$url = '<a title="' . $matches1 [1] . '" href="' . $matches2 [1] . '">' . $matches1 [1] . '</a>';
		
		if (!array_key_exists ($matches2 [1], $urls) || strlen ($matches2 [1]) < $urls [$matches2 [1]])
		{
			unset ($urls [$matches2 [1]]);
		
			$urls [$matches2 [1]] = strlen ($matches2 [1]);
		
			$uniques [$url] = $matches1 [1];
		}
	}
	
	$uniques = array_unique ($uniques);
	foreach ($uniques as &$var	)
		$var = str_replace ('Workspace: ', '', $var);
	
	return '<div class="breadcrumb">' . implode (' » ', array_keys ($uniques)) . '</div>';
}

?>