/******************************************************************************
 *                                  postMSE                                   *
 *                                                                            *
 *                      Developped by Hadrien Croubois :                      *
 *                         hadrien.croubois@gmail.com                         *
 *                                                                            *
 ******************************************************************************/

var postMSE = postMSE || {};
postMSE.client = postMSE.client || {};
/******************************************************************************
 *                      C l i e n t   n a m e s p a c e                       *
 ******************************************************************************/
(function(){

	this.slideTop = function()
	{
		$('html, body').animate({scrollTop:0}, '120');
	};
	this.toggleBlock = function(element)
	{
		$(element).closest('article').toggleClass('archived');
		this.reactBlock($(element).closest('article'));
		$(element).closest('.packery').packery();
	}
	this.reactBlock = function(element)
	{
		article = $(element);
		if (article.hasClass('col-reactive'))
		{
			if (article.hasClass('archived')) article.addClass('col-md-4' ).removeClass('col-md-12');
			else                              article.addClass('col-md-12').removeClass('col-md-4' );
		}
	}
}).apply(postMSE.client);