use lib '/home/momo/code/snippets/perl';
use Otaku;

$harunobu = new Otaku({
	name => 'Madarame Harunobu',
	favManga => 'Kokou no Hitou',
	favAnime => 'Comic Girls'
});

$harunobu->speak("konbanwa!");
$harunobu->printFavs();
print $harunobu->{name},		"\n";
print $harunobu->{favManga},	"\n";
print $harunobu->{favAnime},	"\n";
