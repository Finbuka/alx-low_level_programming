#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_element = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_element++;
	}
	return (num_element);
}
