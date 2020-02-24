#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area to dest
 * @dest: char type
 * @src: char type
 * @n: unsigned int type
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
