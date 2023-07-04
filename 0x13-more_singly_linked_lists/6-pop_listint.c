#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t.
 * @head: is a pointer to a pointer of type listint_t
 * Return: the head node’s data (n).i
 *
 */


int pop_listint(listint_t **head)
{
	listint_t *tmp;
	unsigned int i;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;
	i = tmp->n;

	*head = (*head)->next;
	free(tmp);

	return (i);
}
