#include "lists.h"

/**
 * sum_dlistint - return the nth node of a dlistint list
 * @head: type pointer dlistint node
 * Return: Return the sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
