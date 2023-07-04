#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: is a pointer to a pointer of type listint_t
 * Return: 0 elements all free
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
