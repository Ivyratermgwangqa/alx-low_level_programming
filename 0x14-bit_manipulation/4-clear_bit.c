#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: type pointer to the number to change
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	*n &= ~mask;
	return (1);
}
