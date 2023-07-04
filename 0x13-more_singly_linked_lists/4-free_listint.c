#include "lists.h"
/**
 * free_listint - function that frees a listint_t.
 * @head:  is a pointer to a pointer of type listint_t
 * Return: 0 elements all free.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
