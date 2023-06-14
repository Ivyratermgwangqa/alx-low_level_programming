#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest
 *
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to be copied
 ** Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
