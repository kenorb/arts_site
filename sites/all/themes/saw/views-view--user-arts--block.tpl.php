<?php

	function vd ($w)
	{
		echo '<pre style="text-align: left; width: 500px; overflow: auto; font-size: 11px; font-family: Consolas; backround-color: #fff; clear: both; padding: 10px">';
		print_r ($w);
		echo '</pre>';
	}
	
?>

<div id="user-arts-slideshow-container"></div>

<script>

		$(function () {
		
			slideshow = new CC.Slideshow (
				'#user-arts-slideshow-container',
				<?php echo json_encode ($view -> style_plugin -> rendered_fields); ?>,
				'field_image_fid',
				'field_image_fid_1',
				'title',
				'teaser',
				10000
				);
				
			slideshow.start ();
		
		})

</script>