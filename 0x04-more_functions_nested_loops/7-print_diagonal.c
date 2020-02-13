#include "holberton.h"

/**
  * print_diagonal - print lines
  *
  * @n: takes an int
  * Return: implicit return
  */

void print_diagonal(int n)
{
	int i;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
