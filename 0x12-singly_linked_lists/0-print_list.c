#include "lists.h"

/**
 * print_list - check the code
 * @h : pointer to structure
 * Return: Always 0.
 */


size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		list++;
		h = h->next;
	}

	return (list);
}
