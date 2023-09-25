#include "lists.h"

/**
 * listint_len - count number of elements in list
 * @h: pointer to the head of list
 *
 * Return: number of nodes 
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *cursor = h;

	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}
	return (count);
}
