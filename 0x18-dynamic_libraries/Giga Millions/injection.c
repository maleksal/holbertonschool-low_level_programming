#include <unistd.h>
#include <stdlib.h>

int puts(const char *s){
	(void) s;

	write(1, "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n", 57);
	exit(0);
}
