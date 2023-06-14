#include "main.h"
/**
 * _strchr - Locates the first occurrence of the character c in the string s
 *
 * @s: The string
 * @c: The character to be located
 * Return: A pointer to the first occurrence of c in s,
 *         or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
