#include "main.h"
#include <string.h>
/**
 * is_palindrome- Helper funct to check if string is palindrome recursively.
 * @str: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *str)
{
int length = strlen(str);
int i = 0;
int j = length - 1;
while (i < j)
{
if (str[i] != str[j])
{
return (0);
}
i++;
j--;
}
return (1);
}
