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
	unsigned long fib[50];

	fib[0] = 1;
	fib[1] = 2;
	printf("%lu, %lu, ", fib[0], fib[1]);
	for (n = 2; n <= 49; n++)
	{
		if (n < 49)
		{
			fib[n] = fib[n - 1] + fib[n - 2];
			printf("%lu, ", fib[n]);
		}
		if (n == 49)
		{
			fib[n] = fib[n - 1] + fib[n - 2];
			printf("%lu", fib[n]);
		}
	}

	return (0);
}
