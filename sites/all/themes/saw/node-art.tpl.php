<?php drupal_add_js (drupal_get_path ('module', 'saw_art') . "/../../../libraries/galleria/galleria-1.2.5.min.js", "saw_art"); ?>

<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

<?php print $picture ?>

<?php if (!$page): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <div class="meta">
  <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted ?></span>
  <?php endif; ?>

  <?php if ($terms): ?>
    <div class="terms terms-inline"><?php print $terms ?></div>
  <?php endif;?>
  </div>

  <div class="content">
		<div class="node-art">
		
			<table style="width: 100%">
				<tr>
					<td class="left-column">
					
						<?php $numItemsAvailable = db_result (db_query ('SELECT stock FROM {uc_product_stock} WHERE nid = %d', $nid)); ?>
					
						<?php if ($node -> field_for_sell [0] ['value'] == 'on'): ?>
						
							<?php if ($numItemsAvailable > 0): ?>
							
								<div class="is-for-sale">
									For Sale
								</div>
							
								<div class="original">
									<?php if ($node -> field_copy_original [0] ['value'] == 'original'): ?>
										<h3>Original Artwork</h3>
									<?php else: ?>
										<h3>Prints</h3>
									<?php endif; ?>
									<div class="available">
										<span class="num"><?php echo $numItemsAvailable ?></span> Available <div class="right"><span class="price">£<?php echo number_format ($node -> sell_price, 2); ?></span></div>
									</div>
									<div class="centered">
										<?php echo $node -> content ['add_to_cart']['#value']; ?>
									</div>
								</div>
								
							<?php else: ?>
							
								<div class="out-of-stock">
									Currently Out Of Stock
								</div>
							
							<?php endif; ?>
						
						<?php else: ?>
							<div class="is-not-for-sale">
								Not For Sale
							</div>
						<?php endif; ?>
	
						
						<div class="separator"></div>
						
						<div class="ratings">
							<h3>Ratings</h3>
						</div>
						
						<div class="fivestar">
							<?php echo $node -> content ['fivestar_widget']['#value']; ?>
						</div>
						
						<div class="views">
							<span class="num">45</span> Views
						</div>
						
						<div class="centered favlinks">
							<div>
								<?php echo flag_create_link ('add_to_favourites', $node -> nid); ?> <?php echo flag_create_link ('bookmarks', $node -> nid); ?>
							</div>
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
										height: 600,
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
										'top':								'-540px',
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
						
						<table style="width: 100%">
							<tr>
								<td class="general-info">
									<div class="name"><?php echo ucfirst ($node -> title); ?></div>
									<span class="type">Painting</span> <span class="by">by <a href="/users/<?php echo $node -> name ?>"><?php echo $node -> name; ?></a></span>
									
								</td>
								<td class="art-screen-button prev">
									<input type="button" value="" />
								</td>
								<td class="art-screen-button thumbs">
									<input type="button" value="" />
								</td>
								<td class="art-screen-button next">
									<input type="button" value="" />
								</td>
							</tr>
						</table>
						
						<div class="separator"></div>
						
						<div class="description">
							<?php echo $node -> content ['body']['#value']; ?>
						</div>
						
						<div class="separator"></div>
												
					</td>
				</tr>
			</table>
		</div>
	
		
    <?php #echo '<pre style="font-size: 0.8em; font-family: Consolas; background-color: #fff; text-align: left;">'; echo htmlentities (print_r ($node, true)); echo '</pre>'; ?>
  </div>

  <?php print $links; ?>
</div>