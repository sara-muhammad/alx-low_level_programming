#include"main.h"

/**
 * *_strncpy- check the code
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: function input
 *
 * Return: copied string.
 */


char *_strncpy(char *dest, char *src, int n)

{
	int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
