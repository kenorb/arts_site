$(function () {
	($('ul.pager li')).each (function () {
		if ($(this).html () == '&nbsp;')
			$(this).addClass ('none');	
	});
})