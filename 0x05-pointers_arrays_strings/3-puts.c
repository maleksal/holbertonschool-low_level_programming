#include "holberton.h"

/**
 * _puts - print a string str
 * @str: str type char
 * Return: void
 */

void _puts(char *str)
{
	int index = 0;

	for (; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}	
