#
#Generate 100 numbers from 0 to 999
#Write those 100 numbers to a file calld write.txt
#
import random

print "Generating Random Numbers"

temp = 0

with open ('write.txt', 'a')as the_file:
	for x in range (0 , 100):
		from random import randint
		temp = randint(0, 999);
		the_file.write(str(temp)+"\n");