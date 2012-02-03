<?php
// $Id: forums.tpl.php,v 1.4 2007/08/07 08:39:35 goba Exp $

/**
 * @file forums.tpl.php
 * Default theme implementation to display a forum which may contain forum
 * containers as well as forum topics.
 *
 * Variables available:
 * - $links: An array of links that allow a user to post new forum topics.
 *   It may also contain a string telling a user they must log in in order
 *   to post.
 * - $forums: The forums to display (as processed by forum-list.tpl.php)
 * - $topics: The topics to display (as processed by forum-topic-list.tpl.php)
 * - $forums_defined: A flag to indicate that the forums are configured.
 *
 * @see template_preprocess_forums()
 * @see theme_forums()
 */
?>
<?php if ($forums_defined): ?>
<div id="forum">
	<form action="/forum/search/" method="get">
		<ul class="links">
			<li class="search">
				<span>Search</span> <input type="text" name="keys" />
				<input type="text" style="display:none" name="forum" value="<?php echo @$variables ['tid'] ? $variables ['tid'] : 'All'; ?>" />
				<input type="submit" value="go" />
			</li>
		<?php $links = theme('links', $links); print substr ($links, 18, strlen ($links) - 18 - 5);  ?>
		</ul>
	</form>
	
  <?php print $forums; ?>
  <?php print $topics; ?>
</div>
<?php endif; ?>
