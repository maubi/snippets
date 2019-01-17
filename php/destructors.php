<?php
class Anime {
	private $title;

	public function __construct($title) {
		echo "CONSTRUCTOR called\n";
		$this->title = $title;
	}

	public function __destruct() {
		echo "DESTRUCTOR called\n";
	}
}

$sabagebu = new Anime('Sabagebu!');
unset($sabagebu);
?>
