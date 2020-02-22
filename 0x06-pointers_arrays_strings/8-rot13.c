#include "holberton.h"

/**
  * rot13 - encrypt char
  * @c: char type
  * Return: encrypted c(arr)
  */

char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		for ( ; (c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'); )
		{
			if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
			{
				c[i] = *(c + i) - 13;
				break;
			}
			c[i] = *(c + i) + 13;
			break;
		}
		i++;
	}
	return (c);
}
