#include <stdio.h>

/**
  *  conditions - handle cond if else
  *  ----------------------------
  *  @i: takes an int
  *  Return: None
 **/


void conditions(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d ", i);
	}
}

/**
  * main - print numbers 1 - 100
  *
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		conditions(i);
		if (i < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

