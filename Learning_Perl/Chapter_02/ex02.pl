chomp($r = <STDIN>);
$pi = 3.141592654;

if ($r > 0) {
    print $r * 2 * $pi;
} else {
    print "Invalid input\n";
}
