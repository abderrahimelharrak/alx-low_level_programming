#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning of alist
 * @head: the struct in input
 * @n: int in the input
 * Return: success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	if (head == NULL)
		return (NULL);

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);
	
	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}
