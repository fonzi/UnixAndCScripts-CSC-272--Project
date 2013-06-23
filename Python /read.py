#read in from randomPython.py generated file
#sort the numbers
#and print to another file. 

import array

print "reading in the file"

a = []

string = 'x'

open_file = open('write.txt')
for y in range (0, 100):
	x = open_file.readline()
	x = int(x)
	a.append(x)
	print x
print "end of read"

a.sort() 

string =  '\n'.join(map(str, a))

with open ('sorted.txt', 'a')as the_file:
	the_file.write(string);

print string;