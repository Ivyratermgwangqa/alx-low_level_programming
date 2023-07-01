#include "lists.h"
/**
 * print_list - Prints all the elements of list_t list.
 * @h: pointer to the struct.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
