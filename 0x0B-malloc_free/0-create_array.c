#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - create array and intialized with a char
  * @size: unsigned int
  * @c: char type
  * Return: char
  */

char *create_array(unsigned int size, char c)
{
	char *array_pointer = malloc(sizeof(*array_pointer) * size);
	unsigned int i = 0;

	if (array_pointer == '\0')
		return (NULL);
	else if (size == 0)
		return ('\0');

	for (; i <= size; i++)
	{
		array_pointer[i] = c;
	}
	return (array_pointer);

}
