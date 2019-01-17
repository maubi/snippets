<?php

class Person {
	protected $name;

	public function __construct($name) {
		$this->name = $name;
	}

	public function speak() {
		echo "My name is: ", $this->name, "\n";
	}
}

class Otaku extends Person {
	private $fav_anime;

	public function __construct($name, $fav_anime) {
		Person::__construct($name);
		$this->fav_anime = $fav_anime;
	}

	public function speak() {
		Person::speak();
		echo "My favourite anime is: ", $this->fav_anime, "\n";
	}
}

class Cat {
	private $name;

	public function __construct($name) {
		$this->name = $name;
	}

	public function meow() {
		echo "Meow!\n";
	}
}

function speakIt(Person $person) {
	$person->speak();
}

$harunobu = new Otaku('Madarame Harunobu', 'Long Riders!');
$justaguy = new Person('John Doe');
$kyoko = new Cat('Kyoko');

speakIt($harunobu);		// instanceof Person === TRUE
speakIt($justaguy);		// instanceof Person === TRUE

try {
	speakIt($kyoko);	// instanceof Person === FALSE
} catch(TypeError $e) {
	echo $e->getMessage();
}








?>
