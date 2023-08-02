#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: the list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *list, *list2;

	if (head == NULL)
		return (NULL);

	list1 = *head;
	while (list1)
	{
		list2 = list1;
		list1 = list1->next;
		free(list2);
	}
	*head = NULL;
}

