#include "lists.h"

/**
 * pop_listint - a function thnat delete the head of a list
 * @head: struct in the input
 * Return: success
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *list;

	if (*head == NULL)
		return (0);

	x = (*head)->n;

	list = *head;
	*head = (*head)->next;

	free(list);
	return (x);
}
