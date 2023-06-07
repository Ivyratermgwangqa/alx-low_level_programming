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
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
