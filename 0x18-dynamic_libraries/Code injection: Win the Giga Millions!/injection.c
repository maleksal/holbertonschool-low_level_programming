#include <unistd.h>
#include <stdlib.h>


int dprintf(int fd, const char *format)
{
	(void) fd;
	(void) format;

	write(1, "--> Please make me win!\n", 24);
	exit(0);
}