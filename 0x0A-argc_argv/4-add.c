#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command line arguments.
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
int a, b, sum;
if (argc != 3)
{
printf("%s\n", argv[0]);
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
sum = a + b;
printf("%d + %d = %d\n", a, b, sum);
return (0);
}
