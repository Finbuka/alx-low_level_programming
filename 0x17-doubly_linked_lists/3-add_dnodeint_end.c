#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end
 * @head: head pointer of the new node
 * @n: data of the new node
 * Return: dlistint_t*, address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	temp = *head;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!temp)
		*head = new_node;
	else
	{
	while (temp->next != NULL)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	}

	return (new_node);
}
