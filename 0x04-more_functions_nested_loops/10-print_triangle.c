#include "holberton.h"

/**
  * print_triangle - print triangle with #
  *
  * @size: takes an int
  * Return: implicit return
  */

void print_triangle(int size)
{
	int i;
	int a = 1;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (a <= size)
	{
		for (i = 0; i < (size - a); i++)
		{
			_putchar(' ');
		}
		for (b = 0; b < a; b++)
		{
			_putchar('#');
		}
	
		_putchar('\n');
		a++;
	}
}
