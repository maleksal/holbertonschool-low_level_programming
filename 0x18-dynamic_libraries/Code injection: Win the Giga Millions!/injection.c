#include <unistd.h>
#include <stdlib.h>


int atoi(const char *nptr){
	(void) nptr;

	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(0);
}