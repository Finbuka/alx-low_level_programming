#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 * @head: pointer to the head node
 * @index: index of the node to return
 * Return: dlistint_t* pointer to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}

	if (head)
		return (head);
	return (NULL);
}
