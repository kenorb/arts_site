$(document).ready (function () {
  
  $('.profile-menu-container .username, .profile-menu-container .items').mouseenter (function () {
    
    $('.profile-menu-container').addClass ('opened');
    
    $('.profile-menu-container .items').show ();
    
    $('.profile-menu-container .items').css ('width', $('.profile-menu-container').width () -20 + 'px');
  });
  
  $('.profile-menu-container .username, .profile-menu-container .items').mouseleave (function () {
    
    $('.profile-menu-container .items').hide ();
    
    $('.profile-menu-container').removeClass ('opened');
    
    
  });
  
}); 