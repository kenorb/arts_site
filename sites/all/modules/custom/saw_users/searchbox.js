var searchBox = function (area)
{
	this._area      = $(area);

	this._dropDown  =   $('<div class="dropdown"><div class="search-in">Search in:</div></div>');

	var options = [
		{
			name:   '',
			title:  "Everywhere",
			cssClass: 'all'
		},
		{
			name:   'art',
			title:  "Artworks",
			cssClass: 'normal'
		},
		{
			name:   'item',
			title:  "Market",
			cssClass: 'normal'
		},
		{
			name:   'event',
			title:  "Events",
			cssClass: 'normal'
		},
		{
			name:   'forum',
			title:  "Forum",
			cssClass: 'normal'
		}
	];

	for (var i in options)
		this._dropDown.append ('<div class="item ' + (options [i].cssClass ? options [i].cssClass : '') + '"><input type="checkbox" name="category[]" value="' + options [i].name + '" id="dropdown-item-' + options [i].name + '" /><label for="dropdown-item-' + options [i].name + '">' + options [i].title + '</label><div style="clear:both"></div></div>');

	this._area.append ('<input type="text" name="keys" class="form-text" />');
	this._area.append ('<input type="submit" class="form-submit" value="" />');

	this._area.append (this._dropDown);
	
	this._area.bind ('click', {self: this}, function (e) {
		e.data.self.open ();
		e.stopPropagation ();
	});
	
	$(document).bind ('click', {self: this}, function (e) {
		e.data.self.close ();
	});

	this._dropDown.hide ();

	this._dropDown.find ('div.item.all input').attr ('name', null);
	
	this._dropDown.find ('div.item.all').click (function () {

		var rest = $(this).parent ().find ('.item.normal');
		
		if ($(this).find ('input').attr ('checked'))
		{
			rest.hide ();
		}
		else
		{
			rest.show ();
		}
	});

};

searchBox.prototype.open = function ()
{
	this._dropDown.fadeIn (100);
};

searchBox.prototype.close = function ()
{
	this._dropDown.fadeOut (100);
};

$(function () {
	searchBox = new searchBox ($('#search .search-box'));
	
	$('#search .search-box').fadeIn (100);
});
