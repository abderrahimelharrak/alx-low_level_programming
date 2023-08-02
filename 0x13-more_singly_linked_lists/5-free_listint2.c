#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: the input struct
 * Return: success
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (list = (*head)->next; *head != NULL; *head = list)
	{
		list = (*head)->next;
		free(*head);
	}
}
