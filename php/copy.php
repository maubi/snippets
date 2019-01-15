<?php

class Waifu {
	private $name;

	public function __construct($name) {
		$this->name = $name;
	}

	public function getName() {
		return $this->name;
	}

	public function setName($name) {
		$this->name = $name;
	}
}

$rikka = new Waifu('Rikka');
$rikka->dummy = 10;

// Shallow or Deep?
$rikka2 = clone($rikka);
$rikka2->setName('Rikka Takanashi');

echo $rikka->getName();
echo "\n";
echo $rikka2->getName();

class Main {
	public $subObject;

}

?>
