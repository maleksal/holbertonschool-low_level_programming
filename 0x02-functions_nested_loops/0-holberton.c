#include "holberton.h"

/**
  * main - function prints a string
  * Return: 0
  */

int main(void)
{
	char char_array[] = "Holberton";
	int index, array_size;

	array_size = sizeof(char_array) / sizeof(char);
	for (index = 0; index < array_size; index++)
	{
		_putchar(char_array[index]);
	}
	_putchar('\n');
	return (0);
}
