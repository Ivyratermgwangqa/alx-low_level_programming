#include "lists.h"
/**
 * *add_node_end - Returns the lenght of a string.
 * @str: char pointer
 * @head: pointer of struct
 * Return: new_node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t num_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (num_node = 0; str[num_node]; num_node++)
		;

	new_node->len = num_node;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
