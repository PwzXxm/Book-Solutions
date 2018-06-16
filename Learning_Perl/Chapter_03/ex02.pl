@a = qw( fred betty barney dino wilma pebbles bamm-bamm );
chomp(@n = <STDIN>);
foreach (@n) {
    if ($_ < 1 || $_ > 7) {
        print "Invalid index\n";
    }
    else {
        print "$a[$_-1]\n";
    }
}
