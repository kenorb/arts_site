
  var onUpdateToolbar = function ()
  {
    var windowScrollTop = $(window).scrollTop ();
    
    if (windowScrollTop > 94)
      $('#quickbar').addClass ('stick');
    else
      $('#quickbar').removeClass ('stick');
  };

  $(window).scroll (onUpdateToolbar);
  
  