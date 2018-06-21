while (<>) {
    if (/(\S)\g{1}/) {
        print;
    }
}
