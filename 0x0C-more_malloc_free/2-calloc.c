#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the memory block.
 * @b: Value to be set.
 * @n: Number of bytes to be set.
 *
 * Return: Pointer to the memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
*(char *)ptr++ = 0;
_memset(ptr, 0, nmemb * size);
return (ptr);
}
