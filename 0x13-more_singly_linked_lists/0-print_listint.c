#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t.
 * @h: data type pointer of struct
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *newnode = h;

	for (; newnode; newnode = newnode->next)
	{
		printf("%d\n", newnode->n);
		i++;
	}
	return (i);
}
