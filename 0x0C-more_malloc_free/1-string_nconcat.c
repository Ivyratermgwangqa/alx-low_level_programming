#include "main.h"
#include <string.h>

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
char *concatenated;
unsigned int len1, len2, i;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
concaten = malloc(sizeof(char) * (len1 + n + 1));
if (concaten == 0)
return (0);
for (i = 0; i < len1; i++)
concaten[i] = s1[i];
for (i = 0; i < len1 + n; i++)
concaten[i] = s2[i - len1];
concaten[i] = '\0';
return (concaten);
}
