<?php
	$sections['contact'] = array(
		'title'            => 'Contact',
		'type'             => 'tabs',
		'settings'         => array('class' => 'danger'),
		'headerBackground' => 'assets/img/07-contact.jpg',
		'icon'             => 'call',
		'content'          => array(
			array('title' => 'Adresse', 'icon' => 'home', 'content' => '<strong>Hadrien Croubois</strong><br/>15 rue delandine<br/>69002, Lyon, France'),
			array('title' => 'Phone',   'icon' => 'call', 'content' => '<p><span class="label label-info" style="display: inline-block; width: 100px;">Mobile</span> (+33) 6 24 23 75 53</p><p><span class="label label-success" style="display: inline-block; width: 100px;">Home</span> (+33) 4 72 04 31 11</p>'),
			array('title' => 'Email',   'icon' => 'chat', 'content' => '<p><span class="label label-info" style="display: inline-block; width: 100px;">main</span><span style="display: inline-block; width: 200px;">hadrien.croubois@ens-lyon.fr</span></p><p><span class="label label-success" style="display: inline-block; width: 100px;">other</span><span style="display: inline-block; width: 200px;">hadrien.croubois@inria.fr</span></p>'),
		),
		'footer'           => '<div id="map_contact_fr" class="map"></div>'
	);
?>