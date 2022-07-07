#include "lists.h"

/**
 * dlistint_len - counts how many elements is in a linked list
 * @h: pointer to the head node of the list
 * Return: size_t number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
