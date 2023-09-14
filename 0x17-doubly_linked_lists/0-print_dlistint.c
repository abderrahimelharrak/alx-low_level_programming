#include "lists.h"

/**
 * print_dlistint - function that prints a list
 * @h: pointer to list to print
 * Return: success
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	if (h == NULL)
	{
		return (node);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
