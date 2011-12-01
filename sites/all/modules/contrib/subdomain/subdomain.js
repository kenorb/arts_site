Drupal.behaviors.subdomain = function(context) {

  $('#edit-subdomain-mode:not(.processed)').change(function() {
    if ($(this).val() == 'term') {
      $('#edit-subdomain-vocab-wrapper').show();
    }
    else {
      $('#edit-subdomain-vocab-wrapper').hide();
    }

    $('#edit-subdomain-source option[value="default"]').text(Drupal.settings.subdomain.sourceOptionText[$(this).val()]);

    if ($(this).val() == 'contenttype') {
      // Force view for homepage
      $('#edit-subdomain-home').val('view').change();
      // disable default
      $('#edit-subdomain-home option[value=default]').attr('disabled', 'disabled');
    }
    else {
      $('#edit-subdomain-home option[value=default]').attr('disabled', '');
    }
  }).change();

  $('#edit-subdomain-home:not(.processed)').change(function() {
    if ($(this).val() == 'view') {
      $('#edit-subdomain-view-wrapper').show();
    }
    else {
      $('#edit-subdomain-view-wrapper').hide();
    }
  }).change();


  // Add JS validation for subdomain selection
  var timer;
  var selector = Drupal.settings.subdomain ? Drupal.settings.subdomain.selector : undefined;

  if (selector != undefined) {
    $('#'+selector+':not(.processed)')
    .addClass('processed')
    .after('<span id="subdomain-check" style="display:none;"></span>')
    .keyup(function(e) {
      $('#subdomain-check').hide();
      var v = $(this).val();
      clearTimeout(timer);
      timer = setTimeout(function() {
        Drupal.subdomainValidate(v);
      }, 500);
    });
  }
}

Drupal.subdomainValidate = function(check) {
  if (check) {
    $.get('/subdomain/validate', {subdomain:check,sid:Drupal.settings.subdomain.sid},function(data) {
      if (data.valid) {
        $('#subdomain-check')
        .text('Available!')
        .removeClass('duplicate')
        .show();
      }
      else {
        $('#subdomain-check')
        .text('Not available!')
        .addClass('duplicate')
        .show();
      }
    }, 'json');
  }
  else {
    $('#subdomain-check').hide();
  }
}