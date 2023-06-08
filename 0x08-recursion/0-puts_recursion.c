#include "main.h"
#include <stdio.h>
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
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
