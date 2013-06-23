/*
* UNIX AND C 
* Alfonso Vazquez
Using what you learned in the 
first assignment this week, write a program to determine if an input message is a palindrome. (ZEROREZ)
*
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char input[20];
    printf("\nEnter The String:\n");
    //scans the sring with spaces so it does not terminate
    scanf("%[^\n]", input);

    //sets the length of the input to the length
    int length = strlen(input);
    int answer = 1;
    
    int i, k;//initializes the for loop maintainer
    //keeps the count going by settingi = 0; k to lenght -1 
    for(i = 0, k = length - 1; i < length / 2; i++, k--) 
    {
        //if input i is not input k then answer is 0 which is true then break
        if(input[i] != input[k]) 
        {
            answer = 0;
            break;
        }
    }
    
    //if answer is 0 then print is if not print else
    printf("%s a palindrome.\n", answer ? "is" : "isn't");
    return(0);
}
/*
OUTPUT

Enter The String:
ZEROREZ
is a palindrome.
fonzi@ubuntu:~/Desktop$ ./a.out 

Enter The String:
ZERO
isn't a palindrome.

*/