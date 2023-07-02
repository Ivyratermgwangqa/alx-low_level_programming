#include "lists.h"
/**
 * __attribute__((constructor)) before_main - prints before main.
 * Return: Always 0.
 */
int __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back !\n");
	return (0);
}
