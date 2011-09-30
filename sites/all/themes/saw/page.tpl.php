<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language; ?>" xml:lang="<?php print $language->language; ?>">

  <head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>

  <body class="<?php print $body_classes; ?>">
      <div id="header-wrapper" class="clearfix">
	  <div id="header">
			<div id="logo">
			</div><!-- /logo -->
        <?php if ($primary_links): ?>
			<div id="primary-menu">
				<?php print theme('links', $primary_links); ?>
			</div><!-- /primary_menu -->
        <?php endif; ?>
        <?php if ($secondary_links): ?>
			<div id="secondary-menu">
				<?php print theme('links', $secondary_links); ?>
			</div><!-- /secondary_menu -->
        <?php endif; ?>
        <div id="search-box">
			<?php print $search_box; ?>
        </div><!-- /search-box -->
      </div><!-- /header -->
      </div><!-- /header-wrapper -->
      <div id="main-wrapper" class="clearfix">  
        <?php if ($sidebar_first): ?>
        <div id="sidebar-first">
          <?php print $sidebar_first; ?>
        </div><!-- /sidebar-first -->
        <?php endif; ?>
        <div id="page">
        <div id="content-wrapper">
          <?php if ($messages): ?>
          <?php print $messages; ?>
          <?php endif; ?>
          <div id="content">
            <a name="main-content" id="main-content"></a>
            <?php if ($tabs): ?>
            <div id="content-tabs" class="clear">
              <?php print $tabs; ?>
            </div>
            <?php endif; ?>
            <?php if ($content || $title): ?>
            <div id="content-inner" class="clear">
              <?php if ($title): ?>
              <h1 class="title"><?php print $title; ?></h1>
              <?php endif; ?>
              <?php if ($content): ?>
              <?php print $content; ?>
              <?php endif; ?>
            </div>
            <?php endif; ?>            
            <?php if ($content_bottom): ?>
            <div id="content-bottom">
              <div class="corner top-right"></div>
              <div class="corner top-left"></div>
              <div class="inner">
              <?php print $content_bottom; ?>
              </div>
              <div class="corner bottom-right"></div>
              <div class="corner bottom-left"></div>
            </div><!-- /content-bottom -->
            <?php endif; ?>
          </div><!-- /content -->
        </div><!-- /content-wrapper -->
        </div><!-- /page -->
        <?php if ($sidebar_last): ?>
        <div id="sidebar-last">
          <?php print $sidebar_last; ?>
        </div><!-- /sidebar_last -->
        <?php endif; ?>
      </div><!-- /main-wrapper -->
    <div id="footer" class="clearfix">
      <div id="footer-wrapper">
		<div id="footer-box">
			<div id="third-menu">
				<?php if ($third_links): ?>
				<?php print theme('links', $third_links); ?>
				<?php endif; ?>
			</div><!-- /third_menu -->
		 <div id="flogo">
		 </div><!-- /flogo -->
         <div id="footer-text">
          <?php echo("Copyright &#169; 2008&#45;2011 Student Art World"); ?>
        </div><!-- /footer-text -->
        </div><!-- /footer-box -->
      </div><!-- /footer-wrapper -->
    </div><!-- /footer -->
  </body>
</html>
