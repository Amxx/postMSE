<?php
	$sections['contact'] = array(
		'title'            => 'Contact',
		'type'             => 'tabs',
		'settings'         => array('class' => 'danger'),
		'headerBackground' => 'assets/img/07-contact.jpg',
		'icon'             => 'forum',
		'content'          => array(
			// array(
			// 	'title'   => 'Adresse',
			// 	'icon'    => 'home',
			// 	'content' => '15 rue Delandine<br/>69002, Lyon, France'
			// ),
			// array(
			// 	'title'   => 'Phone',
			// 	'icon'    => 'call',
			// 	'content' => '
			// 		<p><span class="label label-danger" style="display: inline-block; width: 100px;">Mobile</span> (+33) 6 24 23 75 53</p>
			// 		<p><span class="label label-danger" style="display: inline-block; width: 100px;">Home  </span> (+33) 4 72 04 31 11</p>'
			// ),
			array(
				'title'   => 'Email',
				'icon'    => 'chat',
				'content' => '
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Work </span><span style="display: inline-block; width: 200px;">hadrien.croubois@iex.ec</span></p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Perso</span><span style="display: inline-block; width: 200px;">hadrien.croubois@gmail.com</span></p>'
			),
			array(
				'title'   => 'Privacy',
				'icon'    => 'fingerprint',
				'content' => '
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">PGP    </span><span style="display: inline-block; width: 350px;"><a href="privacy/hadriencroubois.asc"                      target="_blank">ACFB601FDF8A59101260CB21257827841FA70F93     </a></span></p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">ETH/ENS</span><span style="display: inline-block; width: 350px;"><a href="https://etherscan.io/address/hadriencroubois.eth" target="_blank">hadriencroubois.eth                          </a></span></p>'
			),
		),
		'footer' => '<div id="map_contact_fr" class="map"></div>'
	);
?>
