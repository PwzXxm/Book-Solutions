while (<>) {
    chomp;
    if (/(\b\w*a\b)/) {
        print "Matched: |$`<$&>$'|\n";
        print "\t$1\n";
    } else {
        print "No match: |$_|\n";
    }
}
