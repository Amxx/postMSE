<?php

require_once 'assets/libs/phpfastcache/phpfastcache.php';

$cache = phpFastCache();
$hash  = md5($_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI'].$_SERVER['QUERY_STRING']);
$html  = __c('files')->get($hash);

if ($html == null)
{
	require_once 'config/data.inc';
	require_once 'assets/libs/Twig/Autoloader.php';

	Twig_Autoloader::register();
	$loader   = new Twig_Loader_Filesystem('assets/templates');
	$twig     = new Twig_Environment($loader, array());
	$template = $twig->loadTemplate('index.twig');
	$html     = $template->render($data);

	__c("files")->set($hash, $html, 600);
}
echo $html;

?>
