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
int main(int argc, char *argv[])
{
int cents, total, count;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
total = 0;
count = 0;
while (cents > 0)
{
for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
{
if (cents >= coins[i])
{
total += cents / coins[i];
cents = cents % coins[i];
count++;
break;
}
}
}
printf("%d\n", count);
return (0);
}
