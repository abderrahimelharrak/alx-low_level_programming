#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of node
 * @idx: index to insert node
 * @n: data for new node
 * Return: success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int x;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *h;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = new_node;
		else
		{
			new_node->next = *h;
			tmp->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	for (x = 0; x < (idx - 1); x++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
