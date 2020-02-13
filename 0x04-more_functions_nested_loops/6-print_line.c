#include "holberton.h"

/**
  *  print_line - print line n times
  *  ------------------
  *
  *  @n: takes an int
  *
  *  Return: implicit return
  *
 **/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

