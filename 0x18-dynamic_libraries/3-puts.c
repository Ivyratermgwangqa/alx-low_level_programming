#include "main.h"
#include <stdio.h>
/**
* _puts - prints a string, followed by a new line, to stdout
* @str: string to print
* Return: Always 0.
*/
void _puts(char *str)
{
	int i;
	int a;

	for (i = 0; str[i] != 0; i++)
	{
		a = str[i];
		_putchar(a);
	}
	_putchar('\n');
}
