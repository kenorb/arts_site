
var onEventForSellChange = function (pageInit)
{
  if ($("#edit-field-for-sell-value").attr ("checked"))
  {
    $("#edit-sell-price").addClass ("required");
      
    $("fieldset.product-field, fieldset.product-shipping").fadeIn ();
    
    $('#edit-gc-salable').val ('checked', true);
    $('#edit-gc-salable').removeAttr ('disabled');
  }
  else
  {
    $("#edit-sell-price").removeClass ("required");
    
    $("#edit-shippable").removeAttr ("checked");
    
    $("fieldset.product-field, fieldset.product-shipping") [pageInit ? "hide" : "fadeOut"] ();
    
    $('#edit-gc-salable').removeAttr ('checked');
    $('#edit-gc-salable').attr ('disabled', true);
		
		if ($('#edit-quote-method-0').val () == null && $('#edit-quote-method-1').val () == null)
			$('#edit-quote-method-0').attr ('checked', 'checked');
			
    
  }
  
  
};

// Executed on page load 
onEventForSellChange (true);

// Executed when For Sell checkbox changes its value
$("#edit-field-for-sell-value").change (onEventForSellChange);

