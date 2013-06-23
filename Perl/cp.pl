#!/usr/bin/perl
print "This file will be copies to a dir";

use File::Copy;

copy("this.txt","Data and Consuer E-commerce analysis.txt") or die "Copy failed: $!";
copy("Copy.pm",\*STDOUT);

move("/dev1/this.txt","Data and Consuer E-commerce analysis.txt");

use File::Copy "cp";

$n = FileHandle->new("/a/file","r");

cp($n,"x");