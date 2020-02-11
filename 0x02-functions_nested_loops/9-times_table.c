#include "holberton.h"

/**
  * function name - function description
  *  ------------------
  *
  *  @param: parameter of the funcrion
  *
  *  Return: return value of the function
  *
 **/

void times_table(void)
{
	int arrayD[] = {0,1,2,3,4,5,6,7,8,9};
	int index, counter;
	int multi = 0;
	int calculate;

	counter = 0;
	while (counter <= 9)
	{
		for (index = 0; index <= 9; index++)
		{
			calculate = arrayD[index] * multi;
			
			if (calculate > 9)
			{
				if (index != 9)
				{
					_putchar(calculate / 10 + '0');
					_putchar(calculate % 10 + '0');
					_putchar(',');
					_putchar(' ');
				} else 
				{
					_putchar(calculate / 10 + '0');
					_putchar(calculate % 10 + '0');
				}
			} else
			{
				if (index != 9)
				{
					_putchar(calculate + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				} else
				{
					_putchar(calculate + '0');
				}
			}
		}
		_putchar('\n');
		counter++;
		multi++;

	}
}
