#include <unistd.h>
#include <stdlib.h>

int puts(const char *s){
	(void) s;

	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(0);
}
