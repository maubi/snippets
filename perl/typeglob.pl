sub printGlob {
    my $glob = shift;
    print $glob "Noctu Orfei Aude Frateor\n";
}

sub printGlob2 {
    #local (*MYGLOB) = shift;   ---> PERLDOC. WHY?
    local *MYGLOB = shift;
    print MYGLOB "Sybilladura Lelladybura\n";
}

sub printGlobRef {
    my $globRef = shift;
    #print ref($globRef), "\n";
    print $globRef "Arae Aryrha\n";
}

open (FILE, ">", "test.txt");
printGlob(*FILE);
printGlob2(*FILE);
printGlobRef(\*FILE);
close (FILE);
print "Bye!\n";
