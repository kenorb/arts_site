<?php
// $Id: comment.tpl.php,v 1.6 2008/01/04 19:24:24 goba Exp $
?>
<div class="comment<?php print ' '. $status; ?>">

	<table>
		<tr>
			<td class="image-area">
				<div class="image">
					<?php if ($picture) : ?>
						<?php print $picture ?>
					<?php else: ?>
						<img src="/sites/all/themes/saw/images/anonymous-50.png" alt="anonymous" />
					<?php endif; ?>
				</div>
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
			</td>
			<td class="text-area">
				<?php echo $comment -> comment; ?>
				<div class="clinks">
					<a href="/comment/edit/<?php echo $comment -> cid; ?>" title="Edit comment"><img src="/sites/all/themes/saw/images/comment_edit.png" alt="Edit" /></a>
					<a href="/comment/delete/<?php echo $comment -> cid; ?>" title="Delete comment"><img src="/sites/all/themes/saw/images/trash-can-delete.png" alt="Delete" /></a>
					<a href="/spam/comment/<?php echo $comment -> cid; ?>/spam" title="Mark as spam"><img src="/sites/all/themes/saw/images/flag_red.png" alt="Mark as spam" /></a>
				</div>
			</td>
		</tr>
	</table>


</div>
