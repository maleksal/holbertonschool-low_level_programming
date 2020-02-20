#include "holberton.h"

/**
  * cap_string - capitalize string
  * @str: char array
  * Return: char converted
  */


char *cap_string(char *str)
{
	int i = 0;
	int ii;
	int s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	while (str[i] != '\0')
	{
		for (ii = 0; s[ii] != '\0'; ii++)
		{
			if (str[i] == s[ii])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
