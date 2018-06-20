my %hash;
while (chomp(my $n = <STDIN>)) {
    $hash{$n} += 1;
}

while ( ($k, $v) = each %hash ) {
    print "$k => $v\n";
}
