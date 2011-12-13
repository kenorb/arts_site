<div class="events-page-view">

	<?php
		global $no_up_widgets; $no_up_widgets = true;
		
		
		
		$view1 = views_embed_view ('Events', 'featured_events');
		$view2 = views_embed_view ('Events', 'events');
		
		$no_up_widgets = false;
	?>

	
	<?php global $up_widgets; echo $up_widgets; ?>

	<h2>Featured Events</h2>

	<?php echo $view1; ?>
	
	<h2>Events</h2>
	
	<?php echo $view2; ?>
	
   
</div>