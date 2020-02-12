#include <stdio.h>

/**
  * main - print 50 fib numbers
  *  ------------------
  *
  *  @void: no param
  *
  *  Return: 0
  *
 **/

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int i;
	int fib;

	for (i = 1; i <= 50; i++)
	{
		if (i <= 2)
		{
			fib = i;
		} else
		{
			fib = num1 + num2;
			num1 = num2;
			num2 = fib;
		}
		printf("%d", fib);
		if (i < 50)
		{
			printf(", ");
		}
	}
	return (0);
}
