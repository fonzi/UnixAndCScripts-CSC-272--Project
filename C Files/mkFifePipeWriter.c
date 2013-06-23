#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int fd;
	char * myfifo = "/tmp/myfifo";

	/* Create the fifo for the pipe */
	mkfifo(myfifo, 0666);

	fd = open(myfifo, O_WRONLY);
	write(fd, "Hello", sizeof("Hello"));
	close(fd);

	unlink(myfifo);
	return 0;

}