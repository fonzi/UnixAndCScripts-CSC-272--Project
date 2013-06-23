/*Server for Unix and C, uses port 8080*/
#include <stdio.h>
#include <sysexits.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define MAX_QUEUE 10
#define BUFF_SIZE 256

int main(int argc, char *argv[])
{
	int fd;

	struct sockaddr_in server_address;
	short tcp_port;/*Need short for htons()*/

	int address_len = sizeof (struct sockaddr_in);
	char buff[BUFF_SIZE + 1];

	if(argc != 2)
	{
		fprintf(stderr, "Usage: %s <port> \n", argv[0]);
		return EX_USAGE;
	}

	/*Get port number from command line*/
	tcp_port = atoi (argv[1]);
	if((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		fprintf (stderr, "Error open socket \n");
		exit(1);
	}

	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = htonl (INADDR_ANY);
	server_address.sin_port = htons (tcp_port);

	/*Bind socket to server address*/
	if(bind (fd, (struct sockaddr *) &server_address, 
		sizeof (server_address)) < 0)
	{
		perror ("bind() failed");
		return 1;
	}

	/* Listen for connection requests */
	if (listen (fd, MAX_QUEUE) != 0)
	{
		fputs ("listen() failed.\n", stderr);
		return 1;
	}

	/* Accept a connection request */
	if((fd = accept(fd,(struct sockaddr *)&server_address,
		&address_len)) == -1)
	{
		fputs ("accept() failed.\n", stderr);
		return 1;
	}
	printf ("Accepted connection. fd = %d\n", fd);

	/* Read a message through the socket */
	read (fd, buff, 1000);
	puts (buff);

	close (fd);
	close (fd);

	return EX_OK;
}
