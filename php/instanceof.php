<?php

class Person {
	private $first_name;
	private $last_name;
	private $age;
	private $sex;

	public function __construct($first_name, $last_name, $age, $sex) {
		$this->first_name	= $first_name;
		$this->last_name	= $last_name;
		$this->age			= $age;
		$this->sex			= $sex;
	}

	public function printStr() {
		echo "First Name: "	. $this->first_name	. "\n";
		echo "Last Name: "	. $this->last_name	. "\n";
		echo "Age: "		. $this->age		. "\n";
		echo "Sex: "		. $this->sex		. "\n";
	}
}

class Character extends Person {
	private $title;

	public function __construct($first_name, $last_name, $age, $sex, $title) {
		Person::__construct($first_name, $last_name, $age, $sex);
		$this->title = $title;
		
	}

	public function printStr() {
		Person::printStr();
		echo "Title: "		. $this->title		. "\n";
	}
}

$rikka = new Character('Rikka', 'Takanashi', 16, 'F', 'Chuunibyou');
$rikka->printStr();
if($rikka instanceof Person) {
	echo '$rikka is a Person'		. "\n";
}
if($rikka instanceof Character) {
	echo '$rikka is a Character'	. "\n";
}

?>
