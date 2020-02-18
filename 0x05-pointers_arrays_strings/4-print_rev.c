#include "holberton.h"

/**
 * len_str - return len of string*
 * @str: dtring type char
 * Return: int (len str)
 */

int len_str(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}


/**
 * print_rev - print str in reverse
 * @s: str of type char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = len_str(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
