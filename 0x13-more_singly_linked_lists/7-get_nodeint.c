#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: is the index of the node
 * Return: the required node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i= 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
