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
    <td id="home" rowspan="2" width="22%">

    </td>
    <td class="primary-links" valign="middle">
      <?php print theme('links', $primary_links, array('class' => 'links', 'id' => 'navlist')) ?>
    </td>
    <td td class="login-box" valign="middle" >
	  <p> 
	  <?php if (!$logged_in): ?>
      	<a class="active" href="/user/register"><img src="/sites/all/themes/saw/kreska.png" alt=""> Sign up </a>   
      	<a class="active" href="/user"><img src="/sites/all/themes/saw/klodka.png" alt=""> Sign in </a>  </p>
      <?php else: ?>
      	<a class="active" href="/logout"><img src="/sites/all/themes/saw/kreska.png" alt=""> Logout </a>  </p>
      <?php endif; ?>
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
          <td id="footer-menu-list" width="25%" align="left">
            <?php print $footer1; ?>
          </td> 
          <td id="footer-menu-list" width="25%" align="left">
            <?php print $footer2; ?>
          </td>
          <td id="footer-menu-list" width="50%" align="left">
  	      <?php print $footer3; ?>
          </td>
        </tr>
      </table>
    </td>
    <td id="flogo" width="25%" height="120px">
      <div id="footer-message">
        <?php echo "Copyright &copy; 2008-2011 Student Art World";?>
      </div>
    </td>
  </tr>
</table>
</div>
</body>
</html>
