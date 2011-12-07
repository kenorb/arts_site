<div class="featured-events">
  <?php
		global $fieldId;
	?>
	<?php if ($view -> style_plugin -> rendered_fields) foreach ($view -> style_plugin -> rendered_fields as $row): $fieldId++; ?>
  <?php
  
  	if (!function_exists ('featured_events_get_time'))
  	{
	  	function featured_events_get_time ($row)
	  	{
	  		preg_match_all ('/([a-zA-Z]+), ([0-9]+)\/([0-9]+)\/([0-9]+)( - ([0-9]+):([0-9]+))?/', $row, $matches);
	  		
	  		return (object)array (
	  			'dayName'			=> $matches [1][0],
	  			'dayOfMonth'	=> $matches [2][0],
	  			'month'				=> $matches [3][0],
	  			'year'				=> $matches [4][0],
	  			'hour'				=> $matches [6][0],
	  			'minutes'			=> $matches [7][0]
	  		);
	  	}
  	}
  
  	$dateStart	= featured_events_get_time (strip_tags ($row ['field_event_date_value']));
  	$dateEnd		= featured_events_get_time (strip_tags ($row ['field_event_date_value2']));
  ?>
  <script>
    $(function () {
      // Will colorize callendar
      $('td[id=calendar-<?php echo $dateStart -> year; ?>-<?php echo $dateStart -> month; ?>-<?php echo $dateStart -> dayOfMonth; ?>]').addClass ('background-m' + '<?php echo $fieldId; ?>');
      $('td[date=<?php echo $dateStart -> year; ?>-<?php echo $dateStart -> month; ?>-<?php echo $dateStart -> dayOfMonth; ?>]').addClass ('background-' + '<?php echo $fieldId; ?>').addClass ('background-x');
      //$('td[date=<?php echo $dateStart -> year; ?>-<?php echo $dateStart -> month; ?>-<?php echo $dateStart -> dayOfMonth; ?>] .calendar').addClass ('background-m' + '<?php echo $fieldId; ?>');
      //$('td[date=<?php echo $dateStart -> year; ?>-<?php echo $dateStart -> month; ?>-<?php echo $dateStart -> dayOfMonth; ?>] .cutoff').addClass ('background-m' + '<?php echo $fieldId; ?>');
      
    });
  </script>
	<div class="featured-events-row background-<?php echo $fieldId; ?>">
    <table>
      <tbody>
        <tr>
			    <td class="left-column">
						<div class="image">
							<?php echo $row ['field_image_fid']; ?>
						</div>
			    </td>
					<td class="middle-column">
			      <div class="title">
            	<?php echo $row ['title']; ?>
            </div>
            <div class="location">
            	<?php echo ucwords ($row ['city']); ?>, <?php echo $row ['country']; ?>
            </div>
            <div class="description">
          		<?php echo substr ($row ['body'], 0, 200); ?>  
	            <?php echo (strlen ($row ['body']) > 200) ? ('... ' . $row ['view_node']) : ''; ?>
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
                    <td class="datetime">
											<?php if ($dateStart -> year == $dateEnd -> year && $dateStart -> month == $dateEnd -> month && $dateStart -> dayOfMonth == $dateEnd -> dayOfMonth): ?>
                      	<?php if ($dateStart -> hour !== ''): ?>
	                        <div class="time">
	                        	<?php echo $dateStart -> hour; ?>:<?php echo $dateStart -> minutes; ?>
	                          <?php if ($dateEnd -> hour !== ''): ?>
	                            - <?php echo $dateEnd -> hour; ?>:<?php echo $dateEnd -> minutes; ?>
	                          <?php endif; ?>
	                        </div>
                        <?php endif; ?>
                        <div class="date">
                        	<?php echo $dateStart -> dayOfMonth; ?>/<?php echo $dateStart -> month; ?>/<?php echo $dateStart -> year; ?>
                        </div>
                      <?php else: ?>
                      	<table class="multidate">
                          <tbody>
                          	<tr>
                          		<td>
                                <div class="date">
                              		<?php echo $dateStart -> dayOfMonth; ?>/<?php echo $dateStart -> month; ?>/<?php echo $dateStart -> year; ?>,
                                </div>
                          		</td>
                              <td>
                                <div class="time">
                              		<?php echo $dateStart -> hour; ?>:<?php echo $dateStart -> minutes; ?> -
                                </div>
                              </td>
                          	</tr>
                          	<tr>
                          		<td>
                                <div class="date">
                              		<?php echo $dateEnd -> dayOfMonth; ?>/<?php echo $dateEnd -> month; ?>/<?php echo $dateEnd -> year; ?>,
                                </div>
                          		</td>
                              <td>
                                <div class="time">
                              		<?php echo $dateEnd -> hour; ?>:<?php echo $dateEnd -> minutes; ?>
                                </div>
                              </td>
                          	</tr>
                          </tbody>
                        </table>
                          	 
                    	<?php endif; ?>
                    </td>
										<!--
                    <td class="reservations">
                      <div>
                        <span class="available">0</span> Available
                      </div>
                      <div>
                        <span class="occupied">0</span> Occupied
                      </div>
                    </td>
                    <td class="price">
                      <span class="currency">£</span><span class="amount">0.00</span> 
                    </td>
										-->
                  </tr>
                </tbody>
              </table>
            </div>
            
					</td>
				</tr>
			</tbody>
		</table>
	</div>
	<?php endforeach; else echo '<p>No events found.</p>' ?>
</div>