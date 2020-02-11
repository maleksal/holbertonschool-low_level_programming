#include "holberton.h"

/**
  * jack_bauer - print time from 00:00 to 23:59
  *  ------------------
  *
  *  @void: no param
  *
  *  Return: implicit return
  *
 **/

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (; hour <= 23; )
	{
		for (; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
		minute = 0;
		hour++;
	}
}
