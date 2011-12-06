<div class="marketplace-page-view">

	<?php
		global $no_up_widgets; $no_up_widgets = true;
		
		$view1 = views_embed_view ('Marketplace', 'marketplace_featured_items');
		$view2 = views_embed_view ('Marketplace', 'marketplace_normal_items');
		
		$no_up_widgets = false;
	?>

	
	<?php global $up_widgets; echo $up_widgets; ?>

	<h2>Featured Items</h2>

	<?php echo $view1; ?>
	
	<h2>Items</h2>
	
	<?php echo $view2; ?>
	
   
</div>