#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse & followed by the new line.
 * @s: the string is to be printed.
 * Return: Always 0: void.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
