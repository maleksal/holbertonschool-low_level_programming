#include <stdio.h>

void print_before_execution(void) __attribute__ ((constructor));

/**
  * print_before_execution - print before main
  */

void print_before_execution(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
