#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of list
 * @n: integer
 * @head: pointer to th head of list
 * Return: pointer to the new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
	{
		return (NULL);
	}
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
