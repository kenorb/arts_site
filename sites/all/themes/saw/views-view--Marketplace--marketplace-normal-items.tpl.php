<div class="view-marketplace">

<?php global $no_widgets; global $no_up_widgets; ?>

<?php global $up_widgets; $up_widgets = $view -> exposed_widgets; ?>

<?php if (!$no_widgets && !$no_up_widgets): ?>

	<div class="views-exposed-form view-filters view">
		<?php echo $up_widgets; ?>
	</div>
	
<?php endif; ?>

	<?php if ($view -> style_plugin -> rendered_fields): ?>
		<?php foreach ($view -> style_plugin -> rendered_fields as $fieldId => $row): ?>
		
			<div class="view-marketplace-row">
				
				<table cellpadding="0" cellspacing="0">
					<tbody>
						<tr>
							<td class="left-column">
								<div class="image">
									<?php echo $row ['field_image_fid']; ?>
								</div>
							</td>
							<td class="middle-column">
								<div class="title">
									<?php echo $row ['title']; ?> - <span class="location"><?php echo ucwords ($row ['city']); ?>, <?php echo $row ['country']; ?></span>
								</div>
								<div class="description">
									<?php echo substr ($row ['teaser'], 0, 200); ?>  
									<?php echo (strlen ($row ['teaser']) > 200) ? ('... ' . $row ['view_node']) : ''; ?>
								</div>
							</td>
							<td class="right-column">
								<div class="user">
									<?php echo $row ['name']; ?>
								</div>

								<div class="details">
									<table>
										<tbody>
											<tr>
												<td class="price">
													<span class="amount"><?php echo $row ['sell_price']; ?></span> 
												</td>
											</tr>
										</tbody>
									</table>
								</div>
								
							</td>
						</tr>
					</tbody>
				</table>		
				
			</div>
	
		<?php endforeach; ?>	
	<?php else: ?>
		
		<p><i>No items found.</i></p>
		
	<?php endif; ?>
				
	

</div>

<?php if (!$no_widgets): ?>

	<?php echo $pager; ?>
  
<?php endif; ?>