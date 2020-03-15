#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

typedef struct format
{
	char *ch;
	void (*fp)(va_list);
} arrayF;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void _c(va_list c);
void _i(va_list i);
void _f(va_list f);
void _s(va_list s);

#endif
