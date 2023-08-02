#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: the first element in the list
 * @n: a number
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;
	listint_t *tmp = *head;

	list = malloc(sizeof(listint_t));
	if (!list)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = list;

	return (list);
}
