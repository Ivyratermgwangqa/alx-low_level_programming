#include "main.h"
/**
 * flip_bits -  function calc the Hamming distance between two num (n and m)
 * @n: first num
 * @m: second num
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m;
	unsigned int ctr = 0;

	for (; temp > 0; temp >>= 1)
	{
		if (temp & 1)
			ctr++;
	}

	return (ctr);
}
