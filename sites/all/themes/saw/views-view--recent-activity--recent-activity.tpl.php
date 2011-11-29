	<div class="recent-activity-rows">


	<?php foreach ($view -> style_plugin -> rendered_fields as $fieldId => $row): ?>
	
		<div class="recent-activity-row">
	
			<div class="time-elapsed">
				<?php echo $row ['created']; ?>
			</div>

			<div class="message">
				<?php if (!empty ($row ['name'])) echo $row ['name']; ?>
				<?php echo $row ['message']; ?>
			</div>
				
		</div>
		
	
	<?php endforeach; ?>
	
</div>
