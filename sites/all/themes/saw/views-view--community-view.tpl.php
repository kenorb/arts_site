<div class="community-view">

	<div class="buttons">
    <table cellspacing="10px">
      <tbody>
        <tr>
          <td class="button groups">
            <a href="/group">
	            <div class="icon">
	            </div>
	            <div class="title">
	              GROUPS
	            </div>
             </a>
          </td>
          <td class="button forums">
            <a href="/forum">
	            <div class="icon">
	            </div>
	            <div class="title">
	              FORUMS
	             </div>
              </a>
          </td>
        </tr>
      </tbody>
    </table>
	</div>
  
	<?php print views_embed_view ('recent_topics_posts');  ?>
	
	<?php print views_embed_view ('recent_groups');  ?>
   
</div>