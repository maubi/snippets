package Foo1;					# subsystem 1

sub new {
	my $class = shift;
	my $self = {};
	bless $self, $class;
	return $self;
}

sub method1_a {
	print "Method 1-A\n";
}

sub method1_b {
	print "Method 1-B\n";
}

package Foo2;						# subsystem 2

sub new {
	my $class = shift;
	my $self = {};
	bless $self, $class;
	return $self;
}

sub method2_a {
	print "Method 2-A\n";
}

sub method2_b {
	print "Method 2-B\n";
}

package Facade;						# facade for subsystems 1 and 2

sub new {
	my $class = shift;
	my $self = {};
	bless $self, $class;
	$self->{obj1} = new Foo1;	
	$self->{obj2} = new Foo2;
	return $self;
}

sub method_a {
	my $self = shift;
	print "This is facade method_a\n";
	$self->{obj1}->method1_a;
	$self->{obj2}->method2_a;
}

sub method_b {
	my $self = shift;
	print "This is facade method_b\n";
	$self->{obj1}->method1_b;
	$self->{obj2}->method2_b;
}


package main;						# facade client code

my $facade1 = new Facade;
$facade1->method_a;
$facade1->method_b;


