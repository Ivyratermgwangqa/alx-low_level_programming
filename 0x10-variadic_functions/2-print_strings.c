#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *sepstring;
unsigned int i;
va_list list;
if (n < 1)
{
printf("\n");
return;
}
va_start(list, n);
for (i = 0; i < n; i++)
{
sepstring = va_arg(list, char *);
if (sepstring != NULL)
printf("%s", sepstring);
else
printf("(nil)");
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
