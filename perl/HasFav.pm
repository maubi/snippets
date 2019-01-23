package HasFav;

use Moose::Role;

has favManga => (
	'is' => 'rw',
	'isa' => 'Str',
);

has favAnime => (
	'is' => 'rw',
	'isa' => 'Str',
);

sub printFavs {
	my $self = shift;

	print "FAV-MANGA: ", $self->favManga, "\n";
	print "FAV-ANIME: ", $self->favAnime, "\n";
}

1;
