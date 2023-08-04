#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if the system is big endian, 1 if the system is little endian.
 */

int get_endianness(void)
{
	int val = 1;

	val = val >> 1;
	if (val != 0)
		return (0);
	return (1);
}
