<?php

class Base {
	public function greet() {
		echo "Konnichiwa!\n";
	}
}

trait GreetEnglish {
	public function greet() {
		echo "Hi!\n";
	}
}

trait EasterEgg {
	public function egg() {
		echo "I'm mad scientist. It's so cool. Sunovabitch!\n";
	}
}

class MyGreet extends Base {
	use GreetEnglish;
	use EasterEgg;

	public function greet() {
		echo "Ciao!\n";
	}
}

class AnotherGreet extends Base {
	use GreetEnglish;
	use EasterEgg;
}

$greet1 = new MyGreet;
$greet1->greet();		// MEMBER overrides TRAIT overrides INHERITED
$greet1->egg();

$greet2 = new AnotherGreet;
$greet2->greet();		// TRAIT overrides INHERITED
$greet2->egg();
?>
