#include "main.h"

/**
 * _strcpy - Copies a string from source to destination
 *
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
char *ret = dest;
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (ret);
}
