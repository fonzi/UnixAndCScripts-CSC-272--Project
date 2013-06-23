/*
*Alfonso Vazquez
*Unix and C
*Write a c program that inputs a string of 
*numbers (eg. 838493955395) and counts 
*the number of times each digit appears. Output as: 
*Digit:   0  1  2  3  4  5  6  7  8  9  
*         0  0  0  3  1  3  0  0  2  3 
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	//these keep the count for each individual digit
	int c0=0, c1=0, c2=0, c3=0, c4=0,
	 	c5=0, c6=0, c7=0, c8=0, c9=0;
	int i;
	char number[11] = {1,2,3,4,5,4,4,8,9,0} ;
	for(i = 0; i < 11; i ++)
	{
		if(number[i] == 0)
		{
			c0 ++;
		}
		if(number[i] == 1)
		{
			c1 ++;
		}
		if(number[i] == 2)
		{
			c2 ++;
		}
		if(number[i] == 3)
		{
			c3 ++;
		}
		if(number[i] == 4)
		{
			c4 ++;
		}
		if(number[i] == 5)
		{
			c5 ++;
		}
		if(number[i] == 6)
		{
			c6 ++;
		}
		if(number[i] == 7)
		{
			c7 ++;
		}
		if(number[i] == 8)
		{
			c8 ++;
		}
		if(number[i] == 9)
		{
			c9 ++;
		}
	}
	printf("0:%d\n1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n7:%d\n8:%d\n9:%d\n"
		   ,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);

}

/*
*OUTPUT
0:2
1:1
2:1
3:1
4:3
5:1
6:0
7:0
8:1
9:1
*/