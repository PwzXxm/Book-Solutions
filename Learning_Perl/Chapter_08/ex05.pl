while (<>) {
    chomp;
    if (/(?<word>\b\w*a\b)(?<ch>.{0,5})/) {
        print "Matched: |$`<$&>$'|\n";
        print "\tword: $+{word}\n";
        print "\tafter $+{ch}\n";
    } else {
        print "No match: |$_|\n";
    }
}
