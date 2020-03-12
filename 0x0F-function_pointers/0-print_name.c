#include "function_pointers.h"
#include <stdlib.h>

#define CHECK(a, b) if (a == NULL) return; if (b == NULL) b = ""


/**
  * print_name - print name using function pointer
  * @name: string
  * @f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	
	
	CHECK(f, name);
	f(name);
}
