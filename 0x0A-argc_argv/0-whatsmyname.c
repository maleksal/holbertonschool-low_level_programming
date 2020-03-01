#include "holberton.h"

/**
  * main - print program name
  * @argc: size of array argv
  * @argv: array 
  * Return: int
  */

int main(int argc, char **argv)
{
	int i;
	
	(void)argc;
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
