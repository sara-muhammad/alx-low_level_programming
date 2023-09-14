#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *space;
	unsigned int i = 0;

	if (separator == NULL || *separator == 0)
		space = "";
	else
		space = (char *)separator;
	va_start(ap, n);
	if (n > 0)
		printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", space, va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);

}
