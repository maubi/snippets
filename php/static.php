<?php

class Anime {
	public static $c = 0;
	private $title;
	private $author;

	public function __construct($title, $author) {
		$this->title	= $title;
		$this->author	= $author;
		//self::$c++;
		static::$c++;		// https://stackoverflow.com/questions/151969/when-to-use-self-over-this
	}
}

$comicGirls					= new Anime('Comic Girls', 'Hanzawa');
$chuunibyou					= new Anime('Chuunibyou', 'N/A');
$serialExperimentsLain		= new Anime('Serial Experiments Lain', 'Abe Yoshitoshi');

echo Anime::$c . " anime created.\n";
?>
