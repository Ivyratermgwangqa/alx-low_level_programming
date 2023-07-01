#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the struct.
 * Return: free head.
 *
 *
 */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}
