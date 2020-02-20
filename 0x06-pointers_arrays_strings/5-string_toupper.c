#include "holberton.h"

/**
  * string_toupper - convert string from lower to upper
  * @str: char array
  * Return: char converted
  */


char *string_toupper(char *str)
{
	int index = 0;

	for (; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;	
		}
	}
	return (str);
}
