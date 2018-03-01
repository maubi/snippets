use strict;
use warnings;

my @coins = (1,2,5,10,20,50);

# calc change in coins for given amount
sub change {
    my $n = shift;
    my @result;

    my $rest = $n;
    while ($rest > 0) {
        my $i;
        for ($i = $#coins; $i >= 0 and ($rest - $coins[$i]) < 0; $i--) {
        }
        push (@result, $coins[$i]);
        $rest -= $coins[$i];
    }

    return @result;
}

my $num1 = 15;
my @series = change($num1);
print join(" ", @series), "\n";

