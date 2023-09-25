#include "lists.h"

/**
 * free_listint2 - function frees list
 * @head: pointer to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor;

	if (head == NULL)
		return;
	while (*head)
	{
		cursor = (*head)->next;
		free(*head);
		*head = cursor;
	}
	head = NULL;

}
