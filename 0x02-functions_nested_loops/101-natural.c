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
	int n;
	int sum1 = 0;
	int sum2 = 0;
	int total = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0)
			sum1 = sum1 + n;
		if (n % 5 == 0)
			sum2 = sum2 + n;
	}
	total = sum1 + sum2;
	printf("%d", total);

	return (0);
}
