#include"main.h"

/**
 * main - entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers
 *
 * Return: 0(success)
*/


int main(void)
{
	long fib1 = 1, fib2 = 2, sum = 0;
	int i = 3;

	while (i <= 98)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		i++;
	}
	printf ("%ld", sum);
	return (0);
}
