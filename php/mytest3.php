<?php
$husbandos = [
	'Roll Kran',
	'Ryo Saeba',
	'Yakumo Fujii',
	'Harunobu Madarame',
	'Kenji Sasahara',
	'Kenshin Himura',
	'Hajime Saito',
	'Aoshi Shinomori',
	'Ushio Aotsuki',
	'Shigure Aotsuki',
	'Tora',
	'Shiba Midou',
	'Sorata',
	'Spike Spiegel',
	'Parn',
	'Slain',
	'Seiya',
	'Kanon',
	'Shaka',
	'Shogo Makishima',
	'Shinji Ikari',
	'Kousaka',
	'Howl',
	'Joe Yabuki',
	'Rei',
	'Vegeta',
	'Kirito',
	'Silver Crow',
	'General Jinn',
	'Oboro',
	'Yuusaku Godai',
	'Serpico',
	'Buntarou Mori',
	'Dark Schneider',
	'Hikaru Hichijo',
	'Ryuunosuke Akasaka',
	'Near',
	'Kyosuke Kasuga',
	'Griffith',
	'Riuji',
	'Yu Ominae',
	'Jean Jacquemonde',
	'Ikki',
	'Shun',
	'Freeman',
	'L',
	'Mello',
	'Taichi',
	'Aki-kun'
];

echo sizeof($husbandos) . " husbandos found.\n";

$res='';
for($i = 0; $i < 3; $i++) {
	echo "Press <ENTER> to cast bits";
	$input = fgets(STDIN);

	$now = microtime();
	$micro = explode(".",  explode(" ", $now)[0] )[1];
	$digits = str_split($micro);

	for($j = 0; $j < 2; $j++) {
		if($digits[$j] % 2 == 0) {
			$res .= '1';
		} else {
			$res .= '0';
		}
	}	
}

echo "DEBUG - res = $res\n";
$num = bindec($res) % sizeof($husbandos);
echo "DEBUG - num = $num\n";
echo $husbandos[$num] . "\n";
?>
