#include "main.h"

/**
 * _puts_recursion - function puts();
 * @s: input
 * puts - function puts();
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
void puts(char *s)
{
_puts_recursion(s);
putchar('\n');
}
