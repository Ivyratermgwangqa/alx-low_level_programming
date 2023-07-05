#include "lists.h"
/**
 * sum_listint - function that returns sum of all the data (n) of listint_t
 * @head: a pointer to a pointer to listint_t
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

