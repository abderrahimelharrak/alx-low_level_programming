#include "search_algos.h"


/**
 * linear_skip - searches for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: success
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *x;

	if (list == NULL)
		return (NULL);

	x = list;

	do {
		list = x;
		x = x->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go->index, x->n);
	} while (x->express && x->n < value);

	if (x->express == NULL)
	{
		list = x;
		while (x->next)
			x = x->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)x->index);

	while (list != x->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
