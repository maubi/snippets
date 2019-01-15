<?php
class Waifu {
	public $name;
	public $anime;
	public $dere;

	public function __construct($name, $anime, $dere) {
		$this->name		= $name;
		$this->anime	= $anime;
		$this->dere		= $dere;
	}
}

$shinka = new Waifu('Nibutani Shinka', 'Chuunibyou', 'tsundere');

foreach($shinka as $key => $value) {
	echo "$key:$value\n";
}

class MyIterator implements Iterator {
	private $var = array();

	public function __construct($arg) {
		if(is_array($arg)) {
			$this->var = $arg;
		}
	}

	public function rewind() {
		reset($this->var);
	}

	public function current() {
		return current($this->var);
	}

	public function key() {
		return key($this->var);
	}

	public function next() {
		return next($this->var);
	}

	public function valid() {
		$key = key($this->var);
		return $key !== NULL && $key !== FALSE;
	}
}

$waifus = array('Shinka', 'Elf', 'Yuniko');
$myIterator = new MyIterator($waifus);
foreach($myIterator as $key => $value) {
	echo "$key::$value\n";
}
?>
