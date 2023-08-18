#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in a dlistint list.
 * @h: A pointer to a pointer that points to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The data to be stored in the new node.
 * Return: A pointer to the new node, or NULL if memory allocation fails or index is invalid.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_element;

        if (idx == 0)
		return (add_dnodeint(h, n));

        while (idx != 1)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
		idx--;
	}
	if (current_node->next == NULL)
                return (add_dnodeint_end(h, n));

        new_element = malloc(sizeof(dlistint_t));
        if (new_element == NULL)
                return (NULL);

        new_element->n = n;
        new_element->prev = current_node;
        new_element->next = current_node->next;
        current_node->next->prev = new_element;
        current_node->next = new_element;

	return (new_element);
}
