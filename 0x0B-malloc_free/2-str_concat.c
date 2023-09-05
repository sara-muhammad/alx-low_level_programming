#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for ALX School students.
 * @s1: first array
 * @s2: second array
 * Return: Always 0.
 */


char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (len1 = 1; s1[len1] != '\0'; len1++)
	;
	for (len2 = 1; s2[len2] != '\0'; len2++)
	;
	ptr = (char *) malloc((len1 + len2) * sizeof(*s1) + 1);
	if (ptr == NULL)
		return (0);
	for (i = 0; i <= (len1 + len2); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';

	return (ptr);
}
