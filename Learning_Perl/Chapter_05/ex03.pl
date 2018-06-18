print "Enter the column width: ";
chomp($n = <STDIN>);

if ($n <= 0) {
    die "Negative number of column width\n";
}

print "Enter strings: \n";
chomp(@s = <STDIN>);
print "1234567890"x(($n+9)/10), "\n";

printf "%${n}s\n"x@s, @s;
