#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
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
				break;
			}
		}
	}
	return(0);
}
