#include "holberton.h"

/**
  * _strlen_recursion - a non-tail recursive function
  * that prints length of string
  * ------------------------------------------------
  * @s: str
  * Return: void
  */



int _strlen_recursion(char *s)
{
	/* base condition */
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
