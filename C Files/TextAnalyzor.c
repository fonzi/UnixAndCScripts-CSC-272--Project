/*
* Count the lines, chars and words from a files
* Used recursion poiting to this same file.
* Alfonso Vazquez
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const char FILE_NAME[] = "TextAnalyzor.c";//points to this files
int main()
{
	int charCount = 0; //keeps the count of the chars
	int lineCount = 0; 
	int wordCount = 0;
	FILE *file;
	int c=0; // 
	char myChar;

	file = fopen(FILE_NAME,"r");
	//while the file is still open
	while(1)
	{
		c = fgetc(file);
		//if count is a negative 
		//(EOF) then break the loop and increment the count
		if(c == EOF)
		{
			break;
		}
		charCount++;
		if(c == '\n')
		{
			lineCount++;
		}
		if(c == ' ')
		{
			wordCount ++;
		}

	}
	printf("Number of Characters in:%s %d\n",FILE_NAME, charCount);
	printf("Number of Lines in : %s %d\n",FILE_NAME,lineCount);
	printf("Number of Words in :%s %d\n",FILE_NAME, wordCount );
	fclose(file);
	return (0);
}
/*
* OUTPUT 
UNTIL THIS POINT CHARS AND LINES ARE COUNTED-------------*/
/*
fonzi@ubuntu:~/Desktop$ ./a.out 
Number of Characters in:TextAnalyzor.c 985
Number of Lines in : TextAnalyzor.c 51
Number of Words in :TextAnalyzor.c 107
fonzi@ubuntu:~/Desktop$ 
*/

