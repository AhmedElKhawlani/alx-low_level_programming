#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table;
 * @ht: A pointer to the hash table;
 * @key: The key to add;
 * @value: The value associated with key;
 * Return: 1 if success 0 otherzise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
