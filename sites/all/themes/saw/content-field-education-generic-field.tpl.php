<?php

	module_load_include ('inc', 'hierarchical_select', 'includes/common');

	$vid		= @$field ['vid'];
	$tid		= content_taxonomy_field_get_parent ($field);
	$depth	= @$field ['depth'];
	
	
//	var_dump (function_exists ('hierarchical_select_common_config_get'));
	
//	die ('ok');

  $config_id = "content-taxonomy-$field_name";
  $config = hierarchical_select_common_config_get ($config_id);
  $config += array(
    'module' => 'hs_content_taxonomy',
    'params' => array(
      'vid'   => $vid,
      'tid'   => $tid,
      'depth' => $depth,
    ),
  );
  $selection = array();
	
	
  // Cycle through elements.
  foreach (element_children($element) as $key) {
	
		foreach ($element[$key] as $id => $item)
		{
			if (isset($element[$key][$id]['#item']['value'])) {
				$selection[] = $element[$key][$id]['#item']['value'];
			}
		}
  }
	
//	print_r ($selection);
//	exit;

  // Generate a dropbox out of the selection. This will automatically
  // calculate all lineages for us.
  $dropbox = _hierarchical_select_dropbox_generate ($config, $selection);
	
	$tree = array ();
	
	foreach ($dropbox -> lineages as $lineage)
	{
		$rootLabel = $lineage [0] ['label'];
		
		if (!@$tree [$rootLabel])
			$tree [$rootLabel] = array ();
		
		$tree [$rootLabel] [] = $lineage [1] ['label'];
	}
	
	$label = $field ['widget'] ['label'];
	
?>

<?php if ($tree): ?>
	<div class="hierarchical-select-tree">
		<div class="field-label"><?php echo $label; ?></div>
		<?php foreach ($tree as $label => $children): ?>
			<div class="lineage">
				<div class="label"><?php echo $label; ?></div>
				<?php foreach ($children as $sublabel): ?>
					<?php if (!empty ($sublabel)): ?>
						<div class="sublabel"><?php echo $sublabel; ?></div>
					<?php endif; ?>
				<?php endforeach; ?>
				<div class="clear-both"></div>
			</div>
		<?php endforeach; ?>
	</div>
<?php endif; ?>