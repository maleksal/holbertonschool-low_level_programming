#include "holberton.h"

/**
  *  more_numbers - print nth times numbers
  *  --------------------------------------
  *  @void: void
  *
  *  Return: implicit return
  *
  */

void more_numbers(void)
{
	int i;
	int b = 0;

	for (; b < 10; b++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
