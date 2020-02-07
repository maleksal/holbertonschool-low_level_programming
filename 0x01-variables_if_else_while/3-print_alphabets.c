#include <stdio.h>

/**
  * main - entry function
  * Return: 0
  */

int main(void)
{
	char c;
	int count;

	count = 0;
	do {
		for (c = 'A'; c <= 'Z'; c++)
		{
			if (count >= 26)
			{
				putchar(c);
				count += 1;
			} else
				putchar(tolower(c));
				count += 1;
		}

	} while (count < 52);
	putchar('\n');
	return (0);
}
