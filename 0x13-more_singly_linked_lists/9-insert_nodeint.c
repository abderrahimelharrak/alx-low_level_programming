#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a listint_t node at index in list
 * @head: head of the input
 * @idx: index to add node at, starting at 0
 * @n: value of node to add
 * Return: success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list1, *list2 = NULL;
	int x = idx;

	if (head == NULL)
		return (NULL);

	for (list1 = *head; x && list1 != NULL; x--, list1 = list1->next)
		list2 = list1;
	if (x)
		return (NULL);

	list1 = malloc(sizeof(listint_t));
	if (list1 == NULL)
		return (NULL);

	if (list2 != NULL)
	{
		list1->next = list2->next;
		list2->next = list1;
	}
	else
	{
		list1->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		list1->next = *head;
		*head = list1;
	}
	list1->n = n;
	return (list1);
}
