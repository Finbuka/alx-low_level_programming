#include "lists.h"

/**
 * sum_dlistint - sum all data of the linked list
 * @head: head pointer of the list
 * Return: int, the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_num = 0;

	while (head)
	{
		sum_num += head->n;
		head = head->next;
	}
	return (sum_num);
}
