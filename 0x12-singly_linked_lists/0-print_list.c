#include "lists.h"

/**
 * print_list - check the code
 * @h : pointer to structure
 * Return: Always 0.
 */


size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
