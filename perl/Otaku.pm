package Otaku;
use Moose;
with 'HasFav';

has 'name'	=> (
	is => 'rw',
	isa => 'Str',
);

sub speak{
	my $self = shift;
	print uc($self->name), ": $_[0]\n";
}

1;
