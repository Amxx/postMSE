<?php
	require_once 'publications.inc';
	foreach (glob('config/sections/*.inc') as $file) require_once($file);

	$data = array(
		'title'            => 'Hadrien Croubois',
		'subtitle'         => 'PhD | Research Scientist',
		'icon'             => 'assets/img/croubois.png',
		'headerBackground' => 'assets/img/background.jpg',
		'description'      => 'French PhD in computer science from the <a href="http://www.ens-lyon.eu" target="_blank" class="text-info">École Normale Supérieure de Lyon</a>.<br/>Blockchain, Cloud and distributed systems expert.',
		'sections'         => $sections,
		'socials' => array(
			array('url' => 'https://www.facebook.com/hcroubois',             'fa' => 'fa fa-facebook'      ),
			array('url' => 'https://twitter.com/Amxx',                       'fa' => 'fa fa-twitter'       ),
			array('url' => 'https://www.flickr.com/photos/hadriencroubois/', 'fa' => 'fa fa-flickr'        ),
			array('url' => 'https://www.instagram.com/hadriencroubois/',     'fa' => 'fa fa-instagram'     ),
			array('url' => 'https://stackoverflow.com/users/1503898/amxx',   'fa' => 'fa fa-stack-overflow'),
			array('url' => 'https://github.com/Amxx',                        'fa' => 'fa fa-github'        ),
			array('url' => 'https://www.linkedin.com/in/hadriencroubois',    'fa' => 'fa fa-linkedin'      ),
		),
	);
?>
