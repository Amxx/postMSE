<?php
	$sections['activism'] = array(
		'title'            => 'Activism',
		'type'             => 'blocks',
		'settings'         => array('class' => 'info', 'width' => 'col-reactive'),
		'headerBackground' => 'assets/img/06-activism.jpg',
		'icon'             => 'lock',
		'content'          => array(
			array(
				'title'   => '[Conference] Les algorithms qui font l\'internet',
				'content' => '<p>Conference publique dans le cadre de la fête de la science 2016</p><ul><li>Samedi 15 octobre 2016, 16h30, ENS de Lyon</ul>',
				'biblio'   => array(
					array(
						'title' => 'Les algorithms qui font l\'internet',
						'type'  => 'slides',
						'link'  => array('title' => 'Link', 'url' => '//shared.hadriencroubois.com/activism/FeteDeLaScience2016.pdf'),
					),
				),
			),
			array(
				'title'   => '[Atelier] Vie privée & protection des données',
				'content' => '<p>Intervention dans le cadre de l\'occupation de la salle F01 de l\'ENS de Lyon</p><ul><li>Mercredi 27 avril 2016, 19h, Salle F01 ENS de Lyon (site descartes)</ul>',
			),
			array(
				'title'   => '[Débat] Enjeux politiques de l’informatique',
				'content' => 'Animation d\'un débat dans le cadre de l\'<a href="https://nuitdeboutlyon.fr/universite-populaire/" target="_blank" class="text-%class%">Université populaire</a> et de #SciencesDebout Lyon.<ul><li>Jeudi 45 mars (14 avril) 2016, 19h, Place guichard</ul>',
			),
		),
	);
?>