#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int l = strlen(nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((l + 1) * size);
	if (ptr == 0)
		return (NULL);
	for (int i = 0; ptr[i] != '\0'; i++)
		ptr[i] = '0';
	return (ptr);
}
