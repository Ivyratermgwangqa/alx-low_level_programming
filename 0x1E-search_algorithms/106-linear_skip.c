#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found or list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list, *prev;

    if (list == NULL)
        return (NULL);

    while (current != NULL)
    {
        prev = current;
        if (current->express == NULL || current->n >= value)
        {
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
            if (current->n == value)
                return (current);
            break;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
        current = current->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev != NULL && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
