#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
  * _c - print character
  * @c: variable
  */

void _c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
  * _i - print digit
  * @i: variable
  */

void _i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
  * _f - print float
  * @f: variable
  */

void _f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
  * _s - print string
  * @s: variable
  */

void _s(va_list s)
{
	char *Ptr = va_arg(s, char *);

	if (Ptr == NULL)
		printf("(nil)");
		return;
	printf("%s", Ptr);
}


/**
  * print_all - print variable arguments
  * @format: array
  */

void print_all(const char * const format, ...)
{

	unsigned int i = 0, b = 0;
	/* pointer to function */
	void (*fp)(va_list);
	char *separator = "";
	arrayF array[] = {
		{"c",  _c},
		{"i",  _i},
		{"f",  _f},
		{"s", _s},
		{NULL, NULL}
	};

	va_list formatPtr;

	va_start(formatPtr, format);

	while (format && format[i])
	{
		b = 0;
		while (array[b].ch != NULL)
		{
			if (array[b].ch[0] == format[i])
			{
				printf("%s", separator);
				fp = array[b].fp;
				fp(formatPtr);
				separator = ", ";
			}
			b++;
		}
		i++;
	}

	va_end(formatPtr);
	printf("\n");
}
