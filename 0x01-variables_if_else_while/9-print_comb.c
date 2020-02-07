#include <stdio.h>

/**
  * main - function
  * Return: 0
  */

int main(void)
{
	/* Code goes here */
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
