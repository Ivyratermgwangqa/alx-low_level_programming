#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: the character to be written
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
