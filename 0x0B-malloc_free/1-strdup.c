#include "holberton.h"
#include <stdlib.h>
/**
  * _strdup - allocate space in memory
  * @str: string
  * Return: void
  */

char *_strdup(char *str)
{
	/* initialize */
	unsigned int size_arr = 0;
	char *p;
	unsigned int i;

	/* calculate array size */
	for (; str[size_arr] != '\0'; size_arr++);

	/* locate space in memory */
	p = malloc(sizeof(char) * size_arr + 1);

	if (p == NULL || str == NULL)
		return (NULL);

	for (i = 0; i <= size_arr; i++)
	{
		p[i] = *str;
		str++;
	}
	return (p);
}
