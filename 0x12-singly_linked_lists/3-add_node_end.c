#include "lists.h"
/**i
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0.
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * *add_node_end - Returns the lenght of a string.
 * @str: char pointer
 * @head: pointer of struct
 * Return: new_node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	if (!*head)
	{
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
