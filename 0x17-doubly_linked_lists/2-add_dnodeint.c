#include "lists.h"

/**
 * add_dnodeint - adds new node to the begining of the list
 * @head: head pointer
 * @n: list data
 * Return: dlistint_t*, pointer to the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	h = *head;
	if (h == NULL)
		*head = new_node;
	else
	{
		new_node->next = h;
		h->prev = new_node;
		*head = new_node;
	}
	return (*head);

}
