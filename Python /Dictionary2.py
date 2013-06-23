import random, string, csv

stringR = ''.join(random.choice(string.ascii_uppercase) for x in range(5))

a = []
dic2 = {}

open_file = open('sorted.txt')
for y in range (0, 100):
	x = open_file.readline()
	x = int(x)
	a.append(x)
	a.sort()
	string =  '\n'.join(map(str, a))
	dic2[x] = stringR

print "end of read"

print "The Input Data is : \n"+string

print dic2

writer = csv.writer(open('dict2.csv', 'wb'))
for key, value in dic2.items():
   writer.writerow([key, value])
