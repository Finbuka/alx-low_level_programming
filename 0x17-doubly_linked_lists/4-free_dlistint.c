#include "lists.h"

/**
 * free_dlistint - free all allocated memory
 * @head: pointer to the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
