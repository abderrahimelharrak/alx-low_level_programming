#include "lists.h"

/**
 * reverse_listint - a function to reverse a list
 * @head: the input struct
 * Return: success
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list = NULL, *list2 = NULL;

	if (!head || !*head)
		return (NULL);
	list = *head;
	*head = NULL;
	while (list)
	{
		next = list->next;
		list->next = *head;
		*head = list;
		list = list2;
	}
	return (*head);
}
