#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

#define MAX_BUFFER 1024

int main()
{
	int fd;
	char * myfifo = "/tmp/myfifo";
	char buf[MAX_BUFFER];

	fd = open(myfifo, O_RDONLY);
	read(fd, buf, MAX_BUFFER);
	printf("Recived: %s\n", buf);
	close(fd);
	return 0;
}