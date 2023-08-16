#include"main.h"

/**
 * main - entry point
 *
 * Description: programm computes fibonacci numbers
 *
 * Return: 0(success)
*/


int main(void)
{
	int n;
	int fib[50];
	int sum;

	fib[0] = 1;
	fib[1] = 2;

	for (n = 2; n <= 49; n++)
	{
		sum = fib[n - 2] + fib[n - 1];
		printf("%d,", sum);
	}
	return (0);
}
