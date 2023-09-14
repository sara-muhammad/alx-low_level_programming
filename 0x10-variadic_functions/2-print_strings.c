#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *space, *ptr;
	unsigned int i;

	if (separator == NULL || *separator == 0)
		space = "";
	else
		space = (char *)separator;
	va_start(ap, n);
	if (n > 0)
		printf("%s", va_arg(ap, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", space, ptr);
	}
	printf("\n");
	va_end(ap);

}
