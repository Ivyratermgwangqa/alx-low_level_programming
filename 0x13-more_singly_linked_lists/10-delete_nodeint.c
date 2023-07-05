#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes node at index of listint_t
 * @head: s a pointer to a pointer of type listint_t
 * @index:  data type unsigned int index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *idx;
	unsigned int ctr = 0;
	listint_t *temp = *head;

	if (temp && (!index))
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (ctr + 1 == index)
		{
			idx = temp->next;
			if (idx)
			{
				temp->next = idx->next;
				free(idx);
				return (1);
			}
		}
		temp = temp->next;
		ctr++;
	}
	return (-1);
}
