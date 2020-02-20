#include "holberton.h"

/**
  * _strcat - concatenates two strings
  * @dest: string
  * @src: string
  * Return: pointer
  */

char *_strcat(char *dest, char *src)
{
	int index;
	int dest_last_elem = 0;

	while (dest[dest_last_elem] != '\0')
	{
		dest_last_elem++;
	}

	for (index = 0; src[index] != '\0'; index++, dest_last_elem++)
	{
		dest[dest_last_elem] = src[index];
	}

	dest[dest_last_elem] = '\0';
	return (dest);
}

