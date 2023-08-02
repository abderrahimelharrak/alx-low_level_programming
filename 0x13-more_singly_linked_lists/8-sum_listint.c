#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in a list
 * @head: head in input
 * Return: success
 */
int sum_listint(listint_t *head)
{
	int summe = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		summe += head->n;
		head = head->next;
	}

	return (summe);
}
