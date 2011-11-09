<?php

	function vd ($w)
	{
		echo '<pre style="text-align: left; width: 500px; overflow: auto; font-size: 11px; font-family: Consolas; backround-color: #fff; clear: both; padding: 10px">';
		print_r ($w);
		echo '</pre>';
	}
	

?>

<div class="recent-activity-rows">

	<?php foreach ($view -> style_plugin -> rendered_fields as $fieldId => $row): ?>
	
		<div class="recent-activity-row">
	
			<div class="time-elapsed">
				<?php echo $row ['created']; ?>
			</div>

			<div class="message">
				<?php echo $row ['message']; ?>
			</div>
				
		</div>
		
	
	<?php endforeach; ?>
	
</div>
