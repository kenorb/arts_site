// $Id: rsvp_edit.js,v 1.1.2.1 2009/11/05 22:36:47 ulf1 Exp $
if (Drupal.jsEnabled) {
  // Define the selectors of the fields that needs hiding/showing
  var reply_start_date = new Array("#edit-reply-startdate-wrapper");
  var reply_end_date = new Array("#edit-reply-enddate-wrapper");
  $(document).ready(function () {

    // Show/hide those fields after page load
    rsvp_switch(reply_start_date, $("#edit-reply-startdate-option").attr("checked") ? 'show' : 'hide');
    rsvp_switch(reply_end_date, $("#edit-reply-enddate-option").attr("checked") ? 'show' : 'hide');
   
    // Attaching action for the "click" event
    $("#edit-reply-startdate-option").click(function () {
      rsvp_switch(reply_start_date, 'toggle');
    });
    $("#edit-reply-enddate-option").click(function () {
      rsvp_switch(reply_end_date, 'toggle');
    });
  });
}

/**
 * Helper function needed for showing/hiding fields
 */
function rsvp_switch(selectors, effect) {
  $.each(selectors, function() {
    var code = '$("' + this + '").' + effect + '();';
    eval(code);
  });
}
