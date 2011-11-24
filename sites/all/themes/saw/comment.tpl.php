<?php
// $Id: comment.tpl.php,v 1.6 2008/01/04 19:24:24 goba Exp $
?>
<div class="comment<?php print ' '. $status; ?>">

	<table>
		<tr>
			<td class="image-area">
			  <?php if ($picture) : ?>
					<?php print $picture ?>
				<?php endif; ?>
				
				
				
			</td>
			<td class="user-info-area">
				<div>
					<a href="/users/<?php echo $comment -> name; ?>"><?php echo $comment -> name; ?></a>
				</div>
				<div>
					<?php echo date ('d-m-Y H:i:s', $comment -> timestamp); ?>
				</div>
				<div class="reply">
					<a href="/comment/reply/<?php echo $comment -> nid; ?>/<?php echo $comment -> cid; ?>">Reply</a>
				</div>
				<a href="/comment/edit/<?php echo $comment -> cid; ?>">Edit</a> | <a href="/comment/delete/<?php echo $comment -> cid; ?>">Delete</a> | <a href="/spam/comment/<?php echo $comment -> cid; ?>/spam">Mark as spam</a>
			</td>
			<td class="text-area">
				<?php echo $comment -> comment; ?>
			</td>
		</tr>
	</table>


  <h3 class="title"><?php print $title ?></h3>
  <div class="submitted"><?php print $submitted ?><?php if ($comment->new) : ?><span class="new"> *<?php print $new ?></span><?php endif; ?></div>
  <div class="content">
    <?php print $content ?>
    <?php if ($signature): ?>
      <div class="clear-block">
        <div>—</div>
        <?php print $signature ?>
      </div>
    <?php endif; ?>
  </div>
  <!-- BEGIN: links -->
  <div class="links">&raquo; <?php print $links ?></div>
  <!-- END: links -->
</div>
