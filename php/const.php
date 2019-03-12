<?php
class Otaku {
	public const BASE = 'Akihabara';

	private $name;
	private $anime;
	private $manga;

	public function __construct($name, $anime, $manga) {
		$this->name = $name;
		$this->anime = $anime;
		$this->manga = $manga;
	}

	public function say() {
		echo "NAME:  " . $this->name	."\n";
		echo "ANIME: " . $this->anime	."\n";
		echo "MANGA: " . $this->manga	."\n";
	}
}

$madarame = new Otaku("Madarame Harunobu", "Kujibiki Unbalance", "Kujibiki Unbalance");
$madarame->say();
echo "Base is "	. Otaku::BASE		. "\n";
//echo "Base is "	. $madarame->BASE	. "\n";		Undefined property Otaku::$BASE	
?>
