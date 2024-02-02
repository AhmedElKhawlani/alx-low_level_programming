#include "hash.h"

/**
 * hash_table_create - Creates a hash table;
 * @size: The size of the hash table;
 * Return: NULL if an error occured,
 *         a pointer to the new hash table otherwise.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
		return (NULL);
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
