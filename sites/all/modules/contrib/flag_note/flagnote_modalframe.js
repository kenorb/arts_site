
Drupal.flagNoteModalframe = Drupal.flagNoteModalframe || {};

/**
 * Helper function. Updates a link's HTML with a new one. Taken
 * and adapted from flag.js
 *
 *   @see flag.js from flag module
 */
Drupal.flagNoteModalframe.updateLink = function (element, newHtml) {
  var $newLink = $(newHtml);
  // Initially hide the message so we can fade it in.
  $('.flag-message', $newLink).css('display', 'none');
  // Find the wrapper of the old link.
  var $wrapper = $(element).parents('.flag-wrapper:first');
  if ($wrapper.length == 0) {
    // If no ancestor wrapper was found, or if the 'flag-wrapper' class is
    // attached to the <a> element itself, then take the element itself.
    $wrapper = $(element);
  }
  // Replace the old link with the new one.
  $wrapper.after($newLink).remove();
  Drupal.attachBehaviors($newLink.get(0));
  return $newLink.get(0);
};

Drupal.behaviors.flagNoteModalframe = function() {
  $('a.modalframe-flagnote:not(.modalframe-flagnote-processed)').click(function() {
    $(this).addClass('modalframe-flagnote-processed');
    Drupal.theme('flagNoteModalframe', this);
    return false;
  });
};

Drupal.theme.prototype.flagNoteModalframe = function (element) {
  var onSubmitCallback =  function(args, statusMessages) {
    // Themed status messages can be displayed on the page by themers
    // overriding this function
    if (args) {
      if (args.newLink) {
        Drupal.flagNoteModalframe.updateLink(element, args.newLink);
      }
      if (args.status) {
        alert(args.status);
      }
    }
  };

  var modalOptions = {
    url: $(element).attr('href'),
    width: 500,
    height: 300,
    autoFit: true,
    onSubmit: onSubmitCallback
  };

  Drupal.modalFrame.open(modalOptions);
};
