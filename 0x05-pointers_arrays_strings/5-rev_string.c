#include "holberton.h"

/**
  * rev_string - modifies an array
  * @s: arr
  * Return: void
  */

void rev_string(char *s)
{
	int size = 0;
	int index;
	int temp;

	while (s[size] != '\0')
	{
		size++;
	}

	for (index = 0; index < size / 2; index++)
	{
		temp = s[index];
		s[index] = s[(size - 1) - index];
		s[(size - 1) - index] = temp;
	}
}
