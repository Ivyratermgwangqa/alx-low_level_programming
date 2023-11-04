#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table
 * @ht: The hash table to search
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	for (unsigned long int i = idx; ht->array[i]; ++i)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
	}
	return (NULL);
}
