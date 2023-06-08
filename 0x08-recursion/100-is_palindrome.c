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
int start = 0;
int end = length - 1;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
for (int i = 0; i < length; i++)
{
if (str[i] != str[length - 1 - i])
{
return (0);
}
}
return (1);
}
