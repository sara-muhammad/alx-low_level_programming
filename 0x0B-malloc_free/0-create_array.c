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
	int i, j;
	char *ptr = malloc(size);

	if (size == 0)
		return (NULL);

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (ptr[i] != 0)
				ptr[i] = c;
		}
	}
	return (ptr);
}
