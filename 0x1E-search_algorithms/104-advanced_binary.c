#include <stdio.h>
#include "search_algos.h"
int recurse_helper(int *array, size_t left,
size_t right, int value, ssize_t *match);

/**
 * recurse_helper - Searches for value in sorted array of integers
 *                             using Advanced Binary search algo recursively
 * @array: Pointer to the first element of the array to search in
 * @left: Index representing the left bound of the search range
 * @right: Index representing the right bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int recurse_helper(int *array, size_t left,
size_t right, int value, ssize_t *match)
{
	size_t i = left, mid;

	if (left > right)
		return (*match);

	/* print search progress */
	printf("Searching in array: %d", array[i++]);
	while (i <= right)
		printf(", %d", array[i++]);
	printf("\n");

	/* calculate mid */
	mid = left + ((right - left) / 2);

	/* check if mid is value */
	if (array[mid] == value)
	{
		*match = mid;
		if (right - left > 1)
			mid++;
	}
	else if (array[mid] < value) /* search right */
		return (recurse_helper(array, mid + 1, right, value, match));

	if (mid != 0)
		return (recurse_helper(array, left, mid - 1, value, match));
	else
		return (*match);
}
/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the Advanced Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	ssize_t match = -1;

	if (array == NULL)
		return (-1);

	return (recurse_helper(array, 0, size - 1, value, &match));
}
