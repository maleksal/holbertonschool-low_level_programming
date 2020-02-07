#include <stdio.h>

/**
  * main - function
  * Return: 0
  */

int main(void)
{
	/* Code goes here */
	int d;

	for (d = 0; d <= 99 ; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
