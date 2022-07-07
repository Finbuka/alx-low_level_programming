#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: head pointer to the list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
