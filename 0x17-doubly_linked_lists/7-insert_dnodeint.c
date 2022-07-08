#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: double pointer to the head node
 * @idx: index to add the new node
 * @n: node data
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i, ins = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	temp = *h;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL && idx != 0)
		return (NULL);
	else if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}

	for (i = 0; temp; i++)
	{
		if (i == idx && i == 0)
		{
			new_node->next = temp;
			temp->prev = new_node;
			*h = new_node;
			ins = 1;
		} else if (i == idx && temp->next != NULL)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			temp->prev->next = new_node;
			temp->prev = new_node;
			ins = 1;
		} else if (i == idx && temp->next == NULL)
		{
			temp->next = new_node;
			new_node->prev = temp;
			ins = 1;
		}

		temp = temp->next;
	}
	if (!ins)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
