#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 40

int main (int argc, char *argv[])
{
	int fd[2];

	char buff[BUFF_SIZE+1];

	if(pipe(fd)==0)
	{
		if(fork() !=0)
		{
			/*Parent: Reader*/
			close(fd[1]);
			/*Read Message from parent*/
			read(fd[0], buff, BUFF_SIZE);
			printf("Smoking the Pipe ",buff );
			close(fd[0]);
		}
		else
		{
			/*Child: writer*/
			close(fd[0]);

			/*Get a message to send*/
			fputs("Pipe Has Been Smoked: ",stdout);
			fgets(buff, BUFF_SIZE,stdin);

			/*Send message, including nul*/
			write(fd[1], buff, strlen(buff));
			close(fd[1]);
		}
	}//end if
	return 0;
}