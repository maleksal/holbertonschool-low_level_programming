#include "holberton.h"
#include <stdlib.h>

/**
  * argstostr - concatenates command line argupments
  * @ac: size of av (int type)
  * @av: array
  * Return: pointer to array
  */


char *argstostr(int ac, char **av)
{
	int av_c;
	int av_i;
	int i = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	array = malloc(sizeof(char) * ac + (ac + 1));
	/* check for allocation failure */
	if (array == NULL)
		return (NULL);

	for (av_c = 0; av_c < ac; av_c++, i++)
	{
		/* access array element */
		for (av_i = 0; av[av_c][av_i] != '\0'; av_i++)
		{
			array[i] = av[av_c][av_i];
			array[i + 1] = '\n';
			i++;
		}
	}
	array[i] = '\0';
	return (array);
}
