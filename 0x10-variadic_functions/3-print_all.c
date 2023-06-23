#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format:Type list of arg CIFS.
*/
void print_all(const char * const format, ...)
{
int space = 0;
va_list args;
const char *sepstr = format;
char *seperator = "";
char choice;
va_start(args, format);
while (sepstr && *sepstr)
{
choice = *sepstr
switch (choice)
{
case 'c':
printf("%s%c", seperator, va_arg(args, int));
space++;
break;
case 'i':
printf("%s%d", seperator, va_arg(args, int));
space++;
break;
case 'f':
printf("%s%f", seperator, va_arg(args, double));
space++;
break;
case 's':
sepstr = va_arg(args, char *);
if (!sepstr)
sepstr = "(nil)";
printf("%s%s", seperator, sepstr);
space++;
break;
}
default:
sepstr;
continue;
}
if (space > 0 && space < 4)
seperator = ", ";
sepstr;
}
printf("\n");
va_end(args);
}
