#include "holberton.h"
#include <stdlib.h>
/**
  * alloc_grid - create 2 dimensional array
  * @width: int
  * @height: int
  * Return : pointer to array
  */

int **alloc_grid(int width, int height)
{

	int **array;
	int c, cc;
	
	/* allocate memory for width and height */
	array = malloc(sizeof(int) * height);
	
	if (array == NULL)
		return (NULL);

	for (c = 0; c <= width; c++)
		array[c] = malloc(sizeof(int) * width);
		if (array[c] == NULL)
			return (NULL);

	/* initialize array with zeros */

	for (c = 0; c < height; c++)
	{
		for (cc = 0; cc < width; cc++)
			array[c][cc] = 0;
	}

	return (array);
}
