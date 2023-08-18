#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: linked list to print.
 * @index: node to look for.
 * Return: the node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	if (current == NULL)
		return (NULL);
	while (current->prev != NULL)
		current = current->prev;
	for (i = 0; i != index && current != NULL; i++)
		current = current->next;
	if (index > i)
		return (NULL);
	return (current);
}
