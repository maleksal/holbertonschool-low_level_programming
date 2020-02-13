#include "holberton.h"

/**
  * numbers - print nums
  * --------------------
  * @void: void
  *
  * Return: implicit return
  */

void numbers(void)
{
	int i = 0;

	for (; i <= 14; i++)
	{
		if (i <= 9)
		{
			_putchar(i + '0');
		} else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
}

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
	int b = 0;

	for (; b <= 10; b++)
	{
		numbers();
		_putchar('\n');
	}
}
