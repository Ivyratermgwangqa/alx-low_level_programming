#include "lists.h"

/**
 * print_dlistint - Print all elements of a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
