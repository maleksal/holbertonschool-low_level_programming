#include "holberton.h"

/**
  * _strcmp - compare two strings
  * @s1: type int
  * @s2: type int
  * Return: 0 if string match, less than 0 or greater if they dont match
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] !=  s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
