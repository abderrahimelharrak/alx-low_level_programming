#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a list
* @h: struct to input
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
