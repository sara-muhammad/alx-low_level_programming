#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < 63; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}
