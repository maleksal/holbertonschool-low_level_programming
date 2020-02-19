#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 * @a: arr
 * @n: int type
 * Return: void
 */

void print_array(int *a, int n)
{

	int i = 1;

	for (; i <= n; i++)
	{
		printf("%d", a[i - 1]);
		if (i  < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
