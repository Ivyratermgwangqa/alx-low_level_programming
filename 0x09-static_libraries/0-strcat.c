#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @destination: The destination string
 * @source: The source string
 *
 * Return: A pointer to the resulting string
 */
char _strcat(char *destination, const char *source)
{
char *pr = destination + strlen(destination);
while (*source != '\0')
{
*pr++ = *source++;
}
*pr = '\0';
return (destination);
}
