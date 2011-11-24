
/**
 * Code below creates a clone of the upload zip field.
 */
$(document).ready(function() {
  // Exit if we have nothing to do.
  if (typeof Drupal.settings.imagefield_zip_names === 'undefined') {
    return;
  }

  // Go through each zip upload element name.
  for (var key in Drupal.settings.imagefield_zip_names) {
    var value_name = Drupal.settings.imagefield_zip_names[key];
    var css_value_name = value_name.replace(/_/g, '-');

    // Create a dynamic js variable name in the global scope via window object.
    window['_imagefield_zip_' + value_name + '_real'] = $('#edit-' + css_value_name + '-upload');
    window['_imagefield_zip_' + value_name + '_cloned'] = window['_imagefield_zip_' + value_name + '_real'].clone(true);
  }
});
