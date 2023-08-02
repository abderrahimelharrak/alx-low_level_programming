#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: the list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	*head = NULL;
}

