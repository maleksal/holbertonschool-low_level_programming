#include "holberton.h"

/**
  * set_bit - modify bit to 1 ad index
  * @n: pointer
  * @index: unsigned int
  * Return: 1 or 0
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_mask;

	if (index > (sizeof(*n) * 8))
		return (-1);

	set_mask = 1 << index;

	/* -1 ones' complement */
	*n = (*n & ~set_mask) | (-1 & set_mask);

	return (1);
}
