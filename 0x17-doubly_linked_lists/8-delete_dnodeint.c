#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from the list
 *
 * @head: head pointer to the list
 * @index: index of the node to be deleted
 * Return: int, return 1 on success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i, don = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);


	for (i = 0; temp; i++)
	{
		if (i == 0 && index == 0)
		{
			if (temp->next == NULL)
				*head = NULL;
		else
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
			free(temp);
			don = 1;
		} else if (i == index && temp->next != NULL)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			don = 1;
		} else if (i == index && temp->next == NULL)
		{
			temp->prev->next = NULL;
			free(temp);
			don = 1;
		}
		temp = temp->next;
	}
	if (don)
		return (1);
	return (-1);
}
