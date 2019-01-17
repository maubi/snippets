<?php

interface IPerson {
	public function getName();
	public function getAge();
	public function getSex();
	public function greet();
}

abstract class Person implements IPerson {
	protected $name;
	protected $age;
	protected $sex;

	public function __construct($name, $age, $sex) {
		$this->name	= $name;
		$this->age	= $age;
		$this->sex	= $sex;
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

	public abstract function greet();
}

class Otaku extends Person {
	public function greet() {
		echo $this->name . " says: O-H-A-Y-O-!\n";
	}
}

class Brit extends Person {
	public function greet() {
		echo $this->name . " says: H-I-!\n";
	}
}

class Programmer extends Person {
	public function greet() {
		echo $this->name . " says: H-E-L-L-O-W-O-R-L-D-!\n";
	}
}

$madarame = new Otaku('Madarame', 20, 'M');
$madarame->greet();
$harry = new Brit('Harry', 13, 'M');
$harry->greet();
$lain = new Programmer('Lain', 14, 'F');
$lain->greet();

?>
