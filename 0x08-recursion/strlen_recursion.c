#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: if the current string is not null ,it returns base case.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s);
{
if (*s == '\0')
{
return 0;
}
else
{
return 1 + _strlen_recursion(s + 1);
}
