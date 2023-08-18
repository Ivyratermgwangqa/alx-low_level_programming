#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer that points to the head of the list.
 * @index: The index of the node to delete.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *before, *after;

	if (head == NULL || *head == NULL)
		return (-1);
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	current = *head;

	if (index == 0)
	{
		current = current->next;
		if (current != NULL)
			current->prev = NULL;
		*head = current;
	}
	else
	{
		for (i = 0; i != index && current->next != NULL; i++)
			current = current->next;
		if (index > i)
			return (-1);
		before = current->prev;
		after = current->next;

		if (after == NULL)
			before->next = NULL;
		else
		{
			before->next = after;
			after->prev = before;
		}
	}
	free(current);
	return (1);
}
