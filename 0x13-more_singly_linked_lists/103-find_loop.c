#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the first node of a loop in a linked list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: If no loop is detected - NULL.
 *         Otherwise - a pointer to the first node of the loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
if (head == NULL || head->next == NULL)
return (NULL);

listint_t *slow = head;
listint_t *fast = head;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
