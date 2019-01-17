<?php

class Person {
	protected $name;

	public function __construct($name) {
		$this->name = $name;
	}

	public function printStr() {
		echo "Hi! I am " . $this->name . "\n";;
	}
}

class Otaku extends Person {
	private $fav_anime;
	private $fav_manga;

	public function __construct($name, $fav_anime, $fav_manga) {
		Person::__construct($name);
		$this->fav_anime = $fav_anime;
		$this->fav_manga = $fav_manga;
	}

	public function printStr() {
		echo "Hi! I am " . $this->name . "\n";
		echo "I like: " . $this->fav_anime . ' and ' . $this->fav_manga . "\n";
	}
}

class Normie extends Person {
	private $fav_cinecomic;

	public function __construct($name, $fav_cinecomic) {
		Person::__construct($name);
		$this->fav_cinecomic = $fav_cinecomic;
	}

	public function printStr() {
		echo "Hi! I am " . $this->name . "\n";
		echo "I like: " . $this->fav_cinecomic . "\n";
	}
}

function identify(Person $person) {
	$person->printStr();
}

$madarame = new Otaku('Madarame', 'Serial Experimens Lain', 'Kokou no Hito');
$saki = new Normie('Saki', 'Infinity War');
$justaguy = new Person('John Doe');

identify($madarame);
identify($saki);
identify($justaguy);
?>
