#include "holberton.h"

/**
  * _strncpy - copies a string
  * @dest: type char
  * @src: type char
  * @n: type int
  * Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; (index < n) && (src[index] != '\0'); index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
