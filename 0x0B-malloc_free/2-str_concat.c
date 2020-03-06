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
	int size_2_arrays = 1;
	char *p;
	char *addr_s1 = s1;
	char *addr_s2 = s2;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	/* size s1 */
	for (; *s1 != '\0'; s1++)
		size_2_arrays++;
	/* size s2 */
	for (; *s2 != '\0'; s2++)
		size_2_arrays++;
	/* relocate pointer */
	s1 = addr_s1;
	s2 = addr_s2;
	/* locate space in memory */
	p = malloc(sizeof(char *) * size_2_arrays);
	if (p == NULL)
		return (NULL);
	for ( ; *s1 != '\0'; s1++)
	{
		p[i] = *s1;
		i++;
	}
	for ( ; *s2 != '\0'; s2++)
	{
		p[i] = *s2;
		i++;
	}
	p[i] = '\0';
	return (p);
}
