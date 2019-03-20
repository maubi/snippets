<?php
$res=[];
for($i = 0; $i < 6; $i++) {
	echo "Press <ENTER> to cast line #", $i+1;
	$input = fgets(STDIN);

	$now = microtime();
	$micro = explode(".",  explode(" ", $now)[0] )[1];
	$digits = str_split($micro);
	$total = 0;

	// odd is HEAD(3, Yang), even is TAIL(2, Yin)
	for($j = 0; $j < 3; $j++) {
		if($digits[$j] % 2 == 0) {
			$total += 2;
		} else {
			$total += 3;
		}
	}	

	$res[$i] = $total;
}

foreach(array_reverse($res) as $line) {
	switch($line) {
		case 6:
			echo "-X-\n";
			break;
		case 7:
			echo "---\n";
			break;
		case 8:
			echo "- -\n";
			break;
		case 9:
			echo "-O-\n";
			break;
		default:
			echo "NANI!\n";
	}
}
?>
