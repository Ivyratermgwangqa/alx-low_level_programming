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
int space = 0;
va_list valists;
char *sepstr, *seperator = "";
char choice;
va_start(lists, format);
while ((choice = format[j]) != '\0')
{
switch (choice)
{
case 'c':
printf("%s%c", seperator, valist(lists, int));
space++;
break;
case 'i':
printf("%s%d", seperator, valist(lists, int));
space++;
break;
case 'f':
printf("%s%f", seperator, valist(lists, double));
space++;
break;
case 's':
sepstr = valist(lists, char *);
if (!sepstr)
sepstr = "(nil)";
printf("%s%s", seperator, sepstr);
space++;
break;
}
default:
break;
}
if (space > 0 && space < 4)
seperator = ", ";
j++;
}
printf("\n");
va_end(list);
}
