#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: A pointer to the hash table
 * @key: The key, string
 * @value: The value corresponding to a key
 * Return: 0 if fails, 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, current_index;
	char *copy_value;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_index = index;

	while (ht->array[current_index] != NULL)
	{
		if (strcmp(ht->array[current_index]->key, key) == 0)
		{
			free(ht->array[current_index]->value);
			ht->array[current_index]->value = copy_value;
			free(copy_value);
			return (1);
		}
		current_index++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(copy_value);
		free(new_node);
		return (0);
	}
	new_node->value = copy_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
