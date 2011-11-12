<?php

	function vd ($w)
	{
		echo '<pre style="text-align: left; width: 500px; overflow: auto; font-size: 11px; font-family: Consolas; backround-color: #fff; clear: both; padding: 10px">';
		print_r ($w);
		echo '</pre>';
	}

	$trail		= end (menu_get_active_trail ());
	
	$viewName	= strtolower ($view -> query -> pager -> display -> display_title);
	
	
?>

<div class="arts-filters">
	<span class="preface">You can filter by:</span>
	<a href="/arts/most-viewed" class="filter <?php if ($viewName == 'most viewed'): ?>active<?php endif; ?>">Most viewed</a>
	<a href="/arts/most-recent" class="filter <?php if ($viewName == 'most recent'): ?>active<?php endif; ?>">Most recent</a>
	<a href="/arts/best-selling-artists" class="filter <?php if ($viewName == 'best selling artists'): ?>active<?php endif; ?>">Best selling artists</a>
	<a href="/arts/featured-artists" class="filter <?php if ($viewName == 'featured artists'): ?>active<?php endif; ?>">Featured artists</a>
	<a href="/arts/highest-rated" class="filter <?php if ($viewName == 'highest rated'): ?>active<?php endif; ?>">Highest rated</a>
</div>

<div class="arts-rows">

	<?php foreach ($view -> style_plugin -> rendered_fields as $fieldId => $row): ?>
		<div class="arts-row">
			<div class="image">
				<?php echo $row ['field_image_fid']; ?>
			</div>
				<div class="details">
					<table cellpadding="0" cellspacing="0" border="0">
						<tbody>
							<tr>
								<td class="title">
									<?php echo $row ['title']; ?>
								</td>
								<td class="price">
									<?php echo $row ['name']; ?>
								</td>
							</tr>
							<tr>
								<td class="original-price">
									<b>Original</b> - <?php echo $row ['sell_price']; ?>
								</td>
								<td class="price">
								</td>
							</tr>
						</tbody>
					</table>
				</div>
		</div>
	<?php endforeach; ?>
	
	<div class="clear"></div>
	
</div>


<?php echo $view -> exposed_widgets; ?>

<?php echo $pager; ?>