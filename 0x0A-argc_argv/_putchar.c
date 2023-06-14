#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes a character to the standard output stream.
 * @c: The character to be written.
 * Return: On success, returns the character written as an unsigned char.
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
