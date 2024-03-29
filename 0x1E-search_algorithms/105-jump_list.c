#include "search_algos.h"
#include <math.h>


/**
 * jump_list - searches for a value in an array of integers
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t x, z, y;
	listint_t *p;

	if (list == NULL || size == 0)
		return (NULL);

	y = (size_t)sqrt((double)size);
	x = 0;
	z = 0;

	do {
		p = list;
		z++;
		x = z * y;

		while (list->next && list->index < x)
			list = list->next;

		if (list->next == NULL && x != list->index)
			x = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)x, list->n);

	} while (x < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)p->index, (int)list->index);

	for (; p && p->index <= list->index; p = p->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)p->index, p->n);
		if (p->n == value)
			return (p);
	}

	return (NULL);
}
