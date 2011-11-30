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
		
			<table>
				<tr>
					<td class="left-column">
						<div class="is-for-sale">
							For Sale
						</div>
					
						<div class="original">
							<h3>Original Artwork</h3>
							<div class="available">
								<span class="num">4</span> Available <div class="right"><span class="price">30</span></div>
							</div>
							<div class="centered">
								<input type="button" value="Add to cart" />
							</div>
						</div>
						
						<div class="prints">
							<h3>Prints</h3>
							
							<div class="available">
								<span class="num">4</span> Available <div class="right"><span class="price">30</span></div>
							</div>
							<div class="centered">
								<input type="button" value="Add to cart" />
							</div>
						</div>
						
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
						
						<div class="centered">
							<input type="button" value="Add to favourites" />
							<input type="button" value="Bookmark" />
						</div>
						
						<div class="separator"></div>
						
						<div>
							<h3>Featured with</h3>
						</div>
						
						<div class="separator"></div>
						
						<div>
							<h3>Featured by</h3>
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
											'width':						$('.galleria-thumbnails').css ('width'),
											'height':						$('.galleria-thumbnails').css ('height'),
											'overflow':					$('.galleria-thumbnails').css ('overflow'),
											'top':							$('.galleria-thumbnails').css ('top'),
											'left':							$('.galleria-thumbnails').css ('left'),
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
									
									
									$('.galleria-thumbnails-container .galleria-image img').css (GalleryShowThumbnail ? {width: 100, height: 100} : {width: 53, height: 40});
									$('.galleria-thumbnails-container .galleria-image').css (GalleryShowThumbnail ? {width: 100, height: 100} : {width: 53, height: 40});
								};
								
								$('td.thumbs input').click (GalleryToggleThumbnails);
							})
						</script>
						
						<table>
							<tr>
								<td class="general-info">
									<div class="name">Artwork name</div>
									<div class="by">By <a href="#">User</a></div>
									<div class="type">Painting</div>
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
							Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam dictum auctor purus, ac aliquam purus blandit in. Donec vestibulum posuere arcu ut varius. Donec fermentum sodales nisi in feugiat. Sed pellentesque dapibus nibh in sodales. Aenean in magna ut leo elementum auctor. Donec porttitor lorem sit amet neque egestas eu pellentesque nunc dignissim. Nam nec leo eu nulla dignissim fermentum a at massa. Phasellus dictum eros sed sapien lacinia blandit.<br /><br />
							Aenean sapien metus, ullamcorper sit amet facilisis a, scelerisque at ante. Suspendisse potenti. Suspendisse vulputate lectus at felis auctor vestibulum. Maecenas eget congue sem. Praesent consequat ipsum in nunc gravida tincidunt. Donec cursus pharetra arcu, ac volutpat mauris euismod ut. Mauris auctor dapibus aliquet.<br /><br />
							Pellentesque ligula nulla, commodo elementum viverra quis, tempor et ante. In hac habitasse platea dictumst. Maecenas adipiscing auctor sollicitudin. Donec purus orci, iaculis quis sollicitudin ut, ultrices sed mi. Vestibulum facilisis sem non purus dictum interdum. Sed ultricies laoreet tortor, nec tempor nisl ultricies in. Mauris et metus eu ligula molestie lobortis eu sed massa. Vestibulum vehicula semper orci, eget molestie metus ultricies vitae. Phasellus venenatis tempus facilisis. Morbi velit turpis, interdum at consectetur id, faucibus rutrum arcu. Quisque porta fringilla justo, eu venenatis ipsum dapibus in. Quisque arcu dolor, scelerisque suscipit vestibulum id, pulvinar quis massa. Sed in lacus tortor, quis fermentum mi. Aliquam ut sem urna, et interdum nisi. Nunc libero leo, porta blandit euismod bibendum, tempor a dolor. <br /><br />
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