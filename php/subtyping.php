<?php

abstract class Person {
	public abstract function greet();
}

class Otaku extends Person {
	public function greet() {
		echo "Nya!\n";
	}
}

class Normie extends Person {
	public function greet() {
		echo "Yo!\n";
	}
}

class Cat {
	public function meow() {
		echo "M-E-O-W-W-W\n";
	}

	public function hiss() {
		echo "H-I-S-S-S-S\n";
	}
}

function letsHear(Person $person) {
	$person->greet();
}

$objects = [
	new Otaku,
	new Normie,
	new Cat
];

foreach($objects as $object) {
	try {
		letsHear($object);
	} catch(Error $e) {
		echo "ERROR: ", $e->getMessage(), "\n";
	}
}
?>
