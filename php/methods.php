<?php
class Otaku {
	public function greet1() {
		echo "Hi.\n";
	}

	public function greet2() {
		echo "Yo!\n";
	}
}

$madarame = new Otaku();

$method = "greet2";
$madarame->$method();
?>
