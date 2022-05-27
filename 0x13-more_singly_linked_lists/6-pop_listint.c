#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_node_data;
	listint_t *next_node;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node_data = current->n;

	next_node = current->next;

	free(current);

	*head = next_node;

	return (head_node_data);
}
