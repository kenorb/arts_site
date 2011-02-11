<?php
// $Id: cck_field_privacy.views.inc,v 1.1.2.1 2009/05/17 01:48:00 obsidiandesign Exp $
/**
 * Apply cck field privacy to Views 2
 */

/**
 * Implementation of hook_views_pre_render - decorates the views cck field handlers
 */
function cck_field_privacy_views_pre_render(&$view) {
  foreach ($view->field as $field_handler_name => &$field_handler) {
    if (is_subclass_of($field_handler, 'content_handler_field')) {
      // check if this field is cckfp enabled - only decorate cckfp enabled fields
      $active_fields = _cck_field_privacy_get_active_fields();
      
      // get the field name
      $field_name = $field_handler->definition['content_field_name'];
      
      if (isset($active_fields[$field_name])) {
        $cckfp_handler = new cckFieldPrivacyViewsFieldHandler($field_handler);
        $view->field[$field_handler_name] = $cckfp_handler;
      }
    }
  }
}

/**
 * Decorator for views cck field handler - content_handler_field - to control access to cckfp enabled fields
 * @todo improve performance - this approach runs through the result set for each cck field in the view
 */
class cckFieldPrivacyViewsFieldHandler {
    var $handler;
    
    /**
     * constructor - saves reference to the decorated handler object
     */
    function __construct( content_handler_field $handler ) {
        $this->handler =& $handler;
    }
        
    /**
     * implement pre_render decorator to check field access and strip field data from results if access is not granted
     */
    function pre_render($values) {
      global $user;
      
      if (isset($this->handler->definition['content_field_name'])) {
        // the cck field name
        $cck_field_name = $this->handler->definition['content_field_name'];
                
        foreach ($values as $key => $value) {
          $node = node_load($value->nid);
          
          // check if this instance of field is inaccessible to the current user
          $inaccessible = _cck_get_inaccessible_fields($user, $node, $cck_field_name);
          
          if ($inaccessible === TRUE) {
            //Uncomment the next line to enable debug output into the watchdog for testing if the cckfp module is blocking fields correctly.
            //watchdog('cckfp', 'user '. $user->name .', should not see the '. $cck_field_name .' for node '. $node->title .' which belongs to '. $node->uid);
            // not accessible - remove all data associated with this field
            if (!$this->handler->defer_query) {
              // remove the actual data if the data has already been loaded by the query - i.e. not defer_query
              unset($values[$key]->{$this->handler->field_alias});                            
            } 
            else {
              // data has not already been loaded by the query
              // remove the data that the handler uses to build the field
              // clone because the data may be shared with other handlers whose field in this row is accessible
              $values[$key] = clone $values[$key];
              unset($values[$key]->{$this->handler->field_alias});              
            }
          }
        }
      }
            
      // pass on call to decorated handlers own pre_render method
      if ( method_exists( $this->handler, 'pre_render' )) {
        return call_user_func_array( array( $this->handler, 'pre_render' ), array($values) );
      }
    }
    
    /**
     * pass through gets to decorated object
     */
    function __get( $var ) {
        if ( isset( $this->handler->$var )) {
            return $this->handler->$var;
        }
        return FALSE;
    }
    
    /**
     * pass through sets to decorated object
     */
    function __set( $var, $val ) {
        $this->handler->$var = $val;
    }
    
    /**
     * pass through all method calls that aren't implemented by this decorator
     */
    function __call( $method, $arguments ) {
        if ( method_exists( $this->handler, $method )) {
          return call_user_func_array( array( $this->handler, $method ), $arguments );
        }
        return FALSE;
    }
}
