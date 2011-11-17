
  var initialToolbarPositionTop;

  var onUpdateToolbar = function ()
  {
    if (!initialToolbarPositionTop)
      initialToolbarPositionTop = Math.ceil ($('#toolbar-area').offset ().top + 1);
    
    var windowScrollTop = $(window).scrollTop ();
    
    if (windowScrollTop > $('#toolbar-area').offset ().top)
    {
      $('#quickbar').addClass ('stick');
      $('#quickbar').css ('top', 'auto');
    }
    else
    {
      $('#quickbar').removeClass ('stick');
      $('#quickbar').css ('top', initialToolbarPositionTop + 'px'); 
    }
  };

  $(window).scroll (onUpdateToolbar);
  
  $(function () {
	  onUpdateToolbar ();
  });
