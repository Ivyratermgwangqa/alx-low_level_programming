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
size_t jump = sqrt(size);
size_t prev = 0, curr = 0;

if (array == NULL || size == 0)
return (-1);

printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
while (array[curr] < value)
{
prev = curr;
curr += jump;
if (curr >= size)
break;
printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
}
printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

for (; prev <= curr && prev < size; prev++)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}

return (-1);
}
