#include "holberton.h"

/**
  *  more_numbers - print nth times numbers
  *  --------------------------------------
  *
  *  @void: void
  *
  *  Return: implicit return
  *
 **/

void more_numbers(void)
{
	int i = 0;
	int counter = 0;

	while (counter != 14)
	{
		for (; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		counter++
	}
	_putchar('\n');
}

