#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: the struct in the input
 * @n: int in the input
 * Return: success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;
	listint_t *tmp;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	temp->next = list;

	return (list);
}
