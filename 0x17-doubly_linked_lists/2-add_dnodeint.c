#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: successe
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL, *nouveau_node = NULL;

	if (head == NULL)
	return (NULL);

	nouveau_node = malloc(sizeof(dlistint_t));
	if (nouveau_node == NULL)
		return (NULL);
	nouveau_node->n = n;
	nouveau_node->prev = NULL;

	tmp_node = *head;
	*head = nouveau_node;
	nouveau_node->next = tmp_node;

	if (tmp_node != NULL)
		tmp_node->prev = *head;

	return (nouveau_node);
}
