#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 *
 * Return: sum of the number
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
