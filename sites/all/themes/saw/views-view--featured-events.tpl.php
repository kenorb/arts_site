<?php
	function vd ($w)
	{
		echo '<pre style="font-size: 11px; font-family: Consolas; backround-color: #fff; clear: both; padding: 10px">';
		print_r ($w);
		echo '</pre>';
	}
?>

<div class="featured-events">
	<script>
    window._featuredEventId = 1;
  </script>
  
	<?php foreach ($view -> style_plugin -> rendered_fields as $fieldId => $row): ?>
  <?php
  
  	if (!function_exists ('featured_events_get_time'))
  	{
	  	function featured_events_get_time ($row)
	  	{
	  		preg_match_all ('/([a-zA-Z]+), ([0-9]+)\/([0-9]+)\/([0-9]+) - ([0-9]+):([0-9]+)/', $row, $matches);
	  		
	  		$matches [3][0] = '11';
	  		$matches [4][0] = '2011';
	  		
	  		return (object)array (
	  			'dayName'			=> $matches [1][0],
	  			'dayOfMonth'	=> $matches [2][0],
	  			'month'				=> $matches [3][0],
	  			'year'				=> $matches [4][0],
	  			'hour'				=> $matches [5][0],
	  			'minutes'			=> $matches [6][0]
	  		);
	  	}
  	}
  
  	$dateStart	= featured_events_get_time ($row ['field_event_date_value']);
  	$dateEnd		= featured_events_get_time ($row ['field_event_date_value_2']);
  ?>
  <script>
    $(function () {
      // Will colorize callendar
      $('td[date=<?php echo $dateStart -> year; ?>-<?php echo $dateStart -> month; ?>-<?php echo $dateStart -> dayOfMonth; ?>]').addClass ('background-' + '<?php echo $fieldId; ?>');
      
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
          		<?php echo substr ($row ['body'], 0, 500); ?>  
	            <?php echo (strlen ($row ['body']) > 500) ? '...' : ''; ?>
            </div>
					</td>
					<td class="right-column">
            <div class="user">
              Username
            </div>
            <div class="details">
              <table>
                <tbody>
                  <tr>
                    <td class="datetime">
                      <div class="time">
                        09:00 - 11:00
                      </div>
                      <div class="date">
                        21/12/2011
                      </div>
                    </td>
                    <td class="reservations">
                      <div>
                        <span class="available">9</span> Available
                      </div>
                      <div>
                        <span class="occupied">9</span> Occupied
                      </div>
                    </td>
                    <td class="price">
                      <span class="currency">£</span><span class="amount">5.00</span> 
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
</div>