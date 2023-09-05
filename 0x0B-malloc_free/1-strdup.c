#include "main.h"

/**
 * _strdup - check the code for ALX School students.
 * @str : array we want to duplicate
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (size = 1; str[size] != '\0'; size++)
	;
	ptr = (char *) malloc(size * sizeof(*str)+1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
