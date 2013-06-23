#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int summation;
    if ( argc != 5) 
    {
         printf("NEED THESE ARGUMENTS:\n %s Integer1 Integer2 Integer3 Integer4\n",argv[0]);
    } 
    else 
    {
    	printf("SUM IS: ");
    	summation = argv[1] + argv[2] + argv[3] + argv[4];
        printf(summation" %s + %s + %s + %s = %d\n ");
        printf("\n");
    }
  return 0;
}

/*
*OUTPUT
fonzi@ubuntu:~/Desktop$ ./a.out 20 1 1 1
SUM IS: 23

*/
