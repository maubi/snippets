use Time::HiRes qw(usleep);
use Memoize;

memoize("fib", INSTALL => 'fastfib');

sub fib {
    my $n = shift;
    print "[$n]\n";

    usleep (1);

    return $n if ($n < 2);
    fib($n - 1) + fib($n - 2);
}

my $num1 = 5;
print fib($num1), "\n";
<STDIN>;

my $num2 = 10;
print fastfib($num2), "\n";
<STDIN>;

my $num2 = 10;
print fastfib($num2), "\n";
<STDIN>;
