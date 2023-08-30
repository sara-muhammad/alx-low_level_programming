#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 *
 * @s: function input
 *
 * Return : Always 0
 */


int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
