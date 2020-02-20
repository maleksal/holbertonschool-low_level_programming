#include "holberton.h"

/**
  * leet - encodes string
  * @c: chat type
  * Return: array
  */

char *leet(char *c)
{
	int i = 0;
	int ii;
	char letter[] = "AEOTL";
	char num[] = {'4', '3', '0', '7', '1'};

	while (c[i] != '\0')
	{
		for (ii = 0; letter[ii] != '\0'; ii++)
		{
			if ((c[i] == letter[ii]) || (c[i] == letter[ii] + 32))
			{
				c[i] = num[ii];
			}
		}
		i++;
	}
	return (c);
}
