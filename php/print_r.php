<?php
$waifus = array('Takanashi Rikka', 'Nibutani Shinka', 'Miyazono Kaori');
print_r($waifus);

$animes = array('Chuunibyou' => 0, 'Seriale Experiments Lain' => 1, 'Comic Girls' => 2);
print_r($animes);

class Manga {
	private $title;
	private $author;

	public function __construct($title, $author) {
		$this->title = $title;
		$this->author = $author;
	}

	public function getName() {
		return $this->name;
	}

	public function getAuthor() {
		return $this->author;
	}

	public function setName($name) {
		$this->name = $name;
	}

	public function setAuthor($author) {
		$this->author = $author;
	}
}

$comicGirls = new Manga('Comic Girls', 'Hanzawa');
print_r($comicGirls);
?>
