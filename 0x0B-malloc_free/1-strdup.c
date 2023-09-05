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

	for (size = 0; str[size] != '\0'; size++)
	;
	if (str == NULL || size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
