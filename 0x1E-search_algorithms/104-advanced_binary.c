#include <stdio.h>
#include "search_algos.h"

/**
 * recursive_advanced_binary - Searches for value in sorted array of integers
 *                             using Advanced Binary search algo recursively
 * @array: Pointer to the first element of the array to search in
 * @left: Index representing the left bound of the search range
 * @right: Index representing the right bound of the search range
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int recursive_advanced_binary(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL || left > right)
		return -1;
	
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	
	i = left + (right - left) / 2;
	if (array[i] == value)
	{
		if (i == 0 || array[i - 1] != value)
			return i;
	}
	else if (array[i] > value)
		return recursive_advanced_binary(array, left, i, value);
	else
		return recursive_advanced_binary(array, i + 1, right, value);

	return -1;
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
	if (array == NULL || size == 0)
		return -1;
	return recursive_advanced_binary(array, 0, size - 1, value);
}
