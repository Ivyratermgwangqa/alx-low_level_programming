#include "main.h"

/**
 * _puts_recursion - function puts();
 * @s: input
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else if
{
_puts_recursion(s);
putchar('\n');
}
}
