#include "holberton.h"

/**
  * _func - calculates natural root of a int
  * @a: type int
  * @b: type int
  * Return: int type
  */

int _func(int a, int b)
{
	if (a < b || a < 0)
		return (-1);
	if ((b * b) == a)
		return (b);
	return (_func(a, b + 1));
}

/**
  * _sqrt_recursion - a indirect recursion function
  * @n: int type
  * Return: int
  */

int _sqrt_recursion(int n)
{
	return (_func(n, 1));
}
