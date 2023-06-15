#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 *
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, count = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len += ac + 1;
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[count] = av[i][j];
count++;
}
str[count] = '\n';
count++;
}
str[count] = '\0';
return (str);
}
