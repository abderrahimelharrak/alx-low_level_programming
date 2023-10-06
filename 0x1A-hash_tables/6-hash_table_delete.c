#include "hash_tables.h"
/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: success
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp; temp = next)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	free(ht->array);
	free(ht);
}
