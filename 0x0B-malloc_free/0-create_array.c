#include "main.h"

/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
