<?php
	$array1 = array(10, "Lain", 20);

	for($i = 0; $i < count($array1); $i++) {
		echo $array1[$i] . "\n";
	}

	$array2 = array("Lain" => 100, "Ami" => 200, "Violet" => "Evergarden");

	foreach($array2 as $key => $value) {
		echo "$key:$value\n";
	}

	$array3 = array("Madoka", "Akemi");
	foreach($array3 as $index => $value) {
		echo "$index:$value\n";
	}
?>
