#include "holberton.h"

/**
  * convert_int - string to int
  * @s: str
  * Return: int
  */

int convert_int(char *s)
{
	unsigned int d = 0;
	int sign = 1;

	while (*s)
	{
		if (*s >= 48 && *s <= 57)
		{
			if (*s == '-')
				sign = sign * (-1);
			else
			{
				d = (d * 10) + (*s - '0');
			}
		} else
		{
			return (0);
		}
		s++;
	}
	return (sign * d);

}

/**
  * print_number - output number
  * @n: type of int
  * Return: void
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
  * main - add numbers
  * @argc: size of argv
  * @argv: arr
  * Return: int
  */

int main(int argc, char *argv[])
{
	int i, j;
	char error[] = "Error";
	int add = 0;

	(void)add;
	if (argc - 1 <= 1)
	{
		_putchar(0 + '0');
		_putchar('\n');
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (convert_int(argv[i]) != 0)
			{
				add += convert_int(argv[i]);
			}
			else
			{
				for (j = 0; error[j] != '\0'; j++)
				{
					_putchar(error[j]);
				}
				_putchar('\n');
				return (1);
			}
		}
		print_number(add);
		_putchar('\n');
		return (0);

	}
}
