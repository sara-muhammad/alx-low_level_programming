#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the minimum number of coins to make change for amount of money
 *
 * @argc: int represent number of arguments
 *
 * @argv: array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int cents, i;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		i++;
	}
	printf("%d\n", i);
	return (0);
}

