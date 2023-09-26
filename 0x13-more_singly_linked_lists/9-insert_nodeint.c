#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *before;
	listint_t *after;
	listint_t *h;
	unsigned int i = 0, count = 0;

	h = *head;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	if (idx > count)
		return (NULL);
	before = *head;
	while (i <= idx)
	{
		if (i == idx)
		{
			after = before;
			before = malloc(sizeof(listint_t));
			if (before == NULL)
			{
				free(before);
				return (NULL);
			}
			else
			{
				before->n = n;
				before->next = after;
			}
		}
		before = before->next;
		i++;
	}
	return (before);
}
