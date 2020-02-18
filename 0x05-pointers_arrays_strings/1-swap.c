#include "holberton.h"

/**
 * swap_int - swap value of two integers
 * @a: int
 * @b: int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp_var = *a;

	*a = *b;
	*b = temp_var;
}

