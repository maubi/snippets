package Foo;

sub new {
	my $class = shift;
	my $self = {};
	bless $self, $class;
	return $self;
}

sub algorithm {
	my $self = shift;
	my $a = shift;
	my $b = shift;
	print "Step1\n";							# step1: invariant
	print "Step2: ", $self->op($a, $b), "\n";	# step2: variantt
	print "Step3\n";							# step3: invariant

	sub op {
		die "This is an abstract method!\n";
	}
}

package FooAdd;

use base Foo;

sub op {
	my $self = shift;
	my ($a, $b) = @_;
	return $a + $b;
}

package FooMultiply;

use base Foo;

sub op {
	my $self = shift;
	my ($a, $b) = @_;
	return $a * $b;
}

package Main;

my $obj1 = new FooAdd;
$obj1->algorithm(0, 5);
my $obj2 = new FooMultiply;
$obj2->algorithm(0, 5);
