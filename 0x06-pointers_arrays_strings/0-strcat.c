#include"main.h"

/**
 * *_strcat - check the code
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: char.
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
