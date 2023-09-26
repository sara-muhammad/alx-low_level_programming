#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head of the list
 * @index: is the index of the node
 * Return: the required node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{	
			tmp = head;
			break;
		}
		head = head->next;
		i++;
	}
	return (tmp);
}
