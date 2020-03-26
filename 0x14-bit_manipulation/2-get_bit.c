#include "holberton.h"

/**
  * get_bit - get bit at index
  * @n: unsigned long int
  * @index: unsiged int
  * Return: 1 or 0
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int shift;

	if (index > (sizeof(n) * 8))
		return (-1);

	shift = n >> index;
	return (shift & 1);
}
