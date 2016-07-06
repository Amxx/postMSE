/******************************************************************************
 *                                  MSE-JPS                                   *
 *                 Mini Site Engine - Javascript / PHP / SQL                  *
 *                                                                            *
 *                        Version 2.3.1-0 : 27/04/2016                        *
 *                                                                            *
 *                      Developped by Hadrien Croubois :                      *
 *                         hadrien.croubois@gmail.com                         *
 *                                                                            *
 ******************************************************************************/

var MSE_JPS = MSE_JPS || {};
MSE_JPS.client = MSE_JPS.client || {};
/******************************************************************************
 *                      C l i e n t   n a m e s p a c e                       *
 ******************************************************************************/
(function(){
	// ========================== Hash change listener ===========================
	// this.hashHandler = function(smooth)
	// {
	// 	var hash = decodeURI(window.location.hash.substring(1));
	// 	// Set hash if empty
	// 	if (hash == '') hash = MSE_JPS.client.id2hash(MSE_JPS.client.getCurrentId());
	// 	// Try get page id from hash
	// 	try
	// 	{
	// 		var id = MSE_JPS.client.hash2id(hash); // triger exception if hash unfound
	// 		MSE_JPS.client.showPage(id, smooth);
	// 		MSE_JPS.client.updateTitle(MSE_JPS.client.id2hash(id));
	// 	}
	// 	catch(err)
	// 	{
	// 		var error	= 404; // default error
	// 		if (new RegExp("[0-9]{3}error").test(hash))
	// 			error = parseInt(hash.substring(0,3));
	// 		MSE_JPS.client.showError(error);
	// 		MSE_JPS.client.updateTitle(MSE_JPS.client.errorText(error));
	// 	}
	// };
	// =========================== Hash & id operators ===========================
	// this.getCurrentId = function()
	// {
	// 	return parseInt($('section').filter(function(){ return $(this).css('display') != 'none'; }).attr('id').substring(8));
	// };
	// this.id2hash = function(id)
	// {
	// 	return $('#nav-a-'+id).text();
	// };
	// this.hash2id = function(hash)
	// {
	// 	return parseInt($('#nav').find('a').filter(function(){ return $(this).text() == hash; }).attr('id').substring(6));
	// };
	// ================================== Display ==================================
	// this.showPage = function(id, smooth)
	// {
	// 	var cid = MSE_JPS.client.getCurrentId();
	// 	if (id != cid)
	// 	{
	// 		if (smooth)
	// 		{
	// 			$('#section-'+cid).slideUp("slow");
	// 			$('#section-'+id ).slideDown("slow", function(){
	// 				// Sanity
	// 				$('#section-'+id ).packery();
	// 			});
	// 		}
	// 		else
	// 		{
	// 			$('#section-'+id ).show();
	// 			$('#section-'+cid).hide();
	// 		}
	// 		$('#section-'+id ).show();
	// 		$('#nav-li-' +id ).addClass('current');
	// 		$('#nav-li-' +cid).removeClass();
	// 	}
	// };
	// this.showError = function(error)
	// {
	// 	MSE_JPS.popup.info(MSE_JPS.client.errorText(error), function(){
	// 		window.location.hash = MSE_JPS.client.id2hash(MSE_JPS.client.getCurrentId());
	// 	});
	// };
	// this.updateTitle = function(text)
	// {
	// 	document.title = $('#name').text()+' | '+text;
	// };
	this.slideTop = function()
	{
		$('html, body').animate({scrollTop:0}, '120');
	};
	// this.retile = function(element)
	// {
	// 	if (element)
	// 		element.closest('.packery').packery();
	// 	else
	// 		$('.packery').packery();
	// };
	// this.toggleBlock = function(e)
	// {
	// 	var block = $(e).closest('.block');
	// 	if (block.siblings().size())
	// 	{
	// 		block.toggleClass('expanded');
	// 		MSE_JPS.client.retile($(e));
	// 	}
	// 	else
	// 		block.find('.content').slideToggle();
	// };
	this.toggleBlock = function(element)
	{
		$(element).closest('.block').find('.block-body').toggleClass('hidden');
		$(element).closest('.packery').packery();
	}
	// this.toggleBib = function(e)
	// {
	// 	$(e).closest('.bibentry').find('.bibtray').toggle();
	// 	MSE_JPS.client.retile($(e));
	// };

	// ================================== Tools ==================================
	// this.errorText = function(error)
	// {
	// 	switch (error) {
	// 		case 400:	return '400 Bad Request';
	// 		case 401:	return '401 Unauthorized';
	// 		case 403:	return '403 Forbidden';
	// 		case 404:	return '404 Not Found';
	// 		case 502: return '502 Bad Gateway';
	// 		default:	return 'Undocumented error ('+error+')';
	// 		}
	// };

	// =============================== Page build ================================
	// this.buildNav = function()
	// {
	// 	$('#nav, #mininav')
	// 		.find('a')
	// 		.filter(function(){ return $(this).attr('id'); })
	// 		.each(function(){
	// 			$(this).attr('href', '#');
	// 			$(this).click(function(){
	// 				window.location.hash = $(this).text();
	// 				return false;
	// 			});
	// 		});
	// };

}).apply(MSE_JPS.client);

// ============================== Initialisation ===============================
// $(window).bind('hashchange', function() {
// 	MSE_JPS.client.hashHandler(true);
// });
$(function(){
	// MSE_JPS.client.buildNav();
	// MSE_JPS.client.hashHandler(false);
	// $("body").on("swipe", function(ev){
	// 	$("aside").animate({width: 'toggle'}, function(){
	// 		// $('section').packery();
	// 		MSE_JPS.client.retile();
	// 	});
	// });
});

