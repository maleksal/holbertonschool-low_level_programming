#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - print numbers followed by separator and new line
  * @separator: char type
  * @n: int type
  * Return: void
  */


void print_numbers(const char *separator, const unsigned int n, ...)
{

		unsigned int i;
		va_list arlist;

		/* initialize arlist for number of arguments */
		va_start(arlist, n);

		/* acess args */

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arlist, unsigned int));
			/* check for sep and last elem */
			if (separator && i < n - 1)
				printf("%s ", separator);
		}

		/* clear reserved memory for arlist */
		va_end(arlist);

		/* print new line */
		printf("\n");
}

