<div class="community-view">

	<div class="buttons">
    <table cellspacing="10px">
      <tbody>
        <tr>
          <td class="button groups">
            <div class="icon">
            </div>
            <div class="title">
              GROUPS
            </div>
          </td>
          <td class="button forums">
            <div class="icon">
            </div>
            <div class="title">
              FORUMS
             </div>
          </td>
        </tr>
      </tbody>
    </table>
	</div>
  
	<?php print views_embed_view ('recent_topics_posts');  ?>
	
	<?php print views_embed_view ('recent_groups');  ?>
   
</div>