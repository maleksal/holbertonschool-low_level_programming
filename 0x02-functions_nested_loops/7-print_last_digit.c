#include "holberton.h"

/**
  *  print_last_digit - return last digit of a number
  *  ------------------
  *
  *  @digit: takes an int
  *
  *  Return: last digit of number
  *
 **/


int print_last_digit(int digit)
{
	int lastD = digit % 10;

	if (lastD >= 0)
	{
		_putchar(lastD);
		return (lastD);

	}
	_putchar(lastD * -1);
	return (lastD * -1);
}
