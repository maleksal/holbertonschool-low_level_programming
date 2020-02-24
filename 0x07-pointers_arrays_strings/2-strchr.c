#include "holberton.h"

/**
 * _strchr - locates a char in a string
 * @s: type char
 * @c: type of char
 * Return: pointer to char or null
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}
	return ('\0');
}
