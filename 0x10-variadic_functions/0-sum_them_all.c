#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all its paramters.
* @n: type unsigned int.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list list;
if (n == 0)
return (0);
va_start(list, n);
sum = i = 0;
while (i < n)
{
sum = sum + va_arg(list, int);
i++;
}
va_end(list);
return (sum);
}
