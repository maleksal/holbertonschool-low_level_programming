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

	/* check for width and height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for width and height */
	array = (int **) malloc(height);

	if (array == NULL)
		return (NULL);

	for (c = 0; c <= width; c++)
		array[c] = (int *) malloc(width);
		if (array[c] == NULL)
		{
			for (cc = 0; cc < c; cc++)
			{
				free(array[cc]);
				free(array);
			}
			return (NULL);
		}

	/* initialize array with zeros */

	for (c = 0; c < height; c++)
	{
		for (cc = 0; cc < width; cc++)
			array[c][cc] = 0;
	}

	return (array);
}
