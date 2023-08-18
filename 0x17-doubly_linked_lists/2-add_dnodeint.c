#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to a pointer that points to the head of the list.
 * @n: The integer value to store in the new node.
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_element;
	}
	*head = new_element;

	return (new_element);
}
