#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: type unsigned long int input
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of a bit in an index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
