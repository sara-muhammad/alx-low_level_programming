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
	int i, j, check, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				check = isdigit(argv[i][j]);
				if (check == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
