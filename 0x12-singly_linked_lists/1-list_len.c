#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the struct.
 * Return: Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t numnodes = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		numnodes++;
	}
	return (numnodes);
}
