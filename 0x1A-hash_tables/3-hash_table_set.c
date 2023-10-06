#include "hash_tables.h"
/**
* hash_table_set - add an element to the table
* @ht: hash table
* @key: key of the element
* @value: value of the element
* Return: sucess
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *temp_value = NULL;
	hash_node_t *temp = NULL, *nouveau = NULL;

	if (!ht || !ht->array || !value)
		return (0);

	if (strlen(key) == 0 || !key)
		return (0);
	temp_value = strdup(value);
	if (!temp_value)
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temporal)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = temp_value;
			temp->value = strdup(value);
			free(temp_value);
			return (1);
		}
		temp = temp->next;
	}
	nouveau = malloc(sizeof(hash_node_t));
	if (!nouveau)
	{
		free(nouveau);
		return (0);
	}
	nouveau->key = strdup(key);
	nouveau->value = temp_value;
	nouveau->next = ht->array[i];
	ht->array[index] = new;
	return (1);
}
