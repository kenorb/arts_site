<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function feature_users_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Profile Statistics';
  $fe_block_boxes->format = '5';
  $fe_block_boxes->machine_name = 'profile_statistics';
  $fe_block_boxes->body = '<?php $stats = saw_users_get_user_stats (arg (1)); ?>

<table class="profile-statistics" cellspacing="0" cellpadding="0">
 <tr>
  <td>
   Profile views:
  </td>
  <td>
   <?php echo $stats -> num_profileviews; ?>
  </td>
 </tr>
 <tr>
  <td>
   Art views:
  </td>
  <td>
   <?php echo $stats -> num_artviews; ?>
  </td>
 </tr>
 <tr>
  <td>
   # of arts:
  </td>
  <td>
   <?php echo $stats -> num_arts; ?>
  </td>
 </tr>
 <tr>
  <td>
   # of comments:
  </td>
  <td>
   <?php echo $stats -> num_comments; ?>
  </td>
 </tr>
</table>';

  $export['profile_statistics'] = $fe_block_boxes;

  return $export;
}
