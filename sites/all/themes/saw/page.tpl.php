<?php
// $Id: page.tpl.php,v 1.25.2.2 2009/04/30 00:13:31 goba Exp $
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
<head>
  <meta http-equiv="Content-Style-Type" content="text/css" />
  <?php print $head ?>
  <title><?php print $head_title ?></title>
  <?php print $styles ?>
  <?php print $scripts ?>
</head>

<body>
<div id="page">
<div class="hide"><a href="#content" title="<?php print t('Skip navigation') ?>." accesskey="2"><?php print t('Skip navigation') ?></a>.</div>
<div id="banner">
<table id="primary-menu" summary="Navigation elements." border="0" cellpadding="0" cellspacing="0" width="100%">
  <tr>
    <td id="home" width="30%" rowspan="2">

    </td>
    <td class="primary-links" width="70%" valign="middle" >
      <?php print theme('links', $primary_links, array('class' => 'links', 'id' => 'navlist')) ?>
    </td>
    <td td class="login-box" valign="middle" width="20%">
	  <p>/ 
      <a class="active" href="/user/register">Sign up</a>
      <a class="active" href="/user">Sign in</a></p>
	</td>
   </tr>
    <tr>
		<td class="secondary-links" width="50%" valign="middle">
      <?php print theme('links', $secondary_links, array('class' => 'links', 'id' => 'subnavlist')) ?>
      </td>
      <td td class="search-box" valign="middle" width="20%">
      <?php print $search_box ?>
	  </td>
    </tr>
</table>
</div>
<table id="content" border="0" cellpadding="15" cellspacing="0" width="100%">
  <tr>
    <?php if ($left != ""): ?>
    <td id="sidebar-left">
      <?php print $left ?>
    </td>
    <?php endif; ?>

    <td valign="top">
      <div id="main">
        <?php if ($title != ""): ?>

          <h1 class="title"><?php print $title ?></h1>

          <?php if ($tabs != ""): ?>
            <div class="tabs"><?php print $tabs ?></div>
          <?php endif; ?>

        <?php endif; ?>

        <?php if ($show_messages && $messages != ""): ?>
          <?php print $messages ?>
        <?php endif; ?>

        <?php if ($help != ""): ?>
            <div id="help"><?php print $help ?></div>
        <?php endif; ?>

      <!-- start main content -->
      <?php print $content; ?>
      <?php print $feed_icons; ?>
      <!-- end main content -->

      </div><!-- main -->
    </td>
    <?php if ($right != ""): ?>
    <td id="sidebar-right">
      <?php print $right ?>
    </td>
    <?php endif; ?>
  </tr>
</table>

<table id="footer" border="0" cellpadding="0" cellspacing="0">
<tr>
<td rowspan="2" width="20%"></td>	
<td rowspan="2" width="55%">
<table id="footer-menu" summary="Navigation elements." border="0" cellpadding="0" cellspacing="0" width="100%">
  <tr>
    <td align="center" margin-left="50px">
    <?php if (isset($primary_links)) : ?>
      <?php print theme('links', $primary_links, array('class' => 'links primary-links')) ?>
    <?php endif; ?>
    </td> 
    <td align="center">
    <?php if (isset($secondary_links)) : ?>
      <?php print theme('links', $secondary_links, array('class' => 'links secondary-links')) ?>
    <?php endif; ?>
    </td>
    <td align="center">
    <?php if (isset($thirdly_links)) : ?>
      <?php print theme('links', $thirdly_links, array('class' => 'links thirdly-links')) ?>
    <?php endif; ?>
    </td>
  </tr>
</table>
</td><td id="flogo" width="25%" height="120px"></td></tr>
<tr><td>
<div id="footer-message">
    <?php echo "Copyright &copy; 2008-2011 Student Art World";?>
</div>
</td></tr></table>
</div>
</body>
</html>
