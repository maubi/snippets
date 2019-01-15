<?php

// ASSIGNING
echo "ASSIGNING\n";
$a = "Nibutani Shinka";
$b = &$a;
echo "$b\n";
echo "-----------\n";

// PASSING
echo "PASSING\n";
function foo(&$var) {
	$var++;	
}

$c = 10;
foo($c);
echo "$c\n";
echo "-----------\n";

// RETURNING
echo "RETURNING\n";
function &bar() {
	static $list = array();

	foreach($list as $index => $value) {
		echo "$index:$value\n";
	}

	return $list;
}

$myList = &bar();
$myList[0] = "Rikka";
$myList[1] = "Ami";
$myList[2] = "Lain";
$myList = &bar();

function &baz() {
	static $val = 0;
	$val++;
	return $val;
}

$var1 =& baz();
baz();
baz();
echo "var1: $var1\n";
$var2 = baz();
baz();
baz();
echo "var1: $var1  - var2: $var2\n";
echo "-----------\n";
?>
