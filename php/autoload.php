<?php
spl_autoload_register(function($className) {
	echo "Autoloading $className...\n";
	include $className . '.php';
});

$obj1 = new Class1;
$obj1->speak();
$obj2 = new Class2;
$obj2->speak();
?>
