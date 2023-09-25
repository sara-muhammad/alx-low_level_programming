#include "lists.h"

/**
 * free_listint - free list
 * @head: pointer to head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head);
		head = cursor;
	}

}
