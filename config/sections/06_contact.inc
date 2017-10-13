<?php
	$sections['contact'] = array(
		'title'            => 'Contact',
		'type'             => 'tabs',
		'settings'         => array('class' => 'danger'),
		'headerBackground' => 'assets/img/07-contact.jpg',
		'icon'             => 'call',
		'content'          => array(
			array(
				'title'   => 'Adresse',
				'icon'    => 'home',
				'content' => '<strong>Hadrien Croubois</strong><br/>15 rue Delandine<br/>69002, Lyon, France'
			),
			array(
				'title'   => 'Phone',
				'icon'    => 'call',
				'content' => '
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Mobile</span> (+33) 6 24 23 75 53</p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Home  </span> (+33) 4 72 04 31 11</p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Office</span> (+33) 4 26 23 39 40</p>'
			),
			array(
				'title'   => 'Email',
				'icon'    => 'chat',
				'content' => '
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Work </span><span style="display: inline-block; width: 200px;">hadrien.croubois@ens-lyon.fr</span></p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Iexec</span><span style="display: inline-block; width: 200px;">hadrien.croubois@iex.ec</span></p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Perso</span><span style="display: inline-block; width: 200px;">hadrien.croubois@gmail.com</span></p>'
			),
			array(
				'title'   => 'Privacy',
				'icon'    => 'fingerprint',
				'content' => '
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">PGP    </span><span style="display: inline-block; width: 350px;"><a href="privacy/hadriencroubois.asc"        target="_blank">ACFB601FDF8A59101260CB21257827841FA70F93     </a></span></p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">Ring ID</span><span style="display: inline-block; width: 350px;"><a href="privacy/hadriencroubois-ringid.sig" target="_blank">ring:8d965483f569267fc38e59b8e4809e505cbc9d6f</a></span></p>
					<p><span class="label label-danger" style="display: inline-block; width: 100px;">ETH    </span><span style="display: inline-block; width: 350px;"><a href=""                                   target="_blank">0x64e77a327A0562483a5e413451B9102898617E9d   </a></span></p>'
			),
		),
		'footer' => '<div id="map_contact_fr" class="map"></div>'
	);
?>