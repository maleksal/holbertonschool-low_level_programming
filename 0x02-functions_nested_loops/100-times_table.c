#include "holberton.h"

/**
  *  print_times_table - print table nth time
  *  ------------------
  *
  *  @n: takes an int
  *
  *  Return: implicit return
  *
 **/


void print_times_table(int n)
{
	int counter1, counter2;
	int calcul;

	for (counter1 = 0; counter1 <= n; counter1++)
	{
		for (counter2 = 0; counter2 <= n; counter2++)
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
