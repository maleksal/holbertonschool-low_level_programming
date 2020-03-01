#include "holberton.h"

/**
  * main - print cmd args
  * @argc: size of argv
  * @agrv: arr
  * Return: int
  */

int main(int argc, char *argv[])
{
	int i,j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
	
		_putchar('\n');
	}
	return (0);
}
