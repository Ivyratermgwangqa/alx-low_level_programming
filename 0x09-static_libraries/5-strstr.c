#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates first occurrence of substring needle in string haystack
 *
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *p = haystack;
while (*p)
{
if (*p == *needle)
{
char *q = p + 1;
char *r = needle + 1;
while (*q && *r && *q == *r)
{
q++;
r++;
}
if (*r == '\0')
{
return (p);
}
}
p++;
}
return (0);
}
