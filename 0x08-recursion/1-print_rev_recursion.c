#include "holberton.h"

/**
  * _print_rev_recursion - a non-tail recursive function
  * that prints an array in reverse
  * -----------------------------------------------------
  * @s: arr
  * Return: void
  */

void _print_rev_recursion(char *s)
{
	/* base condition */
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
