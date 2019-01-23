<?php
class Otaku {
	private $name;
	private $favManga;
	private $favAnime;

	static $count = 0;

	public function __construct($name, $favManga, $favAnime) {
		$this->name		= $name;
		$this->favManga	= $favManga;
		$this->favAnime	= $favAnime;
		static::$count++;
	}
}

$obj1 = new Otaku('ego', 'Orange Road', 'Dangaioh');
$obj2 = new Otaku('xyx', 'Kokou no Hitou', 'Serial Experiments Lain');

echo Otaku::$count, "\n";
?>
