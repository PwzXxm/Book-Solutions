use strict;

sub total {
    my $rst;
    foreach (@_) {
        $rst += $_;
    }
    $rst;
}

print(1..1000);
