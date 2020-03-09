#include "holberton.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates memory using malloc
  * @b: unsigned int
  * Return: pointer to nwely allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void  *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
