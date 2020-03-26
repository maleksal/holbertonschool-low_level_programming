#include "holberton.h"

/**
  * clear_bit - clear a bit at a given position
  * @n: pointer
  * @index: unsigned int
  * Return: 0 or 1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask;

	if (index > (sizeof(n) * 8))
		return (-1);

	/* create 8 bits */
	mask = 1 << index;

	*n = (*n & ~mask);
	return (1);
}
