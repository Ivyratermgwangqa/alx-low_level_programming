#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcode of its own function.
* @argc: number of commandl line arguments
* @argv: array of command line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
short bytes, x;
if (argc != 2)
{
printf("Error\n");
return (1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return (2);
}
printf("%02x", *((unsigned char *)(main)));
for (x = 1; x < bytes; ++x)
printf(" %02x", *((unsigned char *)(main + x)));
putchar('\n');
return (0);
}
