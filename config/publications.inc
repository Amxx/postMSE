<?php
	$_GET['library']=1;
	require_once('assets/libs/bibtexbrowser/bibtexbrowser.php');

	$db = new BibDataBase();
	$db->load('config/biblio.bib');

	$entries = $db->getEntries();
	uasort($entries, 'compare_bib_entries');

	foreach ($entries as $bibentry)
	{
		$publications[$bibentry->getKey()] = array(
			'title'   => $bibentry->getField('title'),
			'type'    => $bibentry->getType(),
			'link'    => array('title' => 'Pdf', 'url' => $bibentry->getField('file')),
			'details' => array(
				'author'   => $bibentry->getField('author'),
				'details'  => implode(' ', array_filter(array(
					$bibentry->getField('journal'),
					$bibentry->getField('conference'),
					$bibentry->getField('organization') ? '('.$bibentry->getField('organization').')' : ''
				))),
				'abstract' => $bibentry->getField('abstract'),
				'bibtex'   => $bibentry->getText(),
			),
		);
	}
?>
