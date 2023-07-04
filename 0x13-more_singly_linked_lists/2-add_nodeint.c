#include "lists.h"
/**
 * *add_nodeint - function that adds a newnode at beginning of a listint_t.
 * @n: data type pointer of struct
 * @head: data type pointer of the head/next node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
