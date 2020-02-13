#include "holberton.h"

/**
  * print_square - print # n times
  *
  * @size: takes an int (size of square)
  * Return: implicit return
  */

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
