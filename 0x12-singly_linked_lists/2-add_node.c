#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer of struct node
 * @str:  pointer of struct
 * Return: elements of the str i
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t num_node = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	while (str[num_node])
		num_node++;

	new->len = num_node;
	new->next = *head;
	*head = new;

	return (*head);
}
