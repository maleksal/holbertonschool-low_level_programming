#include "holberton.h"

/**
  * _memset - assign value to var by addr
  * @s: char type
  * @b: char type
  * @n: unsigned int var addr
  * Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
