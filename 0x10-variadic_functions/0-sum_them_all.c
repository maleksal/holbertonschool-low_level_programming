#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums up all args passed to the function
  * @n: const unsigned int
  * @...: args
  * Return: sum
  */


int sum_them_all(const unsigned int n, ...)
{
	va_list arlist;
	unsigned int i;
	int sum = 0;

	/* initialize arlist for number of args */
	va_start(arlist, n);

	/* access arlist */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arlist, unsigned int);
	}

	/* clean memory reserved for arlist */
	va_end(arlist);
	return (sum);
}




