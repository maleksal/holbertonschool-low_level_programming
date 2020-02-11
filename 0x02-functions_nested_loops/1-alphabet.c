#include "holberton.h"

/**
  *  print_alphabet - function prints lowercase alphabets
  *  -----------------
  *
  *  @void: no parameter
  *
  *  Retrun: implicit return
  *
  */


void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
