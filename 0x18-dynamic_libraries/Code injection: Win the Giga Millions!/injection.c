#include <unistd.h>
#include <stdlib.h>


int atoi(const char *nptr){
	(void) nptr;

	write(1, "--> Please make me win!\n", 24);
	exit(0);
}