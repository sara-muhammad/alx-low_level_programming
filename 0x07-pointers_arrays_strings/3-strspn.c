#include "main.h"
#include <stdio.h>

/**
 * _strspn- check the code
 * @s : function input
 * @accept : function input
 * Return: Always 0.
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, sum;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			sum++;
		}
	}
	return (sum);
}
