#include "hash_tables.h"
/**
* hash_table_print - prints the hash table
* @ht: hash tables
* Return: success
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int x = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
		for (temp = ht->array[i]; temp; temp = temp->next)
		{
			if (x)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				x = 0;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
		}
	printf("}\n");
}
