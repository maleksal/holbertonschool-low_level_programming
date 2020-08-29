#include "search_algos.h"


/**
 * print_output - prints to stdout
 * @left: integer
 * @right: integer
 * @array: list of elements
 */

void print_output(int left, int right, int *array)
{
	int i;

	printf("Searching in array: ");
	printf("%d", array[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %d", array[i]);

	printf("\n");
}

/**
 * binary_search - searches for values in a sorted array of integers using
 * binary search algorithm.
 * @array: list of integers
 * @size: size of array
 * @value: value to be searched for
 * Return: -1 on fail, value on success
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;
	int trackerL, trackerR, loop;

	if (!array)
		return (-1);

	/* set variables */
	left = 0;
	right = size - 1;
	loop = 0;

	while (1)
	{
		print_output(left, right, array);
		mid = (left + right) / 2;
		if ((left == mid) | (right == mid))
		{
			if ((left == trackerL) | (right == trackerR))
				loop++;
			if (loop > 1)
				break;
		}

		if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid - 1;

		trackerL = left;
		trackerR = right;
	}
	if (array[mid] == value)
		return (mid);
	return (-1);
}
