#include "main.h"

/**
 * clear_bit - set the indexed bit to 0
 * @n: pointer to the number
 * @index: index of the bit that will be set
 * Return: 1 if it set and 0 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;
	
	if (index > 63)
		return (-1);
	m = 1 << index;

	if (*n & m)
		*n ^= m;
 
	return (1);
}
