#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an arr of char's and initialize it with specific char.
 *
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if the size is 0 .
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
