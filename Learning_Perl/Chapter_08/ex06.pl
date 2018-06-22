while (<>) {
    chomp;
    if (/\s\z/) {
        foreach $char (split('', $_)) {
            if ($char =~ /[\s]/) {
                print "_";
            } else {
                print $char;
            }
        }
        print "\n";
    }
}
