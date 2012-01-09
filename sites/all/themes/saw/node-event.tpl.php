<?php drupal_add_js (drupal_get_path ('module', 'saw_art') . "/../../../libraries/galleria/galleria-1.2.5.min.js", "saw_art"); ?>

<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

<?php

	//echo '<pre>';
	//print_r ($node);
	//echo '</pre>';
	//exit;
?>

<?php print $picture ?>

<?php if (!$page): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <div class="content">
		<div class="node-event">

			<table class="top">
				<tr>
					<td>
						<div class="datetime">
							<img src="/sites/all/themes/saw/images/calendar.png" class="cal" />
							<?php echo preg_replace ('((\d\d\:\d\d) - )', '\1 <img src="/sites/all/themes/saw/images/arrow-right.png" class="arrow" /> ', preg_replace ('([a-zA-Z]+)', '<b>\0</b>', strip_tags ($node -> field_event_date [0] ['view']))); ?>
						</div>
					</td>
					<td class="right">
						<?php echo str_replace ('<a name="signup"></a>', '', $node -> content ['signup'] ['#value']); ?>
					</td>
				</tr>
			</table>
			
			<div class="separator"></div>
		
			<table style="width: 100%">
				<tr>
					<td class="left-column">
					
						<div class="description">
							<?php echo $node -> content ['body']['#value']; ?>
						</div>
					
						<div class="featured">
						
							<?php if ($node -> field_featured_in && $node -> field_featured_in [0] ['nid']): ?>
							
								<div class="separator"></div>
								
								<div>
									<h3>Featured with</h3>
									<ul>
										<?php foreach ($node -> field_featured_in as $ref): if (!$ref ['nid']) continue; ?>
											<li><?php echo $ref['view']; ?></li>
										<?php endforeach; ?>
									</ul>
								</div>
								
							<?php endif; ?>

							<?php if ($node -> field_referrers_art && @$node -> field_referrers_art [0] ['items']): ?>
							
								<div class="separator"></div>
									
								<div>
									<h3>Featured by</h3>
									<ul>
										<?php foreach ($node -> field_referrers_art [0] ['items'] as $ref): if (!$ref ['nid']) continue; ?>
											<li><a href="/node/<?php echo $ref ['nid']; ?>"><?php echo $ref['title']; ?></a></li>
										<?php endforeach; ?>
									</ul>
								</div>
								
							<?php endif; ?>
							
						</div>
						
					</td>
				<?php if (!$view): ?>
					<td class="middle-column">
					
						<div class="art-screen">
							<?php foreach ($node -> content ['field_image'] as $img): ?>
								<?php echo $img; ?>
							<?php endforeach; ?>
						</div>
						<script>
							$(function () {
							
								Galleria.loadTheme ('/sites/all/libraries/galleria/themes/classic/galleria.classic.min.js');
								
								var Gallery = $("div.art-screen").galleria ({
										preload: 3,
										transition: 'fade',
										height: 400,
										clicknext: true
										
								});
								
								$('td.prev input').click (function () {
									Galleria.get (0).prev ();
								})
								
								$('td.next input').click (function () {
									Galleria.get (0).next ();
								})
							
								csses = [
									{},
									{
										'width':							$('.galleria-container').width (),
										'height':							'600px',
										'overflow':						null,
										'top':								'-340px',
										'left':								'0px',
										'z-index':						'1000',
										'background-color':		'#000',
										'opacity':						0.9
									}];
									
								var GalleryToggleThumbnails = function () {
										
									if (typeof GalleryShowThumbnail == 'undefined')
										GalleryShowThumbnail = false;
										
									GalleryShowThumbnail = !GalleryShowThumbnail;
									
									if (typeof csses [0].width == 'undefined')
										csses [0] = {
											'width':						'5000px',
											'height':						$('.galleria-thumbnails').css ('height'),
											'overflow':					$('.galleria-thumbnails').css ('overflow'),
											'top':							$('.galleria-thumbnails').css ('top'),
											'left':							$('.galleria-thumbnails').css ('left') + 'px',
											'z-index':					$('.galleria-thumbnails').css ('z-index'),
											'background-color':	$('.galleria-thumbnails').css ('background-color'),
											'opacity':					$('.galleria-thumbnails').css ('opacity')
										}
									
									$('.galleria-thumbnails-list').css ('overflow', GalleryShowThumbnail ? null : 'hidden');
									
									$('.galleria-thumbnails').css (csses [GalleryShowThumbnail ? 1 : 0]);
									
									if (GalleryShowThumbnail)
										$('.galleria-thumbnails-list img').click (GalleryToggleThumbnails);
									else
										$('.galleria-thumbnails img').unbind ('click', GalleryToggleThumbnails);
									
									
									$('.galleria-thumbnails-container .galleria-image img').css (GalleryShowThumbnail ? {width: 100, height: 100} : {width: 40, height: 40});
									$('.galleria-thumbnails-container .galleria-image').css (GalleryShowThumbnail ? {width: 100, height: 100} : {width: 40, height: 40});
								};
								
								$('td.thumbs input').click (GalleryToggleThumbnails);
							})
						</script>
						
					</td>
				<?php endif; ?>
				</tr>
			</table>

		<?php if (!$view): ?>
			<div class="separator"></div>
	
			<div class="meta-x">
				<table style="width: 100%">
					<tr>
						<td>
							<?php if ($submitted): ?>
								<span class="submitted-x"><?php print $submitted ?></span>
							<?php endif; ?>
							
							<div class="related-groups">
								Related groups:
								<?php foreach ($node -> og_groups_both as $id => &$title): ?>
								
									<a href="/<?php echo drupal_get_path_alias ('node/' . $id); ?>" /><?php echo $title; ?></a>
									<?php if (end ($node -> og_groups_both) != $title): ?> <?php endif; ?>
									
								
								<?php endforeach; ?>
							</div>
							
							<?php if ($terms): ?>
								<div class="terms terms-inline">Tags: <?php print $terms ?></div>
							<?php endif;?>

						</td>
						<td>
							<div class="fivestar">
								<?php echo $node -> content ['fivestar_widget']['#value']; ?>
							</div>
						</td>
					</tr>
				</table>

			</div>
			
			<div class="separator"></div>
			
		</div>
		
	<?php endif; ?>
		
	
    <?php #echo '<pre style="font-size: 0.8em; font-family: Consolas; background-color: #fff; text-align: left;">'; echo htmlentities (print_r ($node, true)); echo '</pre>'; ?>
  </div>

	<?php if (!$view): ?>
		<?php print $links; ?>
	<?php endif; ?>
</div>

<div class="separator"></div>