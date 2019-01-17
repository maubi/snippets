<?php

namespace Overload;

class Manga {
	protected $title;
	protected $author;

	public function __construct($title, $author) {
		$this->title	= $title;
		$this->author	= $author;
	}

	public function __get($name) {
		echo "Getting '$name'...\n";
		return $this->$name;
	}

	public function __set($name, $value) {
		echo "Setting '$name'...\n";
		$this->$name = $value;
	}

	public function __call($name, $arguments) {
		echo "Calling '$name'...\n";
		if($name === 'say') {
			$this->$name($arguments[0]);
		}
	}

	public function __callStatic($name, $arguments) {
		echo "Calling static '$name'...\n";
		if($name === 'easterEgg') {
			self::$name($arguments[0]);
		}
	}

	private static function easterEgg($line) {
		echo "BUNNY GIRL SENPAY says: $line\n";
	}

	private function say($line) {
		echo "$line\n";
	}
}

$longRiders = new Manga('Long Riders!', 'Unknown Author');

echo $longRiders->title . "\n";
$longRiders->title = 'long_riders';
echo $longRiders->title . "\n";
$longRiders->say("Nyan Nyan!");

Manga::easterEgg("I'm mad scientist. It's so cool. Sonofabitch!");

?>
