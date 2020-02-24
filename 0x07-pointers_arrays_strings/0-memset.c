#include "holberton.h"

/**
  * _memset - assign value to var by addr
  * @s: char type
  * @b: char type
  * @n: unsigned int var addr
  */

char *_memset(char *s, char b, unsigned int n)
{
	s = n;
	*s = b;
	return (s);
}
