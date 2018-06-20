%names = (
    fred => 'flintstone',
    barney => 'rubble',
    wilma => 'flintstone'
);

chomp($n = <STDIN>);

if (exists $names{$n}) {
    print $names{$n}."\n";
} else {
    print "Not in the name book\n";
}
