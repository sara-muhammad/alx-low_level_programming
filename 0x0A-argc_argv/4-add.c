#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - print the number of arguments
 * @argc : int
 * @argv : list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, check, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			check = isdigit(*argv[i]);
			
			if (check != 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
