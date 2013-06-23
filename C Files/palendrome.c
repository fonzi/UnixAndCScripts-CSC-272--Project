/*
* UNIX AND C 
* Alfonso Vazquez

Using what you learned in the 
first assignment this week, write a program to determine if an input message is a palindrome. (ZEROREZ)
using the arguments for command line 
*
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(int argc, char *argv[]) 
{
    //checks if at least one argument
    assert(argc != 2);
    int argument;
    char *input;
    for(argument = 1; argument <= 5; argument ++)
    {
    //makes char pointer to argument[1]
        input = argv[argument];
    }
    //sets the length of the input to the length
    int length = strlen(input);
    int answer = 1, i, k;//initializes the for loop maintainer
    for(argument = 1; argument <= 5; argument ++)
    {
        //keeps the count going by settingi = 0; k to lenght -1 
        for(i = 0, k = length - 1; i < length / 2; i++, k--) 
        {
            //if input i is not input k then answer is 0 which is true then break
            if(input[i] != input[k]) 
            {
                answer = 0;
                break;
            }
        //if answer is 0 then print is if not print else
       }
        printf("%s%s a palindrome.\n", argv[argument] ,answer ? " is " : " isn't ");
    }
    return(0);
}
/*
OUTPUT
fonzi@ubuntu:~/Desktop$ ./a.out anna zerorez 1122332211 phohp
anna is  a palindrome.
zerorez is  a palindrome.
1122332211 is  a palindrome.
phohp is  a palindrome.

fonzi@ubuntu:~/Desktop$ ./a.out an a nc biu
an isn't  a palindrome.
a isn't  a palindrome.
nc isn't  a palindrome.
biu isn't  a palindrome.


*/