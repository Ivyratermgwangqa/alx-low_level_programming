#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted list of integers
*             using the Jump search algorithm
* @list: Pointer to the head of the list to search in
* @size: Number of nodes in the list
* @value: Value to search for
* Return: Pointer to the first node where value is located,
*         or NULL if not found or list is NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump = sqrt(size);
listint_t *prev = list, *curr = list;

if (list == NULL || size == 0)
return (NULL);

while (curr->index < size - 1 && curr->n < value)
{
prev = curr;
for (size_t i = 0; i < jump && curr->next != NULL; i++)
curr = curr->next;
printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

while (prev != NULL && prev->index <= curr->index)
{
printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
if (prev->n == value)
return (prev);
prev = prev->next;
}

return (NULL);
}
