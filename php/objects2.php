<?php
class Otaku {
	private $name;
	private $anime;
	private $manga;

	public function __construct($name, $anime, $manga) {
		$this->name		= $name;
		$this->anime	= $anime;
		$this->manga	= $manga;
	}

	public function speak() {
		echo "Hello, my name is ", $this->name, "\n";
		echo "My favourite anime is ", $this->anime, "\n";
		echo "My favourite manga is ", $this->manga, "\n";
	}

	public static function isEqual($obj1, $obj2) {
		return $obj1 == $obj2;
	}

	public static function isIdentical($obj1, $obj2) {
		return $obj1 === $obj2;
	}
}

$obj1 = new Otaku("Madarame Harunobu", "Kujibiki Unbalance", "Kujibiki Unbalance");
$obj2 = new Otaku("Madarame Harunobu", "Kujibiki Unbalance", "Kujibiki Unbalance");
$obj3 = $obj1;

if(Otaku::isEqual($obj1, $obj2)) {
	echo "obj1 and obj2 are equal\n";
} else {
	echo "obj1 and obj2 are not equal\n";
}

if(Otaku::isIdentical($obj1, $obj2)) {
	echo "obj1 and obj2 are identical\n";
} else {
	echo "obj1 and obj2 are not identical\n";
}

if(Otaku::isEqual($obj1, $obj3)) {
	echo "obj1 and obj3 are equal\n";
} else {
	echo "obj1 and obj3 are not equal\n";
}

if(Otaku::isIdentical($obj1, $obj3)) {
	echo "obj1 and obj3 are identical\n";
} else {
	echo "obj1 and obj3 are not identical\n";
}
?>
