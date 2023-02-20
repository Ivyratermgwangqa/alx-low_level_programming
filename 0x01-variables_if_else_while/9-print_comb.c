#include <stdio.h>

/**
 * main - prints all combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
putchar ('\n');
return (0);
}
