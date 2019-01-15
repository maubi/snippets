<?php
interface IPerson {
	public function getName();
	public function getAge();
	public function getSex();
}

interface ICharacter extends IPerson {
	public function getTitle();
}

class MangaCharacter implements ICharacter {
	private $name;
	private $age;
	private $sex;
	private $title;

	public function __construct($name, $age, $sex, $title) {
		$this->name		= $name;
		$this->age		= $age;
		$this->sex		= $sex;
		$this->title	= $title;
	}

	public function getName() {
		return $this->name;
	}

	public function getAge() {
		return $this->age;
	}

	public function getSex() {
		return $this->sex;
	}

	public function getTitle() {
		return $this->title;
	}
}

$rikka = new MangaCharacter('Kurata Ami', 18, 'female', 'Long Riders!');

echo $rikka->getName()	. "\n";
echo $rikka->getAge()	. "\n";
echo $rikka->getSex()	. "\n";
echo $rikka->getTitle()	. "\n";
?>
