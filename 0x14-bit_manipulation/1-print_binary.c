#include "holberton.h"

/**
  * print_binary - print binary representation of a number
  * @n: unsigned long int
  */

void print_binary(unsigned long n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
