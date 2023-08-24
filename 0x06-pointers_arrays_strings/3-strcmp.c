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
	int flag = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
	if (s1 != s2)
	{
		flag = 1;
	}
	s1++;
	s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
	return (1);
	if (flag == 0)
	return (0);
	else
	return (1);
}
