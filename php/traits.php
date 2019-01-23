<?php

class Base {
	public function greet() {
		echo "Konnichiwa!\n";
	}
}

trait GreetEnglish {
	public function greet() {
		echo "Hi!\n";
	}
}

trait EasterEgg {
	public function egg() {
		echo "I'm mad scientist. It's so cool. Sunovabitch!\n";
	}
}

class MyGreet extends Base {
	use GreetEnglish;
	use EasterEgg;

	public function greet() {
		echo "Ciao!\n";
	}
}

class AnotherGreet extends Base {
	use GreetEnglish;
	use EasterEgg;
}

$greet1 = new MyGreet;
$greet1->greet();		// MEMBER overrides TRAIT overrides INHERITED
$greet1->egg();

$greet2 = new AnotherGreet;
$greet2->greet();		// TRAIT overrides INHERITED
$greet2->egg();


trait DatiAnagrafici {
	public $first_name;
	public $last_name;
	public $age;
	public $sex;
	public $address1;
	public $address2;

	public abstract function speak();
}

abstract class Person {
	use DatiAnagrafici;
}

class Otaku extends Person {
	public function speak() {
		echo $this->first_name, ": Konbanwa!\n";
	}
}

class Normie extends Person {
	public function speak() {
		echo $this->first_name, ": Yo!\n";	
	}
}

$harunobu = new Otaku;
$harunobu->first_name = 'Harunobu';
$harunobu->last_name = 'Madarame';
$harunobu->speak();

$saki = new Normie;
$saki->first_name = 'Saki';
$saki->last_name = 'Kasukabe';
$saki->speak();

?>









