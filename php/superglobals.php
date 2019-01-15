<?php
	$x = "Homura Akemi";
	$y = "Violet Evergarden";

	function say() {
		$name = $GLOBALS['x'];
		echo "$name says: KONBANWA!\n";
	}

	say();

	$self = $_SERVER['PHP_SELF'];
	echo "SELF: $self\n";

	$request = count($_REQUEST);
	echo "REQUEST(count): $request\n";
?>
