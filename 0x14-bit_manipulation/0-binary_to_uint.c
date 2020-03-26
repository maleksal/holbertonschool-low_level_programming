#include "holberton.h"
#include <stdio.h>

/**
  * binary_to_uint - convert binary string to base 10 uint
  * @b: pointer to string
  * Return: uint
  */

unsigned int binary_to_uint(const char *b)
{
	int idx;
	int r = 0, p = 1;

	if (b == NULL)
		return (0);

	for (idx = 0 ; b[idx] != '\0'; idx++)
	;

	idx--;
	while (idx >= 0)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] == '1')
		{
			r += p;
		}

		p *= 2;
		idx--;
	}

	return (r);
}
