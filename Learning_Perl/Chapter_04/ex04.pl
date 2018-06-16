use v5.10;

sub greet {
    state @ppl;

    $p = shift;

    if (@ppl) {
        print "Hi $p! I'v seen: @ppl\n";
    } else {
        print "Hi $p! You are the first one here\n";
    }

    push @ppl, $p;
}

greet( "Fred" );
greet( "Barney" );
greet( "Wilma" );
greet( "Betty" );
