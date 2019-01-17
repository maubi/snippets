<?php

class MangaList implements ArrayAccess, Iterator {
	private $list = array();

	public function offsetGet($offset) {
		if(isset($this->list[$offset])) {
			return $this->list[$offset];
		} else {
			return NULL;
		}
	}

	public function offsetSet($offset, $value) {
		if($offset === NULL) {
			$this->list[] = $value;
		} else {
			$this->list[$offset] = $value;
		}
	}

	public function offsetExists($offset) {
		return isset($this->list[$offset]);
	}

	public function offsetUnset($offset) {
		unset($this->list[$offset]);
	}

	public function rewind() {
		reset($this->list);
	}

	public function current() {
		return current($this->list);
	}

	public function key() {
		return key($this->list);
	}

	public function next() {
		return next($this->list);
	}

	public function valid() {
		$key = key($this->list);
		return $key !== NULL && $key !== FALSE;
	}
}

$myManga = new MangaList;

$myManga[0]	= 'Orange';
$myManga[1]	= 'Touch';
$myManga[2]	= 'B.Reaction';
$myManga[]	= 'Rosario to Vampire';

foreach($myManga as $key => $value) {
	echo "$key->$value\n";
}


/*
$arr1 = array();
$arr1[0]	= 10;
$arr1[]		= 20;
foreach($arr1 as $value) {
	echo "$value\n";
}
*/




?>
