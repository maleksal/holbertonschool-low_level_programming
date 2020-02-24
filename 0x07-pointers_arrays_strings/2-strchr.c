#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string
 * @s: type char
 * @c: type of char
 * Return: pointer to char or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
