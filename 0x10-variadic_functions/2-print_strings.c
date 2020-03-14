#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print string
  * @separator: char type
  * @n: const unsigned int
  * @...: passed arguments
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arlist;
	unsigned int i;
	char *pointer_s;

	va_start(arlist, n);

	for (i = 0; i < n; i++)
	{
		/* point to string */
		pointer_s = va_arg(arlist, char *);

		/* check if sting is null */
		if (!pointer_s)
			printf("(nil)");
		else
			printf("%s", pointer_s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arlist);
}
