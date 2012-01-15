<?php global $x; if (!$x++) drupal_add_js (drupal_get_path ('module', 'saw_art') . "/../../../libraries/galleria/galleria-1.2.6.min.js", "saw_art"); ?>

<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block type-<?php echo arg(0); ?> art-id-<?php global $artId; if (!isset ($artId)) $artId = 0; else $artId++; echo $artId; ?>">

<?php print $picture ?>

<?php if (!$page): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

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
							<span class="num"><?php echo (int)$node -> links ['statistics_counter'] ['title'] ?></span> Views
						</div>
						
						<div class="separator"></div>
						
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
							<?php foreach ($node -> field_image as $img): ?>
								<img src="/<?php echo $img ['filepath']; ?>" />
							<?php endforeach; ?>
						</div>
						<script>
							$(function () {
							
								<?php if (!$artId): ?>
									Galleria.loadTheme ('/sites/all/libraries/galleria/themes/classic/galleria.classic.min.js');
								<?php endif; ?>
								
								var current = $('.art-id-<?php echo $artId; ?>');
									
								current.find ('.art-screen').galleria ({
									preload: 3,
									transition: 'fade',
									height: 600,
									clicknext: true
								});
								
								current.find ('td.prev input').click (function () {
									Galleria.get (<?php echo $artId; ?>).prev ();
								})
								
								current.find ('td.next input').click (function () {
									Galleria.get (<?php echo $artId; ?>).next ();
								})
						
								var csses = [
									{},
									{
										'width':							current.find ('.galleria-container').width (),
										'height':							'600px',
										'overflow':						null,
										'top':								'-540px',
										'left':								'0px',
										'z-index':						'1000',
										'background-color':		'#000',
										'opacity':						0.9
									}];
									
								var GalleryToggleThumbnails = function () {
									console.log ('asd');
									var csses = arguments.callee.csses;
										
									if (typeof GalleryShowThumbnail<?php echo $artId; ?> == 'undefined')
										GalleryShowThumbnail<?php echo $artId; ?> = false;
										
									GalleryShowThumbnail<?php echo $artId; ?> = !GalleryShowThumbnail<?php echo $artId; ?>;
									
									if (typeof csses [0].width == 'undefined')
										csses [0] = {
											'width':						'5000px',
											'height':						current.find ('.galleria-thumbnails').css ('height'),
											'overflow':					current.find ('.galleria-thumbnails').css ('overflow'),
											'top':							current.find ('.galleria-thumbnails').css ('top'),
											'left':							current.find ('.galleria-thumbnails').css ('left') + 'px',
											'z-index':					current.find ('.galleria-thumbnails').css ('z-index'),
											'background-color':	current.find ('.galleria-thumbnails').css ('background-color'),
											'opacity':					current.find ('.galleria-thumbnails').css ('opacity')
										}
									
									current.find ('.galleria-thumbnails-list').css ('overflow', GalleryShowThumbnail<?php echo $artId; ?> ? null : 'hidden');
									
									current.find ('.galleria-thumbnails').css (csses [GalleryShowThumbnail<?php echo $artId; ?> ? 1 : 0]);
									
									if (GalleryShowThumbnail<?php echo $artId; ?>)
										current.find ('.galleria-thumbnails-list img').click (GalleryToggleThumbnails);
									else
										current.find ('.galleria-thumbnails img').unbind ('click', GalleryToggleThumbnails);
									
									
									current.find ('.galleria-thumbnails-container .galleria-image img').css (GalleryShowThumbnail<?php echo $artId; ?> ? {width: 100, height: 100} : {width: 40, height: 40});
									current.find ('.galleria-thumbnails-container .galleria-image').css (GalleryShowThumbnail<?php echo $artId; ?> ? {width: 100, height: 100} : {width: 40, height: 40});
								};
								
								GalleryToggleThumbnails.csses = csses;
								
								current.find ('td.thumbs input').click (GalleryToggleThumbnails);

							})
						</script>
						
						<table style="width: 100%">
							<tr>
								<td class="general-info">
									<div class="name"><?php echo ucfirst ($node -> title); ?></div>
									<span class="type">Painting</span> <span class="by">by <a href="/users/<?php preg_match ('/users\/([^"]+)"/', $variables ['name'], $matches); echo $matches [1]; ?>"><?php echo $node -> name; ?></a></span>
									
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
						
						
												
					</td>
				</tr>
			</table>
		</div>
	
		  <div class="meta">
  <?php if ($submitted): ?>
    <span class="submitted"><?php print $submitted ?></span>
  <?php endif; ?>

  <?php if ($terms): ?>
    <div class="terms terms-inline"><?php print $terms ?></div>
  <?php endif;?>
  </div>
	
    <?php #echo '<pre style="font-size: 0.8em; font-family: Consolas; background-color: #fff; text-align: left;">'; echo htmlentities (print_r ($node, true)); echo '</pre>'; ?>
  </div>

  <?php print $links; ?>
</div>