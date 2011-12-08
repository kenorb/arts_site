<?php $stats = saw_users_get_user_stats (arg (1)); ?>

<table class="profile-statistics" cellspacing="0" cellpadding="0">
 <tr>
  <td>
   <span class="image"><img src="/sites/all/themes/saw/images/statistics-profile.png" /></span> Profile views:
  </td>
  <td class="value">
    <?php echo $stats -> num_profileviews; ?>
  </td>
 </tr>
 <tr>
  <td colspan="2">
   <div class="separator"></div>
  </td>
 </tr>
 <tr>
  <td>
   <span class="image"><img src="/sites/all/themes/saw/images/statistics-art.png" /></span> Art views:
  </td>
  <td class="value">
   <?php echo $stats -> num_artviews; ?>
  </td>
 </tr>
 <tr>
  <td colspan="2">
   <div class="separator"></div>
  </td>
 </tr>
 <tr>
  <td>
   <span class="image"><img src="/sites/all/themes/saw/images/statistics-art.png" /></span> Arts added:
  </td>
  <td class="value">
   <?php echo $stats -> num_arts; ?>
  </td>
 </tr>
 <tr>
  <td colspan="2">
   <div class="separator"></div>
  </td>
 </tr>
 <tr>
  <td>
   <span class="image"><img src="/sites/all/themes/saw/images/statistics-comment.gif"/></span> Commented times:
  </td>
  <td class="value">
   <?php echo $stats -> num_comments; ?>
  </td>
 </tr>
</table>