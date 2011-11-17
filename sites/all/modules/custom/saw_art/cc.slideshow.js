
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
	
	
	CC.Slideshow = function (container, frames, smallImageName, bigImageName, titleName, teaserName, delay)
	{
		this._container				= $(container);
		this._frames					= frames;
		this._smallImageName	= smallImageName;
		this._bigImageName		= bigImageName;
		this._titleName				= titleName;
		this._teaserName			= teaserName;
		this._frameIndex			= 0;
		this._frameCount			= frames.length;
		this._delay						= delay;
	}
	
	
	CC.Slideshow.prototype.updateFrame = function ()
	{
		var box = $(CC.Slideshow.HtmlData);
		
		var prepareImage = CC.Fn.bind (this, function (img, frameIndex)
		{
			CC.Fn.StripImage (img);
			
			if (frameIndex == null)
				return img;
				
			img.click (CC.Fn.bind (this, function (e) {
				
				this._frameIndex = frameIndex;
				this.start ();
				
			}));
			
			return img;

		});

		box.find ('.big-area').append (prepareImage ($('<span/>').html (this._frames [this._frameIndex] [this._bigImageName]), null));
		
		
		for (var i = this._frameIndex + 1; i < Math.min (this._frameIndex + 1 + 4, this._frameCount); i++)
			box.find ('.small-area').append (prepareImage ($('<span/>').html (this._frames [i] [this._smallImageName]), i));
			
		for (var v = 0; v < this._frameIndex; v++)
			box.find ('.small-area').append (prepareImage ($('<span/>').html (this._frames [v] [this._smallImageName]), v));
			
		box.find ('.teaser').append (this._frames [v] [this._teaserName]);
		
		$('#user-arts-slideshow-container .user-arts-slideshow').css ('position', 'absolute');
		$('#user-arts-slideshow-container .user-arts-slideshow').fadeOut (400, function () { $(this).remove (); });
		$('#user-arts-slideshow-container').append (box).fadeIn (400);
		
		if (++this._frameIndex >= this._frameCount)
			this._frameIndex = 0;
	}
	
	CC.Slideshow.prototype.start = function (interval)
	{
		if (this._interval)
			clearInterval (this._interval);
	
		this._interval = setInterval (CC.Fn.bind (this, "updateFrame"), this._delay);
		
		this.updateFrame ();
	}
	
	CC.Slideshow.HtmlData =
		'<table class="user-arts-slideshow" cellpadding="0" cellspacing="0">' +
			'<tr>' +
				'<td>' +
					'<div class="big-area">' +
						'<div class="normal">' +
						'</div>' +
						'<div class="big">' +
						'</div>' +
					'</div>' +
				'</td>' +
				'<td>' +
					'<table class="user-arts-slideshow-smalls" cellpadding="0" cellspacing="0">' +
						'<tr>' +
								'<td>' +
									'<div class="small-area">' +
									'</div>' +
								'</td>' +
						'</tr>' +
						'<tr>' +
							'<td colspan="10">' +
								'<div class="teaser">' +
								'</div>' +
							'</td>' +
						'</tr>' +
					'</table>' +
				'</td>' +
			'</tr>' +
		'</table>';

	

	
	