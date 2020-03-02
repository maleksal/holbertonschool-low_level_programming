#include "holberton.h"

/**
  * factorial - a tail-recursive function 
  * that returns a factorial of a givern number
  * -------------------------------------------
  * @n: int type
  * Return: void
  */

int factorial(int n)
{
	/* base condition */
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
