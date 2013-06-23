/*
* UNIX AND C 
* Alfonso Vazquez

Write a c program to input a message and output the message in reverse. 
Enter a message: Don't get mad, get even.
Reversal is:  .neve teg ,dam teg t'noD
Use and array to store the input string until '\n' or full. Then play it backwards. 

*
*/


#include <stdio.h>
#include <stdlib.h>

void main()
{
	//initiates an empty char array of 63 chars of lenght
	char string[64] ={0};
	char temp;
	printf("\nEnter The String:\n");
	//scans the sring with spaces so it does not terminate
	scanf("%[^\n]", string);

	//printf("%s\n",string);
	int i;
	for(i = 65; i > 0; i --)
	{
		printf("%c",string[i-1]);
	}
	printf("\n");

}

/*
*
OUTPUT

Enter The String:
THIS IS THE STRING
GNIRTS EHT SI SIHT

*/