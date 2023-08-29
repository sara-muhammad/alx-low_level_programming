#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: string
 * @needle:substring
 * Return: Always 0.
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&needle[i]);
			}
		}
	} 
	return (NULL);
}
