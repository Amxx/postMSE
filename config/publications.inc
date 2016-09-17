<?php
	$publications['croubois2016'] = array(
		'title'   => 'Étude pour la conception d\'une architecture autonomique et collaborative de gestion de workflow sur infrastructure dynamique.',
		'type'    => 'poster',
		'link'    => array('title' => 'Pdf', 'url' => 'https://shared.hadriencroubois.com/publications/2016/poster-compas2016.pdf'),
		'details' => array(
			'author'   => 'Hadrien Croubois',
			'journal'  => 'Compas\'2016',
		),
	);
	$publications['peterka2016'] = array(
		'title'   => 'Self-adaptive density estimation of particle data.',
		'type'    => 'journal',
		'link'    => array('title' => 'Pdf', 'url' => 'https://shared.hadriencroubois.com/publications/2015/peterka-siam-cse15-paper.pdf'),
		'details' => array(
			'author'   => 'Tom Peterka, Hadrien Croubois, Nan Li, Steve Rangel and Franck Cappello.',
			'journal'  => 'Submitted to SIAM Journal on Scientific Computing SISC Special Section on CSE15: Software and Big Data, 2015.',
			'abstract' => 'We present a study of density estimation, the conversion of discrete particle positions to a continuous field of particle density defined over a 3D Cartesian grid. The study features a methodology for evaluating the ac- curacy and performance of various density estimation methods, results of that evaluation for four density estimators, and a large-scale parallel algorithm for a self-adaptive method that computes a Voronoi tessellation as an intermediate step. We demonstrate the performance and scalability of our parallel algorithm on a supercomputer when estimating the density of 100 million particles over 500 billion grid points.',
			'bibtex'   => '@article{
	title = {Self-adaptive density estimation of particle data},
	author = {Peterka, Tom and Croubois, Hadrien and Li, Nan and Rangel, Steve and Cappello, Franck},
	journal = {Submitted to SIAM Journal on Scientific Computing SISC Special Section on CSE15: Software and Big Data},
	pages = {1--20},
	year = {2015}
}',
		),
	);
	$publications['caniou2015'] = array(
		'title'   => 'Standardized multi-protocol data management for grid and cloud gridrpc frameworks.',
		'type'    => 'journal',
		'link'    => array('title' => 'Pdf', 'url' => 'https://shared.hadriencroubois.com/publications/2014/2014_Standardized_multi-protocol_data_management_for_grid_and_cloud_gridrpc_frameworks.pdf'),
		'details' => array(
			'author'   => 'Yves Caniou, Hadrien Croubois, and Gaël le Mahec.',
			'journal'  => 'Submitted to SIAM Journal on Scientific Computing SISC Special Section on CSE15: Software and Big Data, 2015.',
			'abstract' => 'GridRPC is an international standard of the Open Grid Forum defining an API designed to allow applications to be submitted in a seamless way on large scale, heterogeneous and geographically distributed computing platforms. First versions of the standard did not take into account any data management feature. Data were parameters of the Remote Procedure calls, without any possibility to prefetch them, to use persistence, replication, external sources, etc., and making GridRPC codes middleware dependent. The data extension of the standard introduced a short set of functions and data structures to complete the API with simple but powerful data management features. In this paper, we present a modular and extensible implementation of both APIs, which needs only a few developments to be usable with any middleware relying on RPC, and which provides access to numerous and easy to extend protocols and data middleware to access data. Gaining data management functions, it introduces interesting potentiality for optimization that such an approach would provide to large scale applications.',
			'bibtex'   => '@article{
	title = {Standardized Multi-protocol Data Management for Grid and Cloud GridRPC Frameworks},
	journal = {Data Management in Cloud, Grid and P2P Systems},
	pages = {61-72},
	series = {Lecture Notes in Computer Science},
	volume = {8648},
	editor = {Hameurlain, Abdelkader and Dang, TranKhanh and Morvan, Franck},
	year = {2014},
	publisher = {Springer International Publishing},
	language = {English}
}',
		),
	);
?>