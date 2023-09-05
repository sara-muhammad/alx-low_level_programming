#include "main.h"
#include <string.h>

/**
 * _strdup - check the code for ALX School students.
 * @str : array we want to duplicate
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	int i;
	char *ptr;

	if (str == NULL || size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
