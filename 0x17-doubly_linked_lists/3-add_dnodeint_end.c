#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node, *nouveau_node;

	if (head == NULL)
		return (NULL);

	nouveau_node = malloc(sizeof(dlistint_t));
	if (nouveau_node == NULL)
		return (NULL);
	nouveau_node->n = n;
	nouveau_node->next = NULL;

	tmp_node = *head;

	if (*head == NULL)
	{
		*head = nouveau_node;
		nouveau_node->prev = NULL;
		return (nouveau_node);
	}

	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}

	tmp_node->next = nouveau_node;
	nouveau_node->prev = tmp_node;

	return (nouveau_node);
}
