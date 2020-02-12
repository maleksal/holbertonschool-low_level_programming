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
	long int num1 = 1;
	long int num2 = 2;
	int i;
	long int fib;

	printf("%lu, %lu, ", num1, num2);
	for (i = 1+2; i <= 50; i++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		printf("%lu", fib);
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
