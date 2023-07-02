#include "lists.h"
/**
 * before_main - prints context before the main function is executed.
 * Return: void
 */
int __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back !\n");
	return(0);
}
