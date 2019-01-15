<?php
	$name = "Rikka Takanashi";
	$anime = "";

	if(isset($name)) {
		echo "$name\n";
	}

	if(empty($surname)) {
		echo "Empty surname!\n";
	}

	if(empty($anime)) {
		echo "Empty anime!\n";
	}

	function func1($arg) {
		$local = "Kurata Ami";
		echo "func1:arg:         $arg\n";
		echo "func1:local:       $local\n";
		echo "func1:global:name: " . $GLOBALS['name'] . "\n";
		if(empty($name)) {
			echo "func1:name: EMPTY\n";
		}
	}

	func1("Kaname Madoka");

	function func2() {
		global $name;
		echo "$name\n";
	}

	func2();
?>
