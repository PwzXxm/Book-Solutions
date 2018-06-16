use v5.10;

sub total {
    my $rst;
    foreach (@_) {
        $rst += $_;
    }
    $rst;
}

sub avg {
    if (@_ == 0) { return }
    $n = @_;
    total(@_) / $n;
}

sub above_average {
    my $threshold = avg(@_);
    
    my @ans;
    foreach my $elem (@_) {
        if ($elem > $threshold) {
            push @ans, $elem;
        }
    }
    @ans;
}

my @fred = above_average(1..10);
print "\@fred is @fred\n";
print "(Should be 6 7 8 9 10)\n";
my @barney = above_average(100, 1..10);
print "\@barney is @barney\n";
print "(Should be just 100)\n";

sub greet {
    state @ppl;

    $p = shift;

    if (@ppl) {
        print "Hi $p! @ppl[-1] is also here!\n";
    } else {
        print "Hi $p! You are the first one here\n";
    }

    push @ppl, $p;
}

greet( "Fred" );
greet( "Barney" );
