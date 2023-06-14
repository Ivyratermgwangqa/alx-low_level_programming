#include "main.h"

/**
 * _strncat - Concatenates n characters from source to destination
 *
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to be concatenated
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
