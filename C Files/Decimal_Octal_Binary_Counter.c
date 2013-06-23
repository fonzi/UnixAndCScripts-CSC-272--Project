/*
*
* Author: Alfonso Vazquez 
* CSC 272 Unix and C
* Create a c code that counts from 0 - 100 in decimal
* octal, hexadeciam and binary 
*
*/
#include <stdio.h>
#include <stdlib.h>
/*
* Main contains the calls of all four methods to call
* The decimal, octal, hexa, and binary.
* 
*/
void main ()
{
	printf("\nDecimal\tOctal\tHex\tBinary");
	printf("\n-----------------------------\n");
	decimalOctalHex();
	binary();

}

int decimalOctalHex()
{
	int i;//i keeps the count going up to 100
	for( i = 0; i < 101; i ++)
	{
		printf ("%d\t%o\t%X\n",i,i,i);
	}
}

int binary()
{
	int i, c, k;
	for(i = 0; i < 101; i ++)
	{
		for(c = 6; c >= 0; c--)
		{
			k = i >> c;
			if ( k & 1)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}