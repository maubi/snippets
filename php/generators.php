<?php
function xrange($start, $limit, $step = 1) {
	// TODO: error handling code
	if($step > 0) {
		for($i = $start; $i < $limit; $i += $step) {
			yield $i;
		}
	} elseif($step < 0) {
		for($i = $start; $i > $limit; $i -= $step) {
			yield $i;
		}
	} else {
		yield;
	}
}

foreach(xrange(0, 10, 2) as $number) {
	echo "val: $number\n";
}

foreach(xrange(0, 10, 0) as $number) {
	echo "val: $number\n";
}
?>
