#include "lists.h"
/**
 * *reverse_listint - function that reverses a listint_t linked list.
 * @head: a pointer to pointer of type listint
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *newnode;

	while (head && *head)
	{
		newnode = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = newnode;
	}
	*head = prev;
	return (*head);
}
