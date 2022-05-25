#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num_ocu = 0;

	while (h)
	{
		num_ocu++;
		h = h->next;
	}
	return (num_ocu);
}
