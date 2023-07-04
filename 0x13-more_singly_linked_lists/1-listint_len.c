#include "lists.h"
/**
 * listint_len - function that returns the number of elements in listint_t.
 *  @h: data type pointer of struct
 *  Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *newnode = h;

	for (; newnode; newnode = newnode->next)
		i++;
	return (i);
}
