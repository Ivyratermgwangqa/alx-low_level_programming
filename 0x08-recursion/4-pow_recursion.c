#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Calculates the power of x and y using recursion.
 *
 * @x: The base number.
 * @y: The exponent.
 * Return: the power of exponent
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
