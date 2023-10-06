#include "hash_tables.h"
/**
* hash_table_create - create a new hash table
* @size: size of the array
* Return: success
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hashtable = malloc(sizeof(hash_table_t));

	if (!new_hashtable)
		return (NULL);
	new_hashtable->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_hashtable->array)
	{
		free(new_hashtable);
		return (NULL);
	}
	while (i < size)
	{
		new_hashtable->array[i] = NULL;
		i++;
	}
	new_hashtable->size = size;
	return (new_hashtable);
}
