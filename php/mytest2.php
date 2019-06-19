<?php
$waifus = [
	'Lain Iwakura',
	'Ami Kurata',
	'Sayaka Miki',
	'Maho Nishizumi',
	'Violet Evergarden',
	'Takaya Noriko',
	'Homura Akemi',
	'Tanya von Degurechaff',
	'Tamaki Honda',
	'Shiina Murakami',
	'Utaha Kasumigaoka',
	'Eriri Sawamura Spencer',
	'Madoka Ayukawa',
	'Rei Ayanami',
	'Chitose Karasuma',
	'Yuniko Kozuki',
	'Kaoruko Moeta',
	'Ika Musume',
	'Umiko Ahagon',
	'Momoka',
	'Umaru',
	'Mya Alice',
	'Arisu',
	'Akko Kagari',
	'Diana Cavendish',
	'Sucy Manbavaran',
	'Natsu',
	'Chise Hatori',
	'Ai',
	'Mai Kawashima',
	'Kurisu Makise',
	'Reina Kousaka',
	'Sayuki Kuroda',
	'Kuroyukihime',
	'San',
	'Shiina Mashiro',
	'Vigne',
	'Satania',
	'Gabu',
	'Hikaru Hiyama',
	'Asuka Souryuu Langley',
	'Deedlit',
	'Lynn Minmay',
	'Misa Hayase',
	'Enika Cellini',
	'Megumin',
	'Chihaya Ayase',
	'Ema Yasuhara',
	'Viktoriya Ivanovna Serebryakov',
	'Miho Nishizumi',
	'Momo Minamoto',
	'Michiru Hyoudou',
	'Megumi Katou',
	'Tamaki Honda',
	'Shiina Murakami',
	'Ayame Seki',
	'Kayo Fujikawa',
	'Yumine Fuda',
	'Kaya Ayase',
	'Kanna',
	'Kanade Oe',
	'Rin',
	'Reika Ryuzaki',
	'Shinobu Wakamiya',
	'Caska',
	'Coco',
	'Aoi Yukimura',
	'Hinata Kuraue',
	'Pai',
	'Parvati',
	'Saeko Nogami',
	'Yuzu Aihara',
	'Mei Aihara',
	'Kyoko Otonashi',
	'Yuuko Amasawa'
];

echo sizeof($waifus) . " waifus found.\n";

$res='';
for($i = 0; $i < 4; $i++) {
	echo "Press <ENTER> to cast bits";
	$input = fgets(STDIN);

	$now = microtime();
	$micro = explode(".",  explode(" ", $now)[0] )[1];
	$digits = str_split($micro);

	// odd is HEAD(3, Yang), even is TAIL(2, Yin)
	for($j = 0; $j < 2; $j++) {
		if($digits[$j] % 2 == 0) {
			$res .= '1';
		} else {
			$res .= '0';
		}
	}	
}

echo "DEBUG - res = $res\n";
$num = bindec($res) % sizeof($waifus);
echo "DEBUG - num = $num\n";
echo $waifus[$num] . "\n";
?>
