<?php
// $Id: comment.tpl.php,v 1.6 2008/01/04 19:24:24 goba Exp $
?>
<div class="comment<?php print ' '. $status; ?> <?php if ($comment -> is_spam): ?>comment-is-spam<?php endif; ?> ">

	<?php if ($comment -> is_spam): ?>
		<div class="comment-spam-information">
			<?php echo t('This comment has been marked as spam') . '.'; ?>
		</div>
	<?php endif; ?>
	<table class="<?php if ($comment -> is_spam): ?>comment-is-spam<?php endif; ?>">
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
			</td>
      <td class="reply">
        <a href="/comment/reply/<?php echo $comment -> nid; ?>/<?php echo $comment -> cid; ?>">Reply</a>
      </td>
			<td class="text-area">
				<?php echo $comment -> comment; ?>
      </td>
      <td class="links-area">
				<span class="clinks">
					<?php if (user_access ('administer comments') || ($user -> uid && @$user -> uid == $comment -> uid)): ?>
						<a href="/comment/edit/<?php echo $comment -> cid; ?>" title="Edit comment"><img src="/sites/all/themes/saw/images/comment_edit.png" alt="Edit" /></a>
						<a href="/comment/delete/<?php echo $comment -> cid; ?>" title="Delete comment"><img src="/sites/all/themes/saw/images/trash-can-delete.png" alt="Delete" /></a>
					<?php endif; ?>
					<?php if ($comment -> is_spam): ?>
						<?php if (user_access ('administer spam')): ?>
							<a href="/spam/comment/<?php echo $comment -> cid; ?>/not_spam?token=<?php echo drupal_get_token ('not spam comment ' . $comment -> cid); ?>" title="Mark as not a spam"><img src="/sites/all/themes/saw/images/flag_green.png" alt="Mark as not a spam" /></a>
						<?php else: ?>
							<span title="Marked as spam" class="comment-is-spam"><img src="/sites/all/themes/saw/images/flag_red.png" alt="Marked as spam" /></span>
						<?php endif; ?>
					<?php else: ?>
						<?php if (user_access ('administer spam')): ?>
							<a href="/spam/comment/<?php echo $comment -> cid; ?>/spam?token=<?php echo drupal_get_token ('spam comment ' . $comment -> cid); ?>" title="Mark as spam"><img src="/sites/all/themes/saw/images/flag_red.png" alt="Mark as spam" /></a>
						<?php endif; ?>
					<?php endif; ?>
				</span>
			</td>
		</tr>
	</table>


</div>
