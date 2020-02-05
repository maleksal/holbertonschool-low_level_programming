#include <stdio.h>
/**
  * main - entry point function
  * Return: 1
  */

int main(void)
{
	char str[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, str, sizeof(str));
	return (1);
}
