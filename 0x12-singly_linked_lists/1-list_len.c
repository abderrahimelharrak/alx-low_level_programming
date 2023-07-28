#include "lists.h"

/**
* list_len - a function return the number of elements in a list
* @h: the list we work on
* Return: success
*/
size_t list_len(const list_t *h)
{
	int x;

	x = 0;
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
