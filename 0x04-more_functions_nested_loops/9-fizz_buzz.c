#include <stdio.h>

/**
  *  main - print numbers 1 - 100
  *  ----------------------------
  *
  *  Return: return value of the function
 **/


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz \n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz \n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz \n");
		}
		else
		{
			printf("%d \n", i);
		}
	}
	return (0);
}

