<?php
class Otaku {
	public function speak() {
		echo "Ohayo!\n";
	}
}

class Normie {
	public function speak() {
		echo "Yo!\n";
	}
}

class Cat {
	public function meow() {
		echo "Meow!\n";
	}
}

function speakIt($entity) {
	try {
		$entity->speak();
	} catch(Error $e) {
		echo "Entity can not speak...\n";
	}
}

$harunobu	= new Otaku;
$saki		= new Normie;
$kyoko		= new Cat;

speakIt($harunobu);		// quack!
speakIt($saki);			// quack!
speakIt($kyoko);		// not a duck!
?>
