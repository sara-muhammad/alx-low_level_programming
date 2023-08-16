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
	unsigned long fib1 = 0, fib2 = 1, sum;
	long total = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
		{
			break;
		}
		if (sum % 2 == 0)
		{
			total = total + sum;
		}
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%ld\n", total);
	return (0);
}
