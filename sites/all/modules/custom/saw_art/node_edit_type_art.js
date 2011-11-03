
  var onEventForSellChange = function (pageInit)
  {
    if ($("#edit-field-for-sell-value").attr ("checked"))
    {
      $("#edit-sell-price").addClass ("required");
        
      $("fieldset.product-field, fieldset.product-shipping").fadeIn ();
    }
    else
    {
      $("#edit-sell-price").removeClass ("required");
      
      $("#edit-shippable").removeAttr ("checked");
      
      $("fieldset.product-field, fieldset.product-shipping") [pageInit ? "hide" : "fadeOut"] ();
    }
    
    
  };

  $(function () {
    
    // Executed on page load 
    onEventForSellChange (true);

    // Executed when For Sell checkbox changes its value
    $("#edit-field-for-sell-value").change (onEventForSellChange);
    
  });
  
  