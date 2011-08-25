<?php
// $Id: page.tpl.php 7156 2010-04-24 16:48:35Z chris $
?><!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language; ?>" xml:lang="<?php print $language->language; ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $setting_styles; ?>
  <!--[if IE 8]>
  <?php print $ie8_styles; ?>
  <![endif]-->
  <!--[if IE 7]>
  <?php print $ie7_styles; ?>
  <![endif]-->
  <!--[if lte IE 6]>
  <?php print $ie6_styles; ?>
  <![endif]-->
  <?php if ($local_styles): ?>
  <?php print $local_styles; ?>
  <?php endif; ?>
  <?php print $scripts; ?>
</head>

<body id="<?php print $body_id; ?>" class="<?php print $body_classes; ?>">
  <div id="page" class="page">
	<div id="header-container">
		<header class="wrapper">
			<div id="header_logo"><h1><a href="" title="logo">
			 <?php if ($logo){ ?><img src="<?php print $logo; ?>" alt="<?php print t('Home');?>"/><?php }else{ ?>
			<img alt="logo" src="<?php echo base_path() . path_to_theme();?>/images/logo.png"/><?php }?></a></h1></div>
			<nav id="main_menu"><?php print  $main_nav; ?>			
			</nav>
			<div id="links"><?php print  $sec_nav; ?></div>
			<div id="search"><?php print  $search; ?><input class="search"/><input type="button" class="go" value="Go"/></div>
			<div id="login"><?php print  $login; ?><span id="login_links"><a href="">login</a> / <a href="">register</a></span></div>
		</header>
	</div>
	<div id="main" class="wrapper clear">
		<div id="sidebar_left" class="left"><?php print  $left; ?><ul><li><a href="">one</a></li><li><a href="">two</a></li><li><a href="">three</a></li></ul></div>
		<div id="main_content" class="left">
		 <?php print $breadcrumb; ?>
          <?php if ($mission): print '<div id="mission">'. $mission .'</div>'; endif; ?>
          <?php if ($tabs): print '<div id="tabs-wrapper" class="clear-block">'; endif; ?>
          <?php if ($title): print '<h2'. ($tabs ? ' class="with-tabs"' : '') .'>'. $title .'</h2>'; endif; ?>
          <?php if ($tabs): print '<ul class="tabs primary">'. $tabs .'</ul></div>'; endif; ?>
          <?php if ($tabs2): print '<ul class="tabs secondary">'. $tabs2 .'</ul>'; endif; ?>
          <?php if ($show_messages && $messages): print $messages; endif; ?>
          <?php print $help; ?>
		<?php print $content; ?>
		</div>
		<div id="sidebar_right" class="right"><?php print  $right; ?><ul><li><a href="">one</a></li><li><a href="">two</a></li><li><a href="">three</a></li></ul></div>		
	</div>
	<div id="footer-container">
		<footer class="wrapper">
			<div id="footer_menu_1"><?php print  $footer_pos_1; ?><ul><li><a href="">one</a></li><li><a href="">two</a></li><li><a href="">three</a></li></ul></div>
			<div id="footer_menu_2"><?php print  $footer_pos_2; ?><ul><li><a href="">one</a></li><li><a href="">two</a></li><li><a href="">three</a></li></ul></div>
			<div id="footer_menu_3"><?php print  $footer_pos_3; ?><ul><li><a href="">one</a></li><li><a href="">two</a></li><li><a href="">three</a></li></ul></div>
			<div id="footer_logo"><h1><a href="" title="logo"><img alt="logo" src="<?php echo path_to_theme();?>/images/logo_footer.png"/></a></h1></div>
		</footer>
	</div>
	<?php print  $header; ?>
	<?php print  $footer; ?>
</div>  
  <?php print $closure; ?>
</body>
</html>
