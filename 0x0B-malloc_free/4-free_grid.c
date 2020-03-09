#include "holberton.h"
#include <stdlib.h>

/**
  * free_grid - free an created  2D array
  * @height: int type
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	/* loop through array */
	for (i = 0; i <= height - 1; i++)	
		/* free allocated memory */
		free(grid[i]);
	/* fee entire array */
	free(grid);

}
