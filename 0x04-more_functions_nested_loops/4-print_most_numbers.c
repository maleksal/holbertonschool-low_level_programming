#include "holberton.h"

/**
  *  print_most_numbers - print numbers except 2&4
  *  ---------------------------------------------
  *
  *  @void: void
  *
  *  Return: implicit return
  *
 **/

int print_most_numbers(void)
{
	int i = 0;

	while (i != 9)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
	}
}

