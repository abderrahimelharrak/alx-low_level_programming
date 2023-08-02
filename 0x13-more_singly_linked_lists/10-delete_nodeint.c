#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a listint node at index
 * @head: head of list
 * @index: index to delete at
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list, *list2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
		return (1);
	}

	for (list = *head; index && list->next != NULL; index--, list = list->next)
		list2 = list;
	if (index)
		return (-1);

	list2->next = list2->next->next;
	free(list);
	return (1);
}
