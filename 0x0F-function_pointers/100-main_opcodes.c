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
short bytes, i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
printf("%02x", *((unsigned char *)(main)));
for (i = 1; i < bytes; ++i)
printf(" %02x", *((unsigned char *)(main + i)));
putchar('\n');
return (0);
}
