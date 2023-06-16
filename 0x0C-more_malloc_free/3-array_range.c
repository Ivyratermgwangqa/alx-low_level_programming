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
int i, len;
if (min > max)
return (NULL);
len = (max - min) + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (int i = 1; i < size; i++)
ptr[i] = ptr[i];
return (ptr);
}
