<?php

// https://nikic.github.io/2015/05/05/Internal-value-representation-in-PHP-7-part-1.html
// https://nikic.github.io/2015/06/19/Internal-value-representation-in-PHP-7-part-2.html

$rikka = 'Takanashi Rikka';
xdebug_debug_zval('rikka');
$shinka =& $rikka;
xdebug_debug_zval('rikka');
xdebug_debug_zval('shinka');

$a = 'Karasuma Chitose';
$b = $c = $a;
xdebug_debug_zval('a');
xdebug_debug_zval('b');
xdebug_debug_zval('c');

function foo() {
	$ami = 'Kurata Ami';
	xdebug_debug_zval('ami');
}

foo();

$waifus = array('Chitose', 'Aoi', 'Violet');
xdebug_debug_zval('waifus');

function bar() {
	return 64;
}

$val = 10 * bar();
xdebug_debug_zval('val');

class Manga {
	private $title;
	private $author;
	public	$c = 0;

	public function __constuct($title, $author) {
		$this->title	= $title;
		$this->author	= $author;
	}

	public function getTitle() {
		return $this->title;
	}
	
	public function getAuthor() {
		return $this->author;
	}

	public function printInternal() {
		xdebug_debug_zval('this');				// "this: No such symbol"
	}
}

xdebug_debug_zval('Manga');		// "No such symbol";
$longRiders = new Manga('Long Riders!', 'Unknown');
xdebug_debug_zval('longRiders');
$longRiders->printInternal();
?>
