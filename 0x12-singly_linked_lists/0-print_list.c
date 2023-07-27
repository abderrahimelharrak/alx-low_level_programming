#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the struct we work on
 * Return: success
 */

size_t print_list(const list_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}

	return (c);
}
