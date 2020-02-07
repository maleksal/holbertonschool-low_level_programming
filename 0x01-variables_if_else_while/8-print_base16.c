#include <stdio.h>

/**
  * main - entry point function
  * Return: 0
  */

int main(void)
{
	/* Code goes here */
	int dt;

	for (dt = 0; dt < 16; dt++)
	{
		if (dt < 10)
			putchar(dt + '0');
		else
			putchar(dt + 'a' - 10);
	}
	putchar('\n');
	return (0);
}
