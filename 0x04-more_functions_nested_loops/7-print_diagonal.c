#include "holberton.h"

/**
  * manage_spaces - print spaces
  *
  * @num: takes an int
  * Return: implicit return
  */

void manage_spaces(int num)
{
	int b;

	for (b = 0; b < num; b++)
	{
		_putchar(' ');
	}
}

/**
  * print_diagonal - print line
  * @n: takes an int
  * Return: implicit
  */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i < n + 1; i++)
		{
			manage_spaces(i);
			_putchar('\\');
			_putchar('\n');
		}
	}
}
