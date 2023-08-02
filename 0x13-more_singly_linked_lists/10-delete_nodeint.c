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
	listint_t *list1, *list2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		list1 = (*head)->next;
		free(*head);
		*head = list1;
		return (1);
	}

	for (list1 = *head; index && list1->next != NULL; index--, list1 = list1->next)
		list2 = list1;
	if (index)
		return (-1);

	list2->next = list2->next->next;
	free(list1);
	return (1);
}
