#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key for the data
 * @value: value to be stored
 * Return: 0 if fail or 1 if success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *copy_val;
	shash_node_t *new_ht, *tp_t;

	if (ht == NULL || key == NULL || *key == '0' || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (tp_t = ht->shead; tp_t != NULL; tp_t = tp_t->snext)
	{
		if (strcmp(tp_t->key, key) == 0)
		{
			free(tp_t->value);
			tp_t->value = copy_val;
			return (1);
		}
	}
	new_ht = malloc(sizeof(shash_node_t));
	if (new_ht == NULL)
	{
		free(copy_val);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(copy_val);
		free(new_ht);
		return (0);
	}
	new_ht->value = copy_val;
	new_ht->next = ht->array[idx];
	ht->array[idx] = new_ht;

	if (ht->shead == NULL)
	{
		new_ht->sprev = NULL;
		new_ht->snext = NULL;
		ht->shead = new_ht;
		ht->stail = new_ht;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_ht->sprev = NULL;
		new_ht->snext = ht->shead;
		ht->shead->sprev = new_ht;
		ht->shead = new_ht;
	}
	else
	{
		for (tp_t = ht->shead; tp_t->snext != NULL &&
			 strcmp(tp_t->snext->key, key) < 0; tp_t = tp_t->snext)
			;
		new_ht->sprev = tp_t;
		new_ht->snext = tp_t->snext;
		if (tp_t->snext == NULL)
			ht->stail = new_ht;
		else
			tp_t->snext->sprev = new_ht;
		tp_t->snext = new_ht;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value from the sorted hash table
 * @ht: pointer to the hash table
 * @key: key to the data
 * Return: value associated with the key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	for (current_node = ht->shead; current_node != NULL; current_node = current_node->snext)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
	}
	return (NULL);
}

/**
 * shash_table_print - prints the sorted hash table
 * @ht: pointer to the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (current_node = ht->shead; current_node != NULL; current_node = current_node->snext)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (current_node = ht->stail; current_node != NULL; current_node = current_node->sprev)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the sorted hash table
 * @ht: pointer to the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != NULL; node = temp)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}
	free(head->array);
	free(head);
}
