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
		n = -n;
	}
	if (n == 0)
	{
		_putchar(n);
	}
	if (n / 10)
	{
		/* doing recursion*/
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

