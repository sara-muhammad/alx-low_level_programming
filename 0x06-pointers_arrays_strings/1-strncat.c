#include"main.h"

/**
 * *_strncat - function that concatenate strings
 *
 * @dest : destination
 *
 * @src : source
 *
 * @n : length of source
 *
 * Return: destination
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
