#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - a function that add a new node in the end
 * @head: the head
 * @str: string need to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int x, y = 0;
	list_t *list;
	list_t *tmp;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
	{
		x++;
		y++;
	}

	list->len = x;
	list->str = strdup(str);
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = list;

	return (list);
}
