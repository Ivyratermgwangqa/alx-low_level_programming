#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len1 = 0, len2 = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
ptr = malloc((len1 + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (i = 0; i < len1; i++)
ptr[i] = s1[i];
for (j = 0; j < n; j++, i++)
ptr[i] = s2[j];
ptr[i] = '\0';
return (ptr);
}
