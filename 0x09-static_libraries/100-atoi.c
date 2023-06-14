#include "main.h"
/**
 * _atoi - Converts a string to an integer
 *
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int res = 0;
int neg = 1;
while (*s == ' ' || *s == '\t')
{
s++;
}
if (*s == '-')
{
neg = -1;
s++;
}
while (*s >= '0' && *s <= '9')
{
res = res * 10 + (*s - '0');
s++;
}
return (res *neg);
}
