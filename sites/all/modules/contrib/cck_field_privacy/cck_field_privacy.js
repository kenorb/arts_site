var cck_field_privacy_refresh = function ()
{
	for (field_name in Drupal.settings.cck_field_privacy.default_value) {

	var field_states = Drupal.settings.cck_field_privacy.default_value[field_name];		
	
	if (!$('#'+ field_name +'link').hasDescription)
	{
		for (var k in field_states)
			break;
	
		$('#'+ field_name +'link').html ('<span class="cckfp_currently_showing_container cckfp_show_for_' + k.toLowerCase () + '">(<span class="cckfp_currently_showing_for">' + k.charAt (0).toLowerCase () + k.slice (1)  + '</span> <span class="cckfp_currently_showing">can see this field</span>)</span>');
	}
}
}

var cck_field_privacy = {
  init: function() {
	
		if (window.cck_field_privacy_already_initialized)
			return;
			
		cck_field_privacy_already_initialized = true;
		
		for (field_name in Drupal.settings.cck_field_privacy.default_value) {
			$('#'+ field_name +'link').bind('click', cck_field_privacy.click); // bind padlock elements
		}

	
    if (typeof(Drupal) == 'undefined' || typeof(Drupal.settings) == 'undefined') return; // abort

		cck_field_privacy_refresh ();

  },

  click: function() {
	
    var field_states = '';
    var field_name = $(this).attr('id').substr(0, $(this).attr('id').length-4),
    field_states = Drupal.settings.cck_field_privacy.default_value[field_name];
		var rels = Drupal.settings.cck_field_privacy.relationships;
		// TODO: I don't like the fact checkboxes are used, should be radiobuttons!
		//				this would also solve the issue where you can uncheck the option and submit nothing selected
		var checkboxes = '';
		for(var rel in rels){
		  // don't use rels[rel] as a value; this will cause issues with translations!
			checkboxes += "<div><label><input type='checkbox' value='"+rel+"' name='"+rels[rel]+"' />" + rels[rel].charAt(0).toUpperCase() + rels[rel].slice(1) + "</label></div>";
    }
				
    // display prompt
    var prompt = $.prompt(
    // TODO: Output the list of privacy options in Drupal.settings.
    // TODO: Make Buddies conditional based on module_exists('buddylist').
    //        then remove as a dependency.
    // TODO: Provide all available relationships when module_exists('user_relationships').
    '<p><strong>'+Drupal.t("Privacy settings")+'</strong></p>'+
    '<form>'+checkboxes+
    '</form>', {
	
	    overlayspeed: 'fast',
	    promptspeed: 'fast',
	    buttons: { Ok: true, Cancel: false },
	    submit: function(v, m, f) {
	    	if(v == true) {
	    		var settings = new Array();
	        for(var i in f) {
	        	settings.push(f[i]);
	        }
	      	// remember setting
	      	Drupal.settings.cck_field_privacy.default_value[field_name] = f; 
	       	$.post( // save changes
	        	Drupal.settings.cck_field_privacy.action, {
	          user: Drupal.settings.cck_field_privacy.uid,
	          field: field_name,
	          type: Drupal.settings.cck_field_privacy.content_type,
	          'settings[]': settings
	        });
					
					cck_field_privacy_refresh ();
					
	        return true;
	      }
	      return true;
	    }, 
	    show: 'slideDown',
	    loaded: (function(field_name) {
		  	return function() {
	      	$("input[type='checkbox']", this).each(function() {
	        	// set default checked on load
	          var e = $(this);        
	          e.attr('checked', field_states[e.val()] == e.val()? 'checked' : '');
					// .click instead of .change to keep the script working in IE!
	        }).click(function(field_name) { 
	        	var name = $(this).attr('name');    		
	        	if ($(this).is(':checked')) {
	  					// Uncheck all other checkboxes.
	  					$(this).parent ().parent ().parent ().parent ().find("input[name!='"+$(this).attr('name')+"']").each(function(){
	  						$(this).attr('checked',false);
	  					});
					  }
	       	});
				};
		  }(field_name)) 
		});
		
		
		
		return false;
  } 
};

$(cck_field_privacy.init); // onload
Drupal.behaviors.cck_field_privacy = function(context) {
	cck_field_privacy.init();
}