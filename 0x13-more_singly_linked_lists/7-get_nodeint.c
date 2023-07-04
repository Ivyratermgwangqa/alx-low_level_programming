#include "lists.h"
/**
 * *get_nodeint_at_index -  function that returns the nth node of a listint_t
 * @head: is a pointer to a pointer of type listint_t
 * @index: is the index of the node, starting at 0.
 * Return: head node data n or null
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int ctr = 0;

	while (temp != NULL)
	{
		if (ctr == index)
			return (temp);
		ctr++;
		temp = temp->next;
	}
	return (NULL);
}
