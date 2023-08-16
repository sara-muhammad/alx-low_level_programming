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
	int n = 2;
	unsigned long fib[100];
	float total = 0;

	fib[0] = 1;
	fib[1] = 2;
	while (1)
	{
		if (total == 4, 000, 000)
		{
			break;
		}
		fib[n] = fib[n - 1] + fib[n - 2];
		if (fib[n] % 2 == 0)
		{
			total = total + fib[n];
		}
	}
	printf("%lu\n", total);
	return (0);
}
