#include "main.h"

/**
 * print_triangle - check the code
 *
 * @size: input function.
 */

void print_triangle(int size)
{
	int row, spaces, hashes;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
