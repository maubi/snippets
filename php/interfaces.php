<?php

interface ICharacter {
	public function getName();
	public function getAnime();
}

interface IWaifu extends ICharacter {
	public function getDere();
}

class Waifu implements IWaifu {
	private $name;
	private $anime;
	private $dere;

	public function __construct($name, $anime, $dere) {
		$this->name		= $name;
		$this->anime	= $anime;
		$this->dere		= $dere;
	}

	public function getName() {
		return $this->name;
	}

	public function getAnime() {
		return $this->anime;
	}

	public function getDere() {
		return $this->dere;
	}
}

$rikka = new Waifu('Rikka Takanashi', 'Chuunibyou', 'dandere');
echo $rikka->getName()	. "\n";
echo $rikka->getAnime()	. "\n";
echo $rikka->getDere()	. "\n";

?>
