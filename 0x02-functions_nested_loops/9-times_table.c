#include "holberton.h"

/**
  *  times_table - print table
  *  ------------------
  *
  *  @void: no param
  *
  *  Return: implicit return
  *
 **/


void times_table(void)
{
	int counter1, counter2;
	int calcul;

	for (counter1 = 0; counter1 < 10; counter1++)
	{
		for (counter2 = 0; counter2 < 10; counter2++)
		{
			calcul = counter1 * counter2;
			if (calcul <= 9)
			{
				if (counter2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(calcul + '0');
			} else
			{
					_putchar(',');
					_putchar(' ');
					_putchar(calcul / 10 + '0');
					_putchar(calcul % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
