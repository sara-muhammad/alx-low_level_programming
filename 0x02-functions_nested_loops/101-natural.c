#include"main.h"
/**
 * main - entry point
 *
 * Description: program computes and prints the sum of all the multiples
 *
 * Return: 0(success)
*/


int main(void)
{
	int i, total = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total = total + i;
		}
		i++;
	}
	printf("%d\n", total);

	return (0);
}
