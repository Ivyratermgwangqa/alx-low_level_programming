#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers with values from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */

int *array_range(int min, int max)
{
int *ptr;
int size = max - min + 1;
if (min > max)
return (NULL);
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
ptr[0] = min;
for (int i = 1; i < size; i++)
ptr[i] = ptr[i - 1] + 1;
return (ptr);
}