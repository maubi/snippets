<?php

interface IPerson {
	public function speak();
	public function eat();
	public function sleep();
}

abstract class Person implements IPerson {
	private $first_name;
	private $last_name;

	public function __construct($first_name, $last_name) {
		$this->first_name = $first_name;
		$this->last_name = $last_name;
	}

	public function __get($name) {
		if($name === 'fullName') {
			return $this->first_name . ' ' . $this->last_name;
		}
		return $this->$name;
	}

	public function __set($name, $value) {
		$this->$name = $value;
	}

	public abstract function speak();
	public abstract function eat();
	public abstract function sleep();
}

class Otaku extends Person {
	public function speak() {
		echo strtoupper($this->fullName), ': ';
		echo "sugoi!\n";
	}

	public function eat() {
		echo strtoupper($this->fullName), ': ';
		echo "eating ramen...\n";
	}

	public function sleep() {
		echo strtoupper($this->fullName), ': ';
		echo "sleeping with my dakimakura...\n";
	}
}

class Normie extends Person {
	public function speak() {
		echo strtoupper($this->fullName), ': ';
		echo "hi!\n";
	}

	public function eat() {
		echo strtoupper($this->fullName), ': ';
		echo "eating pizza...\n";
	}

	public function sleep() {
		echo strtoupper($this->fullName), ': ';
		echo "sleeping besides my naked man...";
	}
}

$harunobu = new Otaku('Harunobu', 'Madarame');
$saki = new Normie('Saki', 'Kasukabe');

$harunobu->speak();
$saki->speak();

$harunobu->eat();
$saki->eat();

$harunobu->sleep();
$saki->sleep();



?>
