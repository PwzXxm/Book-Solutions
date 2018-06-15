chomp($r = <STDIN>);
$pi = 3.141592654;


if ($r < 0) {
    print "radius cannot be negative. Circumference = 0\n";
} else {
    print 2*$r*$pi;
}
