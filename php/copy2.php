<?php
class Character {
	private $name;
	private $anime;
	private $secret;

	public function __construct($name, $anime) {
		$this->name		= $name;
		$this->anime	= $anime;
	}

	public function setSecret($secret) {
		$this->secret = $secret;
	}

	public function getSecret() {
		return $this->secret;
	}
}

class Anime {
	private $title;
	private $year;

	public function __construct($title, $year) {
		$this->title	= $title;
		$this->year		= $year;
	}
}

$shinka = new Character("Nibutani Shinka", new Anime("Chuunibyou", 2015));
$shinka->setSecret("I love pantsu!");

// shallow copy
$shinka2 = $shinka;
$shinka2->setSecret("I love neko!");

// deep copy
$shinkaClone = clone $shinka;
$shinkaClone->setSecret("I love megane!");

echo "shinka's secret       = ", $shinka->getSecret(), "\n";
echo "shinka2's secret      = ", $shinka2->getSecret(), "\n";
echo "shinkaClone's secret  = ", $shinkaClone->getSecret(), "\n";


?>
