#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - check the code
 * @b: int
 * Return: Always 0.
 */


void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(unsigned int b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
