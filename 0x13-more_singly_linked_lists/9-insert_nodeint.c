#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts newnode at given position
 * @head: a pointer to a pointer to listint_t
 * @idx: data type unsigned int index
 * @n: data type int
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int ctr = 0;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	ctr = 0;

	while (temp != NULL && ctr < idx - 1)
	{
		temp = temp->next;
		ctr++;
	}
	if (temp == NULL || ctr < idx - 1)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
