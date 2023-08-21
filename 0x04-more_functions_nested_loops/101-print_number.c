#include "main.h"

/**
 * print_number - check the code
 *
 * @n: function input
 */



void print_number(int n)
{
	unsigned int i = n;

	if (i < 0)
	{
		_putchar(45);
		i = -i
	}
	if (i / 10)
	{
		pr9nt_number( i / 10);
	}
	_putchar(i % 10 + '0');
}
