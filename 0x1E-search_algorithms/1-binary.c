#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - Searches for a value in a sorted array using binary search
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in array
* @value: Value to search for
*
* Return: Index of the value if found, -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
