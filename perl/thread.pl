use strict;
use warnings;

use Thread;

my $ret_val;

# spawn 2 threads
my $t1 = Thread->new(\&thread1);
my $id1 = $t1->tid();
print "Spawned new thread: $id1\n";
my $t2 = Thread->new(\&thread2);
my $id2 = $t2->tid();
print "Spawned new thread: $id2\n";

### main: start ###
my $i = 10;
while($i) {
	print "[M][$i]\n";
	sleep 1;
	$i--;
}

# wait for threads to complete execution
$ret_val = $t1->join;
print "Thread #1 retval:  $ret_val\n";
$ret_val = $t2->join;
print "Thread #2 retval:  $ret_val\n";

### main: end ###

sub thread1 {
	my $tid = Thread->self->tid();
	my $i = 10;
	while ($i) {
		print "[$tid][$i]\n";
		sleep 2;
		$i--;
	}
	return 0;
}

sub thread2 {
	my $i = 5;
	my $tid = Thread->self->tid();
	while ($i) {
		print "[$tid][$i]\n";
		sleep 3;
		$i--;
	}
	return 0;
}

