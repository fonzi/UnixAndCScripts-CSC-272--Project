import random, string
import array
import csv

print "reading in the file"

a = []
temp = 0
dic = {}

open_file = open('sorted.txt')
for y in range (0, 100):
	from random import randint
	temp = randint(0,999)
	x = open_file.readline()
	x = int(x)
	a.append(x)
	string =  '\n'.join(map(str, a))
	dic[x] = temp

print "end of read"

print "The Input Data is : \n"+string

print dic

writer = csv.writer(open('dict.csv', 'wb'))
for key, value in dic.items():
   writer.writerow([key, value])
