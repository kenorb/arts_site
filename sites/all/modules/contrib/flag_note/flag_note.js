;if (Drupal && Drupal.jsEnabled) {
  Drupal.behaviors.flag_note = function(context) {

    $vocSelect = $('#edit-flag-note-vocab');
    $vocOpts = $('#edit-flag-note-vocab-label-wrapper, '+
                 '#edit-flag-note-vocab-help-wrapper, '+
                 '#edit-flag-note-hide-text-wrapper');

    if ($vocSelect.val() == 0) {
      $vocOpts.hide();
    }

    $vocSelect.change(function(e){
      if ($(this).val() > 0) {
        $vocOpts.slideDown();
      }
      else {
        $vocOpts.slideUp();
      }
    });

  };
}
