#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node of a list
 * @head: input head
 * @index: input index
 * Return: success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int c = 0;

	while (c < index)
	{

		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			c++;
			head = head->next;
		}
	}
	return (head);
}
