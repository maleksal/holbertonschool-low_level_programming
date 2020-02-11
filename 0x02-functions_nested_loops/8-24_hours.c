#include "holberton.h"

/**
  * function name - function description
  *  ------------------
  *
  *  @param: parameter of the funcrion
  *
  *  Return: return value of the function
  *
 **/

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (;hour <= 23;)
	{
		for (;minute <= 59; minute++)
		{
			_putchar((hour / 10) +'0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
		minute = 0;
		hour ++;
	}
}
