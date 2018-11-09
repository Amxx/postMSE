<?php
	require_once 'publications.inc';
	foreach (glob('config/sections/*.inc') as $file) require_once($file);

	$data = array(
		'title'            => 'Hadrien Croubois',
		'subtitle'         => 'PhD student',
		'icon'             => 'assets/img/croubois.png',
		'headerBackground' => 'assets/img/background.jpg',
		'description'      => 'I am a French PhD student working in the <a href="http://avalon.ens-lyon.fr/" target="_blank" class="text-info">Avalon</a> team of the <a href="http://www.ens-lyon.fr/LIP/" target="_blank" class="text-info">LIP</a> at the <a href="http://www.ens-lyon.eu" target="_blank" class="text-info">École Normale Supérieure de Lyon</a>. I specialize in  parallel processing, distributed systems, and workflow distribution. I also have some background in resiliency, compilation and image rendering. My PhD advisor is <a href="http://graal.ens-lyon.fr/~ecaron/" target="_blank" class="text-info">Eddy Caron</a>',
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
