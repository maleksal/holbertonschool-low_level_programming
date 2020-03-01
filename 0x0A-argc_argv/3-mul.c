#include "holberton.h"

/**
  * convert_int - string to int
  * @s: str
  * Return: int
  */

int convert_int(char s[])
{
	int c, sign, offset, n;

	if (s[0] == '-')
	{
		sign = -1;
	}
	if (sign == -1)
	{
		offset = 1;
	} else
	{
		offset = 0;
	}
	n = 0;

	for (c = offset; s[c] != '\0'; c++)
	{
		n = n * 10 + s[c] - '0';
	}
	if (sign == -1)
	{
		n = -n;
	}

	return (n);
}

/**
  * print_number - output number
  * @n: type of int
  * Return: void
  */

void print_number(int n)
{
	if (n / 10 != 0)
	{
		print_number(n / 10);
		if (n > 0)
		{
			_putchar((n % 10) + '0');
		} else
		{
			_putchar((-n % 10) + '0');
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
	{
		_putchar((n % 10) + '0');
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
	{
		_putchar('-');
		_putchar((-n % 10) + '0');
	}
}


/**
  * main - mul numbers
  * @argc: size of argv
  * @argv: arr
  * Return: int
  */

int main(int argc, char *argv[])
{
	int i;
	char error[] = "Error";
	int mul;

	(void)mul;
	if (argc <= 1)
	{
		for (i = 0; error[i] != '\0'; i++)
		{
			_putchar(error[i]);
		}
		_putchar('\n');
		return (1);
	}
	else
	{
		mul = convert_int(argv[1]) * convert_int(argv[2]);
		print_number(mul);
		_putchar('\n');
		return (0);
	}
}
