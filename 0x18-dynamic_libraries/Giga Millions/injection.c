#include <unistd.h>
#include <stdlib.h>


int atoi(const char *nptr){
	(void) nptr;

	write(1, "49 24 72 15 51 - 7\nCongratulations, you win the Jackpot!\n", 57);
	exit(0);
}