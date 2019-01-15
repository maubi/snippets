<?php
namespace Foo {

class Manga {
	private $title;

	// As of PHP 5.3.3, methods with the same name as the last element of a namespaced class name will no longer be treated as constructor. This change doesn't affect non-namespaced classes.
	//public function Manga($title) {					
	public function __construct($title) {
		$this->title = $title;
	}

	public function getTitle() {
		return $this->title;
	}
}
}

namespace {
	$chuunibyou = new \Foo\Manga('Chuunibyou');
	echo $chuunibyou->getTitle() . "\n";
}
?>
