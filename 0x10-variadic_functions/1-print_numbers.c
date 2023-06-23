#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: type char pointer string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i = n;
if (separator == NULL)
separator = "";
va_start(list, n);
if (i > 0)
{
printf("%d", va_arg(list, int));
i--;
}
while (i > 0)
{
printf("%s%d", separator, va_arg(list, int));
i--;
}
printf("\n");
va_end(list);
}
