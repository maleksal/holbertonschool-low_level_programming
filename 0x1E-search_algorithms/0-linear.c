#include "search_algos.h"

/**
  * linear_search - function that searches for a value in an
  * array of integers using the Linear search algorithm.
  * @array: array of elements
  * @size: size of array
  * @value: value to be searched for
  * Return: value or -1 on fail
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int idx;

	if (array)
	{

		for (idx = 0; idx < size; idx++)
		{
			if (array[idx] == value)
				return (idx);
			printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
		}
	}
	return (-1);
}
