#!/usr/bin/perl
print "Enter a number between 0 to 256 : ";
my $dec = <STDIN>;
my @bits;

$bits[7] = ($dec & 128) <=> 0;
$bits[6] = ($dec & 64) <=> 0;
$bits[5] = ($dec & 32) <=> 0;
$bits[4] = ($dec & 16) <=> 0;
$bits[3] = ($dec & 8) <=> 0;
$bits[2] = ($dec & 4) <=> 0;
$bits[1] = ($dec & 2) <=> 0;
$bits[0] = ($dec & 1) <=> 0;
printf "The number you entered is in binary: %s\n", join '', reverse @bits;

#
# Output
#---------------------------------------------
#Enter a number between 0 to 256 : 27
#The number you entered is in binary: 00011011
#fonzi@ubuntu:~/Desktop$ 
#---------------------------------------------
