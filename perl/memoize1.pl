use Memoize;

memoize("factorial");

sub factorial {
    my $n = shift;

    sleep 1;

    return 1 if ($n == 1);
    return ($n * factorial($n - 1));
}

my $num1 = 3;
print factorial($num1), "\n";

my $num2 = 10;
print factorial($num2), "\n";

print factorial($num2), "\n";
