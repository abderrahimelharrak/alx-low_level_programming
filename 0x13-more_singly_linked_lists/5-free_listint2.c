#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: the input struct
 * Return: success
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
}
