#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each array elem on a newl
* @array: array that iterates
* @size: Size of the array.
* @action: pointer to print in regular or hex
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
