#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a list
 * @head: head of the list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	data = tmp->n;
	free(tmp);
	return (data);
}
