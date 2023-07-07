#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: type const char pointer of one bit
 * Return: converted number, or 0 if one or more char in str b that is not 0/1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		switch (*b)
		{
			case '0':
				val = (val << 1);
				break;
			case '1':
				val = (val << 1) | 1;
				break;
			default:
				return (0);
		}
		b++;
	}

	return (val);
}
