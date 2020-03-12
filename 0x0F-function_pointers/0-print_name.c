#include "function_pointers"

/**
  * print_name - print name using function pointer
  * @name: string
  * @f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	return (f(name));
}
