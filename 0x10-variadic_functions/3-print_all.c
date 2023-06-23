#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int j = 0;
va_list list;
char *sepstr, *seperator = "";
va_start(list, form);
while (1)
{
char specif = form[j];
switch (specif)
{
case '\0':
goto end;
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
default:
j++;
continue;
}
seperator = ", ";
j++;
}
end:
printf("\n");
va_end(list);
}
