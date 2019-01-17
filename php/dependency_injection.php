<?php

// http://php-di.org/doc/understanding-di.html

class Anime {
	private $title;
	private $lead;

	public function __construct($title, Person $lead) {
		$this->title = $title;
		$this->lead = $lead;
	}

	public function leadQuote() {
		$this->lead->speak();
	}
}

// service base
abstract class Person {
	public abstract function speak();
}

// service implementations
class MadScientist extends Person {
	public function speak() {
		echo "I'm mad scientist. It's so cool. Sonofabitch!\n";
	}
}

class Otaku extends Person {
	public function speak() {
		echo "Sugoi!\n";
	}
}

// client code
$saekano = new Anime('Saekano', new Otaku);
$saekano->leadQuote();

$steins = new Anime('Steins;Gate', new MadScientist);
$steins->leadQuote();
?>
