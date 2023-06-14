#include "main.h"

/**
 * _puts - Writes a string to standard output, followed by a newline character
 *
 * @s: The string to be written
 */

void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s++);
}
_putchar('\n');
}
