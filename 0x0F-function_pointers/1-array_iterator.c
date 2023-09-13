#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a parameter on each element
 * @array: array of pointers
 * @size: size of array
 * @action: pointer of function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(*array[i]);
	}
}
