#include "lists.h"
/**
 * get_dnodeint_at_index - get the node of a linked list
 * @head: the head of the list
 * @index: index
 * Return: success
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t x = 0;

	while (head != NULL)
	{
		if (x == index)
			break;
		x++;
		head = head->next;
	}

	return (head);
}
