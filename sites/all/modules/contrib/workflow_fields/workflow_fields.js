// $Id: workflow_fields.js,v 1.1.2.1 2008/12/09 00:40:38 kratib Exp $

Drupal.workflowFields = {};

Drupal.workflowFields.select = function(selector, group) {
  switch (selector) {
  case 'all':
    $('.workflow-fields-table input[type=checkbox][id*='+group+']').attr('checked', 'true');
    break;
  case 'none':
    $('.workflow-fields-table input[type=checkbox][id*='+group+']').removeAttr('checked');
    break;
  case 'toggle':
    $('.workflow-fields-table input[type=checkbox][id*='+group+']').each(function() {
      if (this.checked) $(this).removeAttr('checked');
      else this.checked = true;
    });
    break;
  default:
    // We're matching against id ending with "e-" + selector. Why? Because matching against
    // selector only will confuse selectors = 1, 11, 21, -1, etc. The "e" is necessary because
    // otherwise -1 and 1 would be confused. It works because all checkboxes have ids ending
    // with visible-<number> or editable-<number>. Notice the last "e". It's a hack but it works :-)
    $('.workflow-fields-table input[type=checkbox][id$=e-'+selector+'][id*='+group+']').each(function() {
      if (this.checked) $(this).removeAttr('checked');
      else this.checked = true;
    });
  }
}

