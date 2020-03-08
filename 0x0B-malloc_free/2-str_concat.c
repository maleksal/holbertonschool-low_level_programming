#include "holberton.h"
#include <stdlib.h>
/**
  * str_concat - concat two strings
  * @s1: str
  * @s2: str
  * Return: char type
  */


char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	char *p;
	int i = 0;
	int j = 0;
	char *addr_s1 = s1;
	char *addr_s2 = s2;

	if (s1 == NULL)
	{
		s1 = "";
	}else
	{
		for (; *s1 != '\0'; s1++)
			size_s1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	} else
	{
		for (; *s2 != '\0'; s2++)
			size_s2++;
	}

	/* relocate pointer */
	s1 = addr_s1;
	s2 = addr_s2;
	
	/* locate space in memory */
	p = malloc(sizeof(char *) * (size_s1 + size_s2) + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < size_s1; j++)
	{
		p[i] = s1[j];
		i++;
	}
	for (j = 0 ; j < size_s2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
