#include"main.h"

/**
 * _strcmp - check the code
 *
 * @s1:function input
 *
 * @s2: function input
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
