#include "holberton.h"

/**
  * print_sign - prints the sign of a number
  *		positive, negative, zero
  * -------------------------
  *
  *  @n: takes an int
  *
  *  Return: return 1 OR 0 OR -1
  *
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
