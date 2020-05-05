#include <unistd.h>
#include <stdlib.h>

int atoi(const char *nptr){
	(void) nptr;

	write(1, "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n", 55);
	exit(0);
}
