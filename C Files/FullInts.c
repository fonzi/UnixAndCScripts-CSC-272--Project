/*
Read a file with an arbitrary number of integers:
Get the file name from the command line.
Analyze the file for:
1) largest number
2) smallest number
3) median number 
Handle errors gracefully:
1) If file doesn't exist
2) If there are only a few numbers in the file 
3) If there are two numbers in the median location
4) Any other thing that may go wrong. 

* Alfonso Vazquez
*/
#include <stdio.h>
#include <stdlib.h>
const char FILE_NAME[] = "this.txt";//points to this files
int main()
{
	int num;
	int keeper[10];
	int c = 0;
	FILE *file;
	fopen(FILE_NAME,"r");
	if(file == NULL)
	{
		printf("FILE NOT OPEN SUCCESFULLY\n");
	}
	int max = 100;
	int min = 0;
	int index;
	int temp;
	while(1)
	{
		if(c = EOF)
		{
			break;
		}
		for(index = 0; index < 101; index ++ )
		{
			if(c == index)
			{
				temp = index;	
			}
		}
		for(index = 0; index < 10; index ++)
		{
			keeper[index] = temp;
			printf("%d\n",keeper[index]);
		}

	}
	printf("The largest number is %d\n", max);
	printf("The smallest number is%d\n", min);

}
