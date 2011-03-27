<?php
// $Id: plain.inc,v 1.2 2010/05/31 03:59:40 marvil07 Exp $

/**
 * @file
 * Plain VUD Widget.
 */

/**
 * Implementation of hook_vud_widgets(). (Specialized)
 */
function vud_plain_vud_widgets() {
  return array(
    'title' => t('Plain'),
    'widget template' => 'widget',
    'votes template' => 'votes',
  );
}
