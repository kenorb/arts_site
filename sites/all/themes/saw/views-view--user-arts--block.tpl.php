<div id="user-arts-slideshow-container"></div>

<script>

		$(function () {
		
			slideshow = new CC.Slideshow (
				'#user-arts-slideshow-container',
				<?php echo json_encode ($view -> style_plugin -> rendered_fields); ?>,
				'field_image_fid',
				'field_image_fid_1',
				'daycount',
				'title',
				'teaser',
				400000
				);
				
			slideshow.start ();
		
		})

</script>