#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, prev = 0, min;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        prev = bound;
        bound *= 2;
    }

    min = (bound < size - 1) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", prev, min);

    return (binary_search(array, prev, min, value));
}
