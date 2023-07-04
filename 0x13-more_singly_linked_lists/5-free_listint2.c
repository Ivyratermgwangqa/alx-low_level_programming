#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: is a pointer to a pointer of type listint_t
 * Return: 0 elements all free
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
