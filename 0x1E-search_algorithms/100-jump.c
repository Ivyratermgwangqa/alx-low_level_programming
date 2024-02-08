#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array of integers
*               using the Jump search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
* Return: Index where value is located, or -1 if not found or array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, n, jp;

	if (!array || size == 0)
		return (-1);

	for (n = sqrt(size); i < size; i += n)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - n, i);
	for (jp = i - n; jp < size && jp <= i; jp++)
	{
		printf("Value checked array[%lu] = [%d]\n", jp, array[jp]);
		if (array[jp] == value)
			return (jp);
	}
	return (-1);
}
