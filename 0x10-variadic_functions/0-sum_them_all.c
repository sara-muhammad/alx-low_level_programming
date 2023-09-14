#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while(i--)
	{
		s += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (s);
}
