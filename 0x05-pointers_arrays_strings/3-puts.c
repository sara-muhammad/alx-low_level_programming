#include"main.h"

/**
 * _puts - check the code
 *
 * @str: function input.
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;

	}
	_putchar('\n');

}
