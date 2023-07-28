#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node -  a function that adds a new node at the beginning of a list
 * @head: the head
 * @str:  needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int x, counter = 0;
	list_t *list;

	if (head == NULL)
		return (NULL);

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
	{
		x++;
		counter++;
	}

	list->len = x;
	list->str = strdup(str);
	list->next = *head;

	*head = list;

	return (list);
}
