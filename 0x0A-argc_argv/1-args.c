#include "holberton.h"

/**
  * main - print number of argvs
  * @argc: size of arr argv
  * @argv: arr
  * Return: int
  */

int main(int argc, char *argv[])
{
	(void)argv;
	_putchar(argc - 1 + '0');
	_putchar('\n');
	return (0);
}
