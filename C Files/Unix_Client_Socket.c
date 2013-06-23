/* client socket for unix and c  */

#include <stdio.h>
#include <sysexits.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	short tcp_port; /* Need short for htons() */
	int fd;
	struct sockaddr_in server_address;
	char *machine_address, *message;

	if(argc != 3)
	{
		fprintf (stderr, 
			"Usage: %s <machien address> <port> \n", argv[0]);
		return EX_USAGE;
	}

	/* Get IP address and port from the command line */
	machine_address = argv[1];
	tcp_port = atoi (argv[2]);

	/* Set up socket structure */
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = inet_addr (machine_address);
	server_address.sin_port = htons (tcp_port);

	/* Create a socket */
	if((fd = socket (AF_INET, SOCK_STREAM, 0))< 0)
	{
		fprintf(stderr, "Error open socket of client\n");
		exit (0);
	}

	/* Attempt to connect to server */
	if(connect (fd, (struct sockaddr *)&server_address, sizeof (server_address)) < 0)
	{
		fprintf(stderr, "Error connect of client\n");
		exit (0);
	}

	/* Send a message to the server */
	message = "Hello, LIARS DICE!\n";
	write(fd, message, strlen (message) + 1);

	close(fd);
	return EX_OK;
}