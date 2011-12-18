
	var CC = window.CC ? window.CC : { Fn: {} };
	
	CC.Fn.bind = function (obj, fun, args)
	{
		return function()
		{
			if (obj === true)
				obj = this;
				
			var f = typeof fun === "string" ? obj[fun] : fun;
	
			return f.apply (obj, Array.prototype.slice.call (args || [])
				.concat (Array.prototype.slice.call (arguments)));
		};
	};
	
	CC.Fn.StripImage = function (element)
	{
		element.html ('<img src="' + element.find ('img').attr ('src') + '" />');
		
		return element;
	};
	
	
	CC.Slideshow = function (container, frames, smallImageName, bigImageName, dayCountName, titleName, teaserName, delay)
	{
	  
		this._container				= $(container);
		this._frames					= frames;
		this._smallImageName	= smallImageName;
		this._bigImageName		= bigImageName;
		this._dayCountName		= dayCountName;
		this._titleName				= titleName;
		this._teaserName			= teaserName;
		this._frameIndex			= 0;
		this._delay						= delay;
		
    for (var i = 0; i < frames.length; i++)
      if (frames [i] [this._smallImageName] == "")
        frames.splice (i--, 1);

    this._frameCount      = frames.length;
		
		var invisible;
		
		this._container.append (invisible = $('<div class="invisible" style="display: none"></div>'));
		
		for (var i = 0; i < this._frameCount; i++)
			invisible.append (this._frames [i] [this._smallImageName]).append (this._frames [i] [this._bigImageName]);

	};	
	
	CC.Slideshow.prototype.updateFrame = function ()
	{
		var box = $(CC.Slideshow.HtmlData);
		
		var scrollY = $(window).scrollTop ();
		
		
		var prepareImage = CC.Fn.bind (this, function (img, frameIndex)
		{
			//if (frameIndex == null)
				return img;
				
			CC.Fn.StripImage (img);
			
			img.click (CC.Fn.bind (this, function (e) {
				
				this._frameIndex = frameIndex;

		    if (this._interval)
		      clearInterval (this._interval);
		    
		    this.updateFrame ();

			}));
			
			return img;

		});

		box.find ('.big-area').append (prepareImage ($('<span/>').html (this._frames [this._frameIndex] [this._bigImageName]), null));
		
		var num = 0;
		
		for (var i = this._frameIndex + 1; i < Math.min (this._frameIndex + 1 + 10, this._frameCount) && num < 3; i++, num++)
			box.find ('.small-area td').append (prepareImage ($('<span/>').html (this._frames [i] [this._smallImageName]), i));
			
		for (var v = 0; v < this._frameIndex && num < 3; v++, num++)
			box.find ('.small-area td').append (prepareImage ($('<span/>').html (this._frames [v] [this._smallImageName]), v));
			
		box.find ('.teaser').append (this._frames [v] [this._teaserName]);
		
		box.find ('.day-count .count').html (this._frames [v] [this._dayCountName]);
		
		$('#user-arts-slideshow-container .user-arts-slideshow').css ('position', 'absolute');
		$('#user-arts-slideshow-container .user-arts-slideshow').fadeOut (400, function () { $(this).remove (); });
		$('#user-arts-slideshow-container').append (box).fadeIn (400);
		
    $('#block-views-user_arts-user_arts_block .title h3').html (this._frames [this._frameIndex].name.replace(/<[^>]+>/ig,""));
		
		if (this._frameCount <= 1)
			this.stop ();
		else
		if (++this._frameIndex >= this._frameCount)
			this._frameIndex = 0;
			
		$(window).scrollTop (scrollY);
	};

	CC.Slideshow.prototype.stop = function (interval)
	{
		if (this._interval)
			clearInterval (this._interval);
	};
	
	CC.Slideshow.prototype.start = function (interval)
	{
		if (this._interval)
			clearInterval (this._interval);
	
		this._interval = setInterval (CC.Fn.bind (this, "updateFrame"), this._delay);
		
		this.updateFrame ();
	};
	
	CC.Slideshow.HtmlData =
		'<table class="user-arts-slideshow" cellpadding="0" cellspacing="0">' +
			'<tr>' +
				'<td class="big-area-container">' +
					'<div class="big-area">' +
						'<div class="normal">' +
						'</div>' +
						'<div class="big">' +
						'</div>' +
					'</div>' +
				'</td>' +
				'<td>' +
					'<table class="user-arts-slideshow-smalls" cellpadding="0" cellspacing="0">' +
						'<tr class="small-area">' +
								'<td>' +
									'<div>' +
									'</div>' +
								'</td>' +
						'</tr>' +
					'</table>' +
				'</td>' +
			'</tr>' +
      '<tr class="teaser-area">' +
        '<td colspan="10">' +
          '<div class="teaser">' +
          '</div>' +
        '</td>' +
      '</tr>' +
      '<tr>' +
        '<td colspan="10">' +
          '<div class="day-count">' +
            '<span class="count"></span> views today' +
          '</div>' +
        '</td>' +
      '</tr>' +
		'</table>';

	

	
	