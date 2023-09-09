#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1 : first string
 * @s2 : second string
 * @n : number of bytes of s2
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = sizeof(s1);
	l2 = sizeof(s2);
	ptr = malloc(l1 + n);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{	ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}
