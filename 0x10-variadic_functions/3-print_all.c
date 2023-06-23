#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format:Type list of arg CIFS.
*/
void print_all(const char * const format, ...)
{
int j = 0;
va_list list;
char *sepstr, *seperator = "";
va_start(list, format);
while (1)
{
char specif = format[j];
switch (specif)
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
sepstr = va_arg(list, char *);
if (!sepstr)
sepstr = "(nil)";
printf("%s%s", seperator, sepstr);
break;
}
seperator = ", ";
j++;
}
printf("\n");
va_end(list);
}
