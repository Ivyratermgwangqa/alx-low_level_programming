#include "main.h"
#include <stdio.h>

/**
 *  _strlen_recursion - Returns the length of a string.
 *  @s: counting the number of characters in the string.
 *  Return; The length of the string.
 */

int _strlen_recursion(char *s)
{
if (s == NULL)
{
return (0);
}
else if (*s == '\0')
{
return (1);
}
else
{
return(1) + _strlen_recursion(s + 1);
}
}
