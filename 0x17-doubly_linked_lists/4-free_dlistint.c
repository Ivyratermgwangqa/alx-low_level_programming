#include "lists.h"
/**
 * free_dlistint - Returns the number of elements in a linked dlistint_t list.
 * @head: linked list to print.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;
	current = head;
	while (current->prev != NULL)
		current = current->prev;
	while (current != NULL)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
