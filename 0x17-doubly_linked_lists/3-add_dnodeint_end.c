#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer that points to the head of the list.
 * @n: The data to be stored in the new node.
 * Return: A pointer to the new node, or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *current;

        new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;

        if (*head == NULL)
	{
		*head = new_element;
		new_element->prev = NULL;
		new_element->next = NULL;
		return (new_element);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;

	new_element->prev = current;
	new_element->next = NULL;
	current->next = new_element;
	return (new_element);
}
