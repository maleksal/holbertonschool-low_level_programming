#include "holberton.h"

/**
  * _strncat - concatenate two strings
  * @dest: char
  * @src: char
  * @n: int
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int dest_size = 0;

	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}

	for (index = 0; (index < n) && (src[index] != '\0'); index++, dest_size++)
	{
		dest[dest_size] = src[index];
	}
	dest[dest_size] = '\0';
	return (dest);
}
