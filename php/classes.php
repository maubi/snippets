<?php
	class Person {
		var $name;

		function Person($name) {
			$this->name = $name;
		}

		function getName() {
			echo $this->name;
		}
	}

	class Character extends Person {
		var $anime;

		function Character($name, $anime) {
			Person::Person($name);
			$this->anime = $anime;
		}

		function getAnime() {
			echo $this->anime;
		}
	}

	$rikka = new Character("Rikka Takanashi", "Chuunibyou");

	$rikka->getName();
	echo "\n";
	$rikka->getAnime();
	echo "\n";

	interface IStdMsg {
		public function sayHi();
		public function sayNihao();
	}

	class Messenger implements IStdMsg {
		public function sayHi() {
			echo "Hi!\n";
		}
		public function sayNihao() {
			echo "Nihao!\n";
		}
	}

	$myMessenger = new Messenger;
	$myMessenger->sayHi();
	$myMessenger->sayNihao();

	abstract class MyAbstract {
		function sayKonbanwa() {
			echo "KONBANWA\n";
		}
		abstract function say($msg);
	}

	class MyConcrete extends MyAbstract {
		function say($msg) {
			echo "Custom msg: $msg\n";
		}
	}

	$myConcrete1 = new MyConcrete;
	$myConcrete1->sayKonbanwa();
	$myConcrete1->say("O-H-A-Y-O-!\n");

	class Example {
		public $var1;
		public static $var2 = 0;
	}

	$example1 = new Example;
	$example1->var1 = "Lain";
	echo $example1->var1 . "\n";
	echo Example::$var2 . "\n";
?>
