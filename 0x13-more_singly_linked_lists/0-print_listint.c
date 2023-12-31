#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: struct input
 * Return: nothing
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
