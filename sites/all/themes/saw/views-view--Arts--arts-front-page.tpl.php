<div class="arts-front-page-view">

	<?php
		global $no_top; $no_top = true;
		
		$view1 = views_embed_view ('Arts', 'page_1');
		
		$no_up_widgets = false;
	?>

	
	<?php echo $view1; ?>
   
</div>
	