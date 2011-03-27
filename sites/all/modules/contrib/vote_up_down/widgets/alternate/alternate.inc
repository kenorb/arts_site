<?php
// $Id: alternate.inc,v 1.2 2010/05/31 03:59:40 marvil07 Exp $

/**
 * @file
 * Alternate VUD Widget.
 */

/**
 * Implementation of hook_vud_widgets(). (Specialized)
 */
function vud_alternate_vud_widgets() {
  return array(
    'title' => t('Alternate'),
    'widget template' => 'widget',
  );
}
