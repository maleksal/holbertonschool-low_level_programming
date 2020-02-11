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
	if (digit >= 0)
	{
		return (digit % 10);

	}

	return ((digit * -1) % 10);
}
