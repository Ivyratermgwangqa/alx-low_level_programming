#include "lists.h"
/**
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
 * *add_node - adds a new node at the beginning of a list_t list.
 * @strlen - Returns the lenght of a string.
 * @head: pointer of struct node
 * @str:  pointer of struct
 * Return: elements of the str i
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = temp;
	node->len = strlen(temp);
	node->next = *head;
	*head = node;
	return (node);
	if (temp == NULL)
	{
		free(node);
		return (NULL);
	}
}
