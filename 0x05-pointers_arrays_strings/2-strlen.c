#include "holberton.h"

/**
 * _strlen - return length of str
 * @s: char array
 * Return: return int (length)
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
