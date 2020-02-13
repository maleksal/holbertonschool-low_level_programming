#include "holberton.h"

/**
  *  print_number - print digits
  *  ------------------
  *
  *  @n: takes an int (digit)
  *
  *  Return: implicit return
 **/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	if (n / 10)
	{
		/* doing recursion*/
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

