#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head of node
 * @index: index to delete
 * Return: success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *follow = NULL;
	unsigned int x = 0;

	if ((*head) == NULL)
	{
		return (-1);
	}
	tmp = (*head);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	follow = tmp->next->next;
	if (tmp->next->next != NULL)
		tmp->next->next->prev = tmp;
	free(tmp->next);
	tmp->next = follow;
	return (1);
}
