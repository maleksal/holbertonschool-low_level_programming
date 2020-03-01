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
		if (*s == '-')
			sign = sign * (-1);
		else
		{
			d = (d * 10) + (*s - '0');
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
	if (argc - 1 <= 1)
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
