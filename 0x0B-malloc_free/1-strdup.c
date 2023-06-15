#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
char *dup;
int i, len;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
len = i;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
