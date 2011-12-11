<?php
// $Id: node.tpl.php,v 1.4 2007/08/07 08:39:36 goba Exp $
?>
<div class="node<?php if ($sticky) { print " sticky"; } ?><?php if (!$status) { print " node-unpublished"; } ?>">
  <?php print $picture ?>
	<div class="details">
			<div class="submitted"><?php print $submitted ?></div>
			<?php if ($terms): ?>
				<div class="taxonomy"><?php print $terms ?></div>
			<?php endif; ?>
	</div>

  <?php if ($page == 0): ?>
    <h1 class="title"><a href="<?php print $node_url ?>"><?php print $title ?></a></h1>
  <?php endif; ?>
	<div class="content"><?php print $content ?></div>
		<?php if ($links): ?>
		<div class="links"><?php print $links ?>
			<div style="clear: both"></div>
		</div>
	<?php endif; ?>
</div>
