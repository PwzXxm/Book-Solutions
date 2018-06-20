sub find_max_length {
    my $mini = 0;
    foreach my $a (@_) {
        my $l = length $a;
        if ($l > $mini) {
            $mini = $l;
        }
    }
    $mini;
};

my @k = keys %ENV;
my $len = find_max_length(@k) + 5;

foreach (@k) {
    printf "%-${len}s: %s\n", $_, $ENV{$_};
}
