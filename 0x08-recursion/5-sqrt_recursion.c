#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -Calculates the natural sqrt of a number using recursion.
 *
 * @n: The number to calculate the square root of.
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
long int root;
if (n == 0)
{
return (0);
}
root = _sqrt_recursion(n / 2);
if (root *root == n)
{
return (root);
}
else if (root *root < n)
{
return (root + 1);
}
else
{
return (root);
}
}
