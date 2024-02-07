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
size_t left = 0, right = size - 1, mid;

if (array == NULL)
return (-1);

while (left <= right)
{
print_array(array, left, right);
mid = (left + right) / 2;

if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}

/**
* print_array - Prints the elements of an array between left and right
* @array: Pointer to the first element of the array
* @left: Left index to start printing from
* @right: Right index to stop printing at
*/
void print_array(int *array, size_t left, size_t right)
{
size_t i;

printf("Searching in array:");
for (i = left; i <= right; i++)
{
if (i == left)
printf(" %d", array[i]);
else
printf(", %d", array[i]);
}
printf("\n");
}
