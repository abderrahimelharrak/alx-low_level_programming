#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: struct in the input
 * Return: success
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
