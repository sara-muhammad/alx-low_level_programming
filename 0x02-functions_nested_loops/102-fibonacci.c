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
	printf("%d, %d, ", fib[1], fib[2]);
	for (n = 2; n <= 49; n++)
	{
		fib[n] = fib[n - 2] + fib[n - 1];
		if (n == 49)
		{
			printf("%d", fib[n]);
		}
		else
		{
			printf("%d, ", fib[n]);

		}
	}
	return (0);
}
