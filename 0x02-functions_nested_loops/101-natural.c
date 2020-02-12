#include <stdio.h>

/**
  * main - print sum of multiple 3 && 5
  *  ------------------
  *
  *  @void: no param
  *
  *  Return: 0
  *
 **/

int main(void)
{
	int num;
	int sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 5 == 0 || num % 3 == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

