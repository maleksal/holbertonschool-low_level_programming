#include "holberton.h"
/**
  *  print_alphabet_x10	- function prints lowercase alphabets
  *                       10 times followed by a new line
  *  -------------------------------------------------------
  *
  *  @void: no parameter
  *
  *  Return: implicit return
  *
  */


void print_alphabet_x10(void)
{
	char c;
	int counter;

	for (counter = 0; counter <= 10; counter++)
	{
		for (c = 'a'; c < 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
